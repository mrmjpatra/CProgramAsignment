/*Write a program to input ‘n’ numbers and print the 2nd largest and 2nd smallest number.*/

#include <stdio.h>

int main()
{
    int n, num[500],temp;

    printf("How many number you want to enter\n");
    scanf("%d", &n);
    printf("Enter %d number : \n",n);
    for (int i = 0; i < n; i++)
    {
        
        scanf("%d", &num[i]);
    }

    printf("The entered number are : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", num[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (num[j] < num[i])
            {
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }
    
    printf("\nThe smallest number is %d\n", num[0]);
    printf("The greatest number is %d", num[n-1]);
    return 0;
}