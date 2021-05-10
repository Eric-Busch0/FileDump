#include "flags.h"

bool get_flags(int argc, char **argv, char *flags)
{
    bool are_flags = false;

    print_flags(flags, argc);
    int j = 0;
    for (int i = 0; i < argc; i++)
    {
        if (is_flag(argv[i]))
        {
            flags[j] = prog_flags[i];
            j++;
            are_flags = true;
        }
    }

    return are_flags;
}

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