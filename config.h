// Modify this file to change what commands output to your statusbar, and recompile using the make command.
#define SCRIPT_DIR "~/.config/dwm/bar/"

static const Block blocks[] = {
    /*Icon*/    /*Command*/        /*Update Interval*/    /*Update Signal*/
    {"", SCRIPT_DIR "spacer",      0,    0},
    {"", SCRIPT_DIR "pacpackages", 3600, 8},
#ifdef LAPTOP
    {"", SCRIPT_DIR "battery",     60,   15},
#endif
    {"", SCRIPT_DIR "internet",    10,   4},
    {"", SCRIPT_DIR "nettraf",     1,    16},
#ifndef LAPTOP
    {"", SCRIPT_DIR "volume",      0,    10},
#endif
    {"", SCRIPT_DIR "memory",      60,   14},
    {"", SCRIPT_DIR "cpu",         10,   18},
#ifndef LAPTOP
    {"", SCRIPT_DIR "gpu",         10,   19},
#endif
    {"", SCRIPT_DIR "clock",       60,   1},
};

// sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = ' ';

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
