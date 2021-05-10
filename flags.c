#include "flags.h"

void get_flags(char **arguments, char *flags, int total_flags)
{
    for (int i = 0; i < total_flags; i++)
    {
        if (is_flag(arguments[i]))
        {
            flags[i] = prog_flags[i];
        }
    }
}

int is_flag(char *argument)
{
    if (argument[0] != '-')
    {
        return false;
    }
    for (int i = STATS; i < TOTAL_FLAGS; i++)
    {
        if (argument[1] == prog_flags[i])
        {
            return i;
        }
    }
    return -1;
}

void print_flags(char * flags, int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%c", flags[i]);
    }
}