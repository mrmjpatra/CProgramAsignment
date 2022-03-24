/*A student is represented by the following attributes:
− Roll number (int)
− Name (string)
− Mark in subject 1 (float)
− Mark in subject 2 (float)
− Mark in subject 3 (float)
Write a program using structure to create data for 50 students and then find the total marks for each student and average mark of all students.*/
#include <stdio.h>

struct Student
{
    int rollNumber;
    char name[100];
    float sub1;
    float sub2;
    float sub3;
};

void main()
{
    struct Student studs[50];
    float avg[50];
    int tmark[50];
    for (int i = 0; i < 3; i++)
    {
        printf("Enter the Details of Student-%d\n", i + 1);
        printf("Enter the Roll Number : ");
        scanf("%d", &studs[i].rollNumber);
        printf("Enter the Name : ");
        scanf("%s", studs[i].name);
        printf("Enter mark for subject-1 : ");
        scanf("%f", &studs[i].sub1);
        printf("Enter mark for subject-2 : ");
        scanf("%f", &studs[i].sub2);
        printf("Enter mark for subject-3 : ");
        scanf("%f", &studs[i].sub3);
    }
    for (int i = 0; i < 3; i++)
    {
        tmark[i] = (studs[i].sub1 + studs[i].sub2 + studs[i].sub3);
    }
    for (int i = 0; i < 3; i++)
    {
        avg[i] = (float)tmark[i] / 3;
    }

    for (int i = 0; i < 3; i++)
    {
        printf("---------------------------------------\n");
        printf("The total mark and average for the Student-%d is :\nMark-%d\nAverage-%f\n", i + 1, tmark[i], avg[i]);
    }
}