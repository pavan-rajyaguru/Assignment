// Write a C program that includes variables, constants, and comments. Declare
// and use different data types (int, char, float) and display their values

#include <stdio.h>
#include <string.h>

void main()
{
    // Diffrent data types
    char name[] = "Mitesh";
    int age = 19;
    float marks = 85.5;
    const float pi = 3.14;

    printf("Hlo, I am %s\n", name);
    printf("My age is %d\n", age);
    printf("Marks: %0.2f\n", marks);
    printf("PI valu is: %0.2f\n", pi);
}