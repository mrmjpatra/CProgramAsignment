/*Write a program to enter the the marks obtained by a student in different subjects and calculate the % of marks obtained in agggregate as per the following conditions*/

#include <stdio.h>

int main()
{
    int s1, s2, s3;
    float avg;
    printf("Enter the marks in three subject\n");
    scanf("%d %d %d", &s1, &s2, &s3);

    avg = (s1 + s2 + s3) / 3.0;

    if (avg >= 70)
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
