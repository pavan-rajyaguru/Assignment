// Write a C program that takes two strings from the user and concatenates them
// using strcat(). Display the concatenated string and its length using
// strlen().
#include <stdio.h>
#include <string.h>

void main()
{
    char str1[] = "Mitesh";
    char str2[] = " Rathod";

    strcat(str1, str2);

    printf(str1);

    int size = strlen(str1);
    printf("\nLength of the concatenated string: %d", size);
}