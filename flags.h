#ifndef _FLAGS_H
#define _FLAGS_H

#include <stdbool.h>

enum flags_idx
{
    STATS,
    DUMP, 
    TOTAL_FLAGS
};

static char prog_flags[] = {'s', 'd'};

bool get_flags(int argc, char **argv, char *flags);
int is_flag(char *argument);
void print_flags(char * flags, int size);
#endif
