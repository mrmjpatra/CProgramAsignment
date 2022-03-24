/*Write a program to read ‘n’ numbers and find the frequency of occurrence of each number.*/

#include <stdio.h>

int main()
{
    int size, arr[50], fre[50], i, j, count;

    printf("Enter the size of the array : ");
    scanf("%d", &size);

    for (i = 0; i < size; i++)
    {
        printf("Enter the %d number : ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("The entered number are : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    for (int i = 0; i < size; i++)
    {
        count = 1;
        if (arr[i] != -1)
        {
            for (j = i + 1; j < size; j++)
            {
                if (arr[i] == arr[j])
                {
                    count++;
                    arr[j] = -1;
                }
            }
        }
        fre[i] = count;
    }

    printf("\n----------------------------------------\n");
    printf("Number\t\tOccurance\n");
    for (i = 0; i < size; i++)
    {
        if (arr[i] != -1)
        {
            printf("  %d\t", arr[i]);
            printf("|  ");
            printf("\t%d times\n", fre[i]);
        }
    }
    printf("----------------------------------------\n");
    return 0;
}