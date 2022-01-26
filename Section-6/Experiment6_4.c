/*Write a program to read ‘n’ real numbers and then insert a new real number at a given position (after insertion, the array size should increase by 1).*/

#include <stdio.h>
#include <string.h>

int main()
{
    int n, pos, newnum;
    int arr[500];
    printf("How many number you want to enter\n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter %d number : ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nNumbers before entering the new number is : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", arr[i]);
    }
    printf("\nThe size of the array is %d : ", n);

    printf("\nEnter the position you want to enter the new number : ");
    scanf("%d", &pos);
    printf("\n\nEnter the new real number\n");
    scanf("%d", &newnum);

    for (int i = n; i >= pos - 1; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = newnum;
    n++;
    printf("\nThe size of the array is : %d \n ", n);
    printf("\nAfter entry the numbers are :\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d  ", arr[i]);
    }

    return 0;
}