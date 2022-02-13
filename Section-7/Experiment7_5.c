/*Write a menu-based program that takes two matrixes A and B as input and displays the results of the following operations based on user’s choice.
1. A + B
2. A - B
3. B - A
4. A × B
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void main()
{
    int A[8][8], B[8][8], add[8][8], sub1[8][8], sub2[8][8], mul[10][10], r1, r2, c1, c2, i, j, choice;

    // Creating 1st Matrix
    printf("Enter the number of Rows of  Matrix-A  : \n");
    scanf("%d", &r1);
    printf("Enter the number of Columns of  Matrix-A  : \n");
    scanf("%d", &c1);
    printf("Enter the elements of %d X %d Matrix :\n", r1, c1);
    for (i = 0; i < r1; i++)
    {
        printf("Enter the elements of %d row :\n", i + 1);
        for (j = 0; j < c1; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    // Creating 2nd Matrix
    printf("Enter the number of Rows of Matrix-B : \n");
    scanf("%d", &r2);
    printf("Enter the number of Columns of Matrix-B : \n");
    scanf("%d", &c2);
    printf("Enter the elements of %d X %d Matrix :\n", r1, c1);
    for (i = 0; i < r2; i++)
    {
        printf("Enter the elements of %d row :\n", i + 1);
        for (j = 0; j < c2; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }
    // printing the matrix-A
    printf("Matrix-A is :\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }
    // Printing the matrix-B
    printf("Matrix-B is :\n\n");

    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("%d\t", B[i][j]);
        }
        printf("\n");
    }

    while (1)
    {
        // Showing the choice to the user
        printf("\n");
        printf("Enter 1 for A+B\n");
        printf("Enter 2 for A-B\n");
        printf("Enter 3 for B-A\n");
        printf("Enter 4 for A*B\n");
        printf("Enter 5 to Exit\n");
        printf("Enter the desired Choice:\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            // Adding Of Two Matrix(A+B)
            if (r1 == r2 && c1 == c2)
            {
                for (i = 0; i < r1; i++)
                {
                    for (j = 0; j < c1; j++)
                    {
                        add[i][j] = A[i][j] + B[i][j];
                    }
                }
                printf("----------------------------------------------------\n");
                printf(" A+B \n");
                printf("----------------------------------------------------\n");
                for (i = 0; i < r1; i++)
                {
                    for (j = 0; j < c1; j++)
                    {
                        printf("%d\t", add[i][j]);
                    }
                    printf("\n");
                }
                printf("----------------------------------------------------\n");
            }
            else
            {
                printf("Addition is not possible\n");
            }

            break;

        case 2:
            // Substraction of Matrix B from A (A-B)
            if (r1 == r2 && c1 == c2)
            {
                for (i = 0; i < r1; i++)
                {
                    for (j = 0; j < c1; j++)
                    {
                        sub1[i][j] = A[i][j] - B[i][j];
                    }
                }
                printf("----------------------------------------------------\n");
                printf(" A-B \n");
                printf("----------------------------------------------------\n");
                for (i = 0; i < r1; i++)
                {
                    for (j = 0; j < c1; j++)
                    {
                        printf("%d\t", sub1[i][j]);
                    }
                    printf("\n");
                }
                printf("----------------------------------------------------\n");
            }
            else
            {
                printf("Substraction is Not Possible!!\n");
            }
            break;
        case 3:
            // Substraction of Matrix A from B (B-A)

            if (r1 == r2 && c1 == c2)
            {
                for (i = 0; i < r1; i++)
                {
                    for (j = 0; j < c1; j++)
                    {
                        sub2[i][j] = B[i][j] - A[i][j];
                    }
                }
                printf("----------------------------------------------------\n");
                printf(" B-A \n");
                printf("----------------------------------------------------\n");
                for (i = 0; i < r1; i++)
                {
                    for (j = 0; j < c1; j++)
                    {
                        printf("%d\t", sub2[i][j]);
                    }
                    printf("\n");
                }
                printf("----------------------------------------------------\n");
            }
            else
            {
                printf("Substraction Is Not Possible!!\n");
            }
            break;
        case 4:
            // Multiplication of Two Matrix (A X B)
            if (c1 == r2)
            {
                for (i = 0; i < r1; i++)
                {
                    for (j = 0; j < c2; j++)
                    {
                        mul[i][j] = 0;
                        for (int k = 0; k < r2; k++)
                        {
                            mul[i][j] += A[i][k] * B[k][j];
                        }
                    }
                }
                printf("----------------------------------------------------\n");
                printf(" A X B \n");
                printf("----------------------------------------------------\n");
                for (i = 0; i < r1; i++)
                {
                    for (j = 0; j < c2; j++)
                    {
                        printf("%d\t", mul[i][j]);
                    }
                    printf("\n");
                }
                printf("----------------------------------------------------\n");
            }
            else
            {
                printf("Multiplication is not possible");
            }

            break;
        case 5:
            exit(0);
            break;
        default:
            printf("INVALID!!! CHOICE\n");
            break;
        }
    }
    getch();
}
