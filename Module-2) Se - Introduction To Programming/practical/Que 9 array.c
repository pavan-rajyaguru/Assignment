// Write a C program that stores 5 integers in a one-dimensional array and prints
// them. Extend this to handle a two-dimensional array (3x3 matrix) and
// calculate the sum of all elements.
#include <stdio.h>

void main()
{
    int arr[] = {1, 2, 3, 4, 5};

    for (int i = 0; i <= 4; i++)
    {
        printf("%d\n", arr[i]);
    }

    printf("\n");
    printf("\n");

    int multiarr[3][3] = {{1, 2, 3},
                          {4, 5, 6},
                          {7, 8, 9}};
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            // printf("%d\n", multiarr[i][j]);
            sum += multiarr[i][j];
        }
    }
    printf("sum fo array is: %d", sum);
}