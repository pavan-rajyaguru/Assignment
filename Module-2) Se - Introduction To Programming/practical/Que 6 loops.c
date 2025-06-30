#include <stdio.h>
void main()
{
    // 1 While loop
    int i;
    i = 1;

    while (i <= 10)
    {
        printf(" %d\n", i);
        i++;
    }

    // 2. for loop
    for (int i = 0; i <= 10; i += 1)
    {
        printf("%d\n", i);
    }

    // 3.do while
    int i = 1;
    do
    {
        printf("%d\n", i);
        i++;
    } while (i <= 10);

    //  Nested loops

    // 4.nested while
    // int i = 1;

    // while (i <= 5)
    // {
    //     int j = 1;
    //     while (j <= 5)
    //     {
    //         printf("%d %d\n", i, j);
    //         j++;
    //     }
    //     i++;
    // }

    // 5.nested for
    // for (int i = 1; i <= 5; i++)
    // {
    //     for (int j = i; j <= 5; j++)
    //     {
    //         printf("* ");
    //     }
    //     printf(" \n");
    // }

    // 6.nested do-while loop
    // int i = 1;

    // do
    // {
    //     int j = 1;
    //     do
    //     {
    //         printf("*");
    //         j++;
    //     } while (j <= 5);
    //     printf("\n");
    //     i++;
    // } while (i <= 5);
}