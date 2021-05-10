#include "argument_parser.h"
#include <string.h>
#include <stdio.h>
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

bool get_file(int argc, char **argv, char *filename)
{
    bool files_given = false;

    for (int i = 1; i < argc; i++)
    {
        if (argv[i][0] != '-')
        {
            strcpy(filename, argv[i]);
        }
    }

    return files_given;
}