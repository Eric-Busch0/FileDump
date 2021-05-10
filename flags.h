#ifndef _FLAGS_H
#define _FLAGS_H

#define TOTAL_FLAGS (2)

#include <stdbool.h>

enum flags_idx
{
    STATS,
    DUMP
};

static char prog_flags[] = {'s', 'd'};

void get_flags(char **arguments, char *flags, int total_flags);
bool is_flag(char *argument);

#endif
