// Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
  /* icon    command             update interval    update signal */
  /*{ "",      "sb-mailbox",       180,               8 },*/
  /*{ "",      "sb-music",         0,                 7 },*/
  { "",      "sb-volume",        1,                 6 },
  { "",      "sb-internet",      20,                5 },
  { "",      "sb-nettraf",       1,                 4 },
  { "",      "sb-torrent",       20,                3 },
  { "",      "sb-clock",         1,                 2 },
  { "",      "sb-name",          0,                 1 },
};

// Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *delim = " | ";
