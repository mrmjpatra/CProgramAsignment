/* Write a program using pointers to read an array of integers and print its elements in reverse order. */
#include <stdio.h>

void main()
{
    int arr[50], size, i, temp, j;

    printf("Enter the size of the array : ");
    scanf("%d", &size);
    printf("Enter the %d elements to the array\n",size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", (arr + i));
    }

    for (i = 0, j = size - 1; i < size / 2; i++, j--)
    {
        temp = *(arr + i);
        *(arr + i) = *(arr + j);
        *(arr + j) = temp;
    }
    printf("The array in reverse order is : \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", *(arr + i));
    }
}