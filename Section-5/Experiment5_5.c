#include <stdio.h>
/*Write a program to find the number of and sum of all integers greater than 100 and less than 200 that are divisible by 7.*/

int main()
{
    int sum = 0;
    for (int i = 101; i < 200; i++)
    {
        if (i % 7 == 0)
        {
            sum = sum + i;
        }
    }
    printf("Sum of all intergers greater than 100 and less than 300 is %d ", sum);
    return 0;
}