#include "flags.h"

int is_flag(char *argument)
{
    // printf("arg = %s\n", argument);
    if (argument[0] != '-')
    {
        return false;
    }
    for (int i = STATS; i < TOTAL_FLAGS; i++)
    {

        if (argument[1] == prog_flags[i])
        {
            printf("flag: %c\n", argument[1]);
            return i;
        }
    }
    return -1;
}

void print_flags(char *flags, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%c", flags[i]);
    }
}