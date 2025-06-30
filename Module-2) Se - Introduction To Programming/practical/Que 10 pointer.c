#include <stdio.h>

void main()
{
    int *ptr;
    int num = 10;

    ptr = &num;

    printf("Before modification:\n");
    printf("Value of num = %d\n", num);
    printf("Address of num = %p\n", &num);
    printf("Value of ptr = %p\n", ptr);
    printf("Value at *ptr = %d\n\n", *ptr);

    *ptr = 25; // Modify the value of 'num' using the pointer

    printf("After modification through pointer:\n");
    printf("Value of num = %d\n", num);
    printf("Value at *ptr = %d\n", *ptr);

    // return 0;
}