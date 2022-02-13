/* Write a program using function to determine whether a year is a leap year or not.*/

#include <stdio.h>

void isLeapYear()
{
    int year;
    printf("Enter The Year\n");
    scanf("%d", &year);

    if (year % 400 == 0 || year % 4 == 0 && year % 100 != 0)
    {
        printf("%d is a Leap Year\n", year);
    }
    else
    {
        printf("%d is not a Leap Year\n", year);
    }
}

void main()
{

    isLeapYear();
}