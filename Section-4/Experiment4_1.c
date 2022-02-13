/*Write a program to input three numbers and find out the smallest.*/
#include <stdio.h>
#include <conio.h>

int main()
{
    int num1, num2, num3;

    // Input of four numbers from the user

    printf("Enter first number:\n");
    scanf("%d", &num1);

    printf("Enter second number:\n");
    scanf("%d", &num2);

    printf("Enter third number:\n");
    scanf("%d", &num3);

    int smallest = num1;
    if (num2 < smallest && num2 < num3)
    {
        printf("%d is the smallest number", num2);
    }
    else if (num3 < smallest && num3 < num2)
    {

        printf("%d is the smallest number", num3);
    }

    else
    {

        printf("%d is the smallest number", smallest);
    }

    return 0;
}
