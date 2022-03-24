// Write a program to swap two number without using third variable

#include <stdio.h>

void main()
{
    int num1, num2, temp;
    printf("Enter the two number\n");
    scanf("%d %d", &num1, &num2);
    printf("The Entered number are : %d and %d\n", num1, num2);

    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    printf("After Swapping the two number are : %d and %d\n", num1, num2);
}
