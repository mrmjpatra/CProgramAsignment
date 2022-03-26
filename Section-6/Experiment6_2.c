/*Write a program to input ‘n’ numbers and print the 2nd largest and 2nd smallest numbers.*/


#include <stdio.h>

int main()
{
    int n, arr[500],temp;

    printf("How many number you want to enter\n");
    scanf("%d", &n);
    printf("Enter %d number : \n",n);
    for (int i = 0; i < n; i++)
    {
        
        scanf("%d", &arr[i]);
    }

    printf("The entered number are : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    printf("\nThe smallest number is %d\n", arr[0]);
    printf("The greatest number is %d", arr[n-1]);
    return 0;
}