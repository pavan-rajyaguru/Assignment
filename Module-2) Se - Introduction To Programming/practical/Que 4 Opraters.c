// Write a C program that accepts two integers from the user and performs
// arithmetic, relational, and logical operations on them. Display the results.
#include <stdio.h>
void main()
{
    int a, b, c;
    a = 10;
    b = 20;

    // Arathmetic
    // c = a + b;
    // c = a - b;
    // c = a * b;
    // c = a / b;
    // c = b / a;
    // c = a % b;
    // a++;
    // a--;

    // retational
    // c = a == b;
    // c = a > b;
    // c = a < b;
    // c = a >= b;
    // c = a <= b;
    // c = a != b;

    // Logical
    // c = (a < b && a >= b);
    // c = (a < b || a >= b);
    // c = !(a < b || a >= b);

    //
    // a = a + 10;
    // a += 10;
    // a -= 10;
    // a *= 10;
    // a /= 10;
    // a %= 10;

    b = a + b;
    a = b - a;
    b = b - a;

    printf("Your A value is %d", a);
    printf("\nYour B value is %d", b);
    // printf("\nYour C value is %d", c);
}