/*Write programs to print the following structure:


*/

#include <stdio.h>

void main()
{
    int row, col, space;

    for (row = 1; row <= 4; row++)
    {
        
        for (space = 1; space <= (4 - row); space++)
        {
            printf(" ");
        }
        for (col = 1; col <= (2*row-1); col++)
        {
            printf("*");
        }
        printf("\n");
    }
}
