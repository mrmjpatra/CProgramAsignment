/*Admission to professional course is subject to the any one of the following conditions:
a) Marks in Mathematics >= 60, and Marks in Physics >= 50, and Marks in Chemistry >= 40
b) Total in all three subjects >= 200
Write a program that takes as input the marks in three subjects and displays �Admitted� if the student is admitted else displays Not Admitted.*/

#include <stdio.h>

void main()
{
    int math, phy, chem, total;

    printf("Enter your mark in Physics :\n");
    scanf("%d", &phy);

    printf("Enter your mark in Chemistry :\n");
    scanf("%d", &chem);

    printf("Enter your mark in Mathematics :\n");
    scanf("%d", &math);

    total = phy + chem + math;

    if (math >= 60 && phy >= 50 && chem >= 40 && total >= 200)
    {
        printf("Admitted");
    }
    else
    {
        printf("Not Admitted");
    }
}
