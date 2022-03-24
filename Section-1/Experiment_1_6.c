// Write a program to swap two number using third variable

#include <stdio.h>

void main()
{
    int num1, num2, temp;
    printf("Enter the two number\n");
    scanf("%d %d", &num1, &num2);
    printf("The Entered number are : %d and %d\n", num1, num2);
    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("After swap of two input number is  %d and %d\n", num1, num2);
}
