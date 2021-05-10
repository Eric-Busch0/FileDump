#ifndef _ARGUMENT_PARSER_H
#define _ARGUMENT_PARSER_H

#include <stdbool.h>

bool get_flags(int argc, char **argv, char *flags);
bool get_file(int argc, char **argv, char *filename);

#endif