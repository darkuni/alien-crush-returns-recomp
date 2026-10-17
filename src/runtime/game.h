// Per-game constants for Alien Crush Returns (WE9E, WiiWare, NTSC-U, Hudson).
// Addresses come from config/symbols.txt (dtk + naming passes vs Chocobo / Gradius / Castlevania);
// r13 offsets were read from the instruction that loads the variable in the named SDK function.
#pragma once
#define GAME_NAME        "Alien Crush Returns"
#define GAME_EXE         "aliencrush"
#define GAME_INI         "aliencrush.ini"
#define GAME_DEFAULT_CONTROLS "nunchuk"   // the game asks for a Nunchuk (left flipper = Z/stick, right = A/B)

#define G_AX_RESUME_CB          0x8017667Cu   // __AXDSPResumeCallback
#define G_DECREMENTER_CB        0x8014EC8Cu   // DecrementerExceptionCallback
#define G_IOS_FREE              0x8018767Cu   // iosFree(heap, ptr)
#define G_OS_EXIT_THREAD        0x801579ACu   // OSExitThread
#define G_SDA_INTERRUPT_TABLE   0x55D0u       // __OSGetInterruptHandler: lwz r4,-0x55D0(r13)
#define G_SDA_IOS_HEAP          0x6D14u       // __ios_Ipc2: lwz r3,-0x6D14(r13) before iosFree
#define G_FN_OS_EXIT_THREAD     f_801579AC
#define G_FN_IOS_FREE           f_8018767C
