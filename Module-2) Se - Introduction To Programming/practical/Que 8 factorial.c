// Write a C program that calculates the factorial of a number using a function.
// Include function declaration, definition, and call
#include <stdio.h>
int Factorial(int num);

void main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    Factorial(num);
}

int Factorial(int num)
{
    int fact = 1;
    for (int i = num; i > 1; i--)
    {
        fact = fact * i;
    }

    printf("Factorial of %d is: %d", num, fact);
}
