/*Write a program to enter the the marks obtained by a student in different subjects and calculate the % of marks obtained in agggregate as per the following conditions*/

#include <stdio.h>

int main()
{
    int sub1, sub2, sub3, sub4, sub5;
    // marks scan for subject-1
    printf("Enter the marks in Subject-1\n");
    scanf("%d", &sub1);
    // marks scan for subject-2
    printf("Enter the marks in Subject-2\n");
    scanf("%d", &sub2);
    // marks scan for subject-3
    printf("Enter the marks in Subject-3\n");
    scanf("%d", &sub3);
    // marks scan for subject-4
    printf("Enter the marks in Subject-4\n");
    scanf("%d", &sub4);
    // marks scan for subject-5
    printf("Enter the marks in Subject-5\n");
    scanf("%d", &sub5);

    float avg = (sub1 + sub2 + sub3 + sub4 + sub5) / 5.0;

    if (avg >=70)
    {
        printf("You got first division in the exam");
    }
    else if (avg < 70 && avg >= 50)
    {
        printf("You got second division in the exam\n");
    }
    else if (avg < 50 && avg >= 30)
    {
        printf("You got Third division in the exam\n");
    }

    else
    {
        printf("Your are failed in the exam\n");
    }
    return 0;
}
