/*Write a program that finds the sum of diagonal elements of a square matrix.*/

#include <stdio.h>

void main()
{
    int A[8][8], size, i, j, sum = 0;

    printf("Enter the order of the Square Matrix: \n");
    scanf("%d", &size);

    printf("Enter the elements of %d X %d Matrix: \n", size, size);

    for (i = 0; i < size; i++)
    {
        printf("Enter the elements of %d row:\n", i + 1);
        for (j = 0; j < size; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    printf("The Matrix is : \n");
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            if (i==j)
            {
                sum = sum + A[i][j];
            }
            continue;
        }
    }
    printf("The sum of the diagonal elements is %d : ",sum);
}
