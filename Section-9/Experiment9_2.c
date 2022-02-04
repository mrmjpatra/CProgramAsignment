/* Write a program using pointers to read an array of integers and print its elements in reverse order. */
#include <stdio.h>

void main()
{
    int arr[50], size, i, temp, j;
    int *ptr = arr;

    printf("Enter the size of the array : ");
    scanf("%d", &size);

    for (int i = 0; i < size; i++)
    {
        scanf("%u", arr + i);
    }

    for (i = 0, j = size - 1; i < size / 2; i++, j--)
    {
        temp = *(arr + i);
        *(arr + i) = *(arr + j);
        *(arr + j) = temp;
    }

    for (int i = 0; i < size; i++)
    {
        printf("%u\t", *(arr + i));
    }
}