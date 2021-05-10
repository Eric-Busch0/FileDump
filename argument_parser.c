#include "argument_parser.h"
#include <string.h>
#include <stdio.h>

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