#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdbool.h>

#include "main.h"
#include "flags.h"

int main(int argc, char **argv)
{
    char passed_flags[TOTAL_FLAGS];

#ifdef _ASSERT_ENABLE

    // require arguments to proceed
    assert(argc > 1);

    // display arguments
    for (int i = 0; i < argc; i++)
    {
        printf("%s\n", argv[i]);
    }
#endif

    // check to see if flags have been set and been given a file
    if (argc > 2)
    {
        get_flags(argc, argv, passed_flags);
    }
    
    char filename[MAX_FILEPATH_LENGTH], c;

    /* If no is file given, ask for one.
     Otherwise, store the given filename in the filename buffer */
    if (argc <= 1)
    {
        printf("Enter the filename to open \n");
        gets(filename);
    }
    else
    {
        strcpy(filename, argv[1]);
    }

    // open the file
    FILE *f = fopen(filename, "r");

    //make sure the file exists
    assert(f != NULL);

    // Mark start of file
    printf("\nBegin file\n");
    printf("*****************************\n");

    // print the file contents
    while (c != EOF)
    {
        c = fgetc(f);
        printf("%c", c);
    }

    // mark end of file
    printf("\n\n*****************************\n");
    printf("End file\n\n");

    // close the file
    fclose(f);

    return 0;
}
