// Write a C program that defines a structure to store a student's details (name,
// roll number, and marks). Use an array of structures to store details of 3
// students and print them.
#include <stdio.h>

struct students
{
    char name[20];
    int roll;
    int marks;
};

int main()
{
    struct students s[3];

    // Input
    for (int i = 0; i <= 2; i++)
    {
        printf("Enter name of student : ");
        scanf("%s", s[i].name);

        printf("Enter roll number of student: ");
        scanf("%d", &s[i].roll);

        printf("Enter marks of student: ");
        scanf("%d", &s[i].marks);
    }

    // Output
    printf("\n    Student Details    \n");
    for (int i = 0; i <= 2; i++)
    {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", s[i].name);
        printf("Roll Number: %d\n", s[i].roll);
        printf("Marks: %d\n", s[i].marks);
        printf("\n");
    }

    return 0;
}
