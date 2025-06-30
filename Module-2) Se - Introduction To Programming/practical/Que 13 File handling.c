// Write a C program to create a file, write a string into it, close the file, then
// open the file again to read and display its contents.

#include <stdio.h>
#include <stdlib.h>

void main()
{
    // Create a file
    FILE *fptr;
    fptr = fopen("FileHandling.txt", "w");
    if (fptr == NULL)
    {
        printf("The file is not opened\n");
    }
    else
    {
        printf("The file is opened.\n");
        fclose(fptr);
    }

    // Write a file

    char txt[100];
    printf("Enter your text:");
    fgets(txt, sizeof(txt), stdin);

    fptr = fopen("FileHandling.txt", "w");
    if (fptr == NULL)
    {
        printf("The file is not opened.\n");
    }
    else
    {
        fputs(txt, fptr);
        fputs("\n", fptr);
        fclose(fptr);
    }

    // Read file
    fptr = fopen("FileHandling.txt", "r");
    if (fptr == NULL)
    {
        printf("The file is not opened.\n");
    }
    else
    {
        while (fgets(txt, 100, fptr) != NULL)
        {
            printf("%s", txt);
        }
        fclose(fptr);
    }
}