# Alien Crush Returns (WE9E, WiiWare NTSC-U, Hudson) - native recomp notes

Same recompiler/runtime as the ReBirth ports, but a different engine (Hudson, 3D) and an older SDK
(RVL SDK Aug 2007 - Jan 2008, NW4R G3D/LYT/SND 2008, DWC/NHTTP/SSL/SO, KPAD Aug 2007) - closest to Chocobo.

## Status (first session)
- Linux headless: health screen, ESRB online notice, save creation (banner.bin, wwac_00.dat, nocopy),
  offline error 50299 (correct for no network), title, name entry, story intro, controls tutorial,
  gameplay with the fully lit 3D table, ball in play and scoring.
- Windows exe built, not yet run on Windows. Audio not verified.

## Source title
- WAD sha1 5d85deb50dd7633e042f0d62b50dec410af0e0dd. Title 00010001-57453945 (WE9E), IOS36, group 18.
- Contents: 0 meta, 1 main DOL LZ11 (3,095,264 bytes, sha1 303ed4e0941a55e1a4aa57f7cec65cc9a864f1c0),
  2 U8 data (ball/camera/field/flipper/enemy... .bin, brsar, brtex), 3 U8 (0x8001), 4 loader DOL.

## Binary
- Entry 0x8000403C, main 0x80006CB0, .text 0x80006B20-0x80268FF0, dtk: 9,034 functions.
  Libraries from ~0x800F6320.
- Naming: xmatch vs Chocobo (3,689), Gradius (2,076), Castlevania (1,530), size-sequence refs (1,761).
  Manual: AIStopDMA 801745F0, AIGetDMABytesLeft 80174604, AIGetDMALength 8017462C,
  WPADGetRadioSensitivity 8018CBD8, WPADStartSimpleSync/StopSimpleSync/SetSimpleSyncCallback/
  RegisterAllocator/GetStatus 8018CBC0..CBD4 (Chocobo's own names here were shifted by one).
- KPAD is the old API: KPADInit (stub) + KPADRead (HLE), like Chocobo.

## game.h constants
- __AXDSPResumeCallback 0x8017667C, DecrementerExceptionCallback 0x8014EC8C, iosFree 0x8018767C,
  OSExitThread 0x801579AC, SelectThread idle loop 0x80157618, interrupt table r13-0x55D0,
  IOS heap r13-0x6D14. GAME_DEFAULT_CONTROLS "nunchuk" (the title asks for a Nunchuk).

## Runtime fixes made here (shared code - worth carrying back to the other ports)
1. hle_thread.cpp: thread reuse. The game restarts the same OSThread after it exits; the runtime used
   to wake the old host thread mid-exit ("OSExitThread returned", hang after 49 frames). Now a host
   thread that hands off while its OSThread state is MORIBUND/EXITED is unmapped and finishes
   (ThreadExit exception), so the next OSLoadContext on that context starts a fresh host thread.
2. hle_ios.cpp: /dev/net/ncd/manage reports link status 2 (not connected) and an empty config.
   SOStartupEx then fails at once with -0x2D instead of a 60 s timeout ("Transmitting data..." loop).
3. gx_render.cpp: spotlight cosine sign. GXInitLightDir stores the direction negated; the renderer
   negated it again, so narrow spotlights lit nothing (table rendered at ambient only).
4. gx_render.cpp: EFB clears in alpha-less pixel formats (RGB8/RGB565) now write alpha 1, so
   EFB->texture copies have alpha 1 as on hardware. The table's post-process passes composite with
   texture alpha and were invisible (black playfield) before.
5. config.h: per-game default controller layout (GAME_DEFAULT_CONTROLS).

## Testing notes
- Save prompt defaults to NO; tap UP/LEFT then A. AUTOPRESS presses need edges (holding does nothing).
- The game presents every second retrace, so frame numbers ~ VI count / 2.

## Build
    python3 tools/prepare_wad.py Alien_Crush_Returns_NTSC-U.wad game
    cd src && python3 recomp.py ../game/main.dol symbols.txt gen 300
    cmake -S . -B build -G Ninja -DCMAKE_CXX_COMPILER=clang++ && ninja -C build -j2      (Linux headless)
    cmake -S . -B build-win -G Ninja -DCMAKE_TOOLCHAIN_FILE=mingw.cmake -DSDL2_DIR=<SDL2>/x86_64-w64-mingw32 && ninja -C build-win -j1
