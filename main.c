#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdbool.h>

#include "main.h"
#include "flags.h"

int main(int argc, char **argv)
{
    bool are_flags = false;
    bool is_file = false;

    char passed_flags[TOTAL_FLAGS];
    char filename[MAX_FILEPATH_LENGTH], c;

#ifdef _ASSERT_ENABLE

    // require arguments to proceed
    assert(argc > 1);

    // display arguments
    for (int i = 0; i < argc; i++)
    {
        printf("%s\n", argv[i]);
    }
#endif

    //check to see if any arguments have been specified
    if (argc > 2)
    {
        are_flags = get_flags(argc, argv, passed_flags);
        is_file = get_file(argc, argv, filename);
        printf("filename: %s\n", filename);
    }
    if (!are_flags || !is_file)
    {
        /* If no is file given, ask for one.
            Otherwise, store the given filename in the filename buffer */
        printf("Enter the filename to open \n");
        gets(filename);
    }
    else
    {
        printf("filename: %s\n", filename);
    }
    // else
    // {

    //     /* If no is file given, ask for one.
    //         Otherwise, store the given filename in the filename buffer */
    //     printf("Enter the filename to open \n");
    //     gets(filename);
    // }
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
