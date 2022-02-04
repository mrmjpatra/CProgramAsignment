/* Write a program using pointers to input a 4X5 matrix and then display it.*/
#include <stdio.h>

void main()
{
    int arr[4][5], i, j;
    int *ptr=arr;

    printf("Enter the element into 4 X 5 Matrix\n");

    for (int i = 0; i < 4; i++)

    {
        printf("Enter the elements of %d row\n", i + 1);
        for (int j = 0; j < 5; j++)
        {
            scanf("%u", *(arr + i) + j);
        }
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%u\t", *(*(arr + i) + j));
        }
        printf("\n");
    }
}
