/*Write a program to input ‘n’ numbers and sort them in descending order.*/
#include <stdio.h>
void main()
{
    int num[20];
    int i, j, a, n;
    //Input of size of array
    printf("enter number of elements in an array\n");
    scanf("%d", &n);

    //Input of the member of the array from the user

    for (i = 0; i < n; i++)
    {
        printf("Enter the %d number : ", i + 1);
        scanf("%d", &num[i]);
    }

    printf("The numbers before descending order is:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d  ", num[i]);
    }
    printf("\n");

    //logic for the sorting of array in descending order
    for (i = 0; i < n; ++i)
    {
        for (j = i + 1; j < n; j++)
        {
            if (num[i] < num[j])
            {
                a = num[i];
                num[i] = num[j];
                num[j] = a;
            }
        }
    }
    printf("The numbers in descending order is:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d  ", num[i]);
    }
}