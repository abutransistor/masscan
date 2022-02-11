#ifndef MAIN_GLOBALS_H
#define MAIN_GLOBALS_H
#include <time.h>

extern unsigned volatile is_tx_done;
extern unsigned volatile is_rx_done;
extern time_t global_now;

extern int arg_ct;
extern char **args;
extern int arg_ben_index;

#endif
