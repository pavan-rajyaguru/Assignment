// Write a C program to check if a number is even or odd using an if-else
// statement. Extend the program using a switch statement to display the month
// name based on the user’s input (1 for January, 2 for February, etc.).
#include <stdio.h>
void main()
{
    int month;
    printf("Enter your number: ");

    scanf("%d", &month);

    if (month % 2 == 0)
    {
        printf("This is even number\n");
    }
    else
    {
        printf("This is odd number\n");
    }

    switch (month)
    {
    case 1:
        printf("January");
        break;
    case 2:
        printf("February");
        break;
    case 3:
        printf("March");
        break;
    case 4:
        printf("April");
        break;
    case 5:
        printf("May");
        break;
    case 6:
        printf("June");
        break;
    case 7:
        printf("July");
        break;
    case 8:
        printf("August");
        break;
    case 9:
        printf("September");
        break;
    case 10:
        printf("October");
        break;
    case 11:
        printf("November");
        break;
    case 12:
        printf("December");
        break;

    default:
        printf("Invalid month\n");
        break;
    }
}
