/*Write a program to input ‘n’ numbers and print the 2nd largest and 2nd smallest number.*/

#include <stdio.h>

int main()
{
    int n, num[500], smallest, largest;

    printf("How many number you want to enter\n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter %d number : ", i + 1);
        scanf("%d", &num[i]);
    }

    printf("The entered number are : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", num[i]);
    }
    printf("\n\n");
    smallest = num[0];

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (num[j] < num[i])
            {
                smallest = num[j];
            }
        }
    }
    printf("\n");
    printf("The smallest number is %d", smallest);

    largest=num[0];
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (num[j] > num[i])
            {
                largest = num[j];
            }
        }
    }
    printf("\n");
    printf("The greatest number is %d", largest);
    return 0;
}