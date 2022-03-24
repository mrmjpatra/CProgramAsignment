/*Write a program to input a number and check whether it is prefect or not (A number is called perfect if the sum of its divisors is equal to the number itself. For example, 28 is a perfect number since 1+2+4+7+14=28).*/

#include <stdio.h>

int main()
{
    int num, sum = 0, x;
    printf("Enter the number\n");
    scanf("%d", &num);
    x = num;

    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sum = sum + i;
        }
    }
    if (x == sum)
    {
        printf("It is a perfect number");
    }
    else
    {
        printf("It is not a perfect number");
    }
    return 0;
}