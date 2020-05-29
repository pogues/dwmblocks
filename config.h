// Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
    /*Icon*/    /*Command*/        /*Update Interval*/    /*Update Signal*/
    {"", "SCRIPT_DIR/pacpackages", 0,    8},
    {"", "SCRIPT_DIR/memory",      60,   14},
    {"", "SCRIPT_DIR/cpu",         10,   18},
    {"", "SCRIPT_DIR/volume",      0,    10},
    {"", "SCRIPT_DIR/internet",    10,   4},
    {"", "SCRIPT_DIR/nettraf",     1,    16},
    {"", "SCRIPT_DIR/clock",       60,   1},
};

// sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = ' ';

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
