#include "flags.h"

void get_flags(char **arguments, char *flags, int total_flags)
{
    for (int i = 0; i < total_flags; i++)
    {
        if (is_flag(arguments[i]))
        {
            flags[i] = 'd';
        }
    }
}

bool is_flag(char *argument)
{

    return true;
}