/* */
#include<stdio.h>
void createMatrix(int matrix[][50], int row, int col)
{
    int i,j;
    printf("Enter the element to the %d X %d Matrix\n", row, col);
    for (i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {
            scanf("%d",&matrix[i][j]);
        }

    }
}
void showMatrix(int matrix[][50], int row, int col)
{
    int i,j;
    printf("Entered Matrix \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%5d ", matrix[i][j]);
        }
        printf("\n");
    }
}
void sort(int matrix[][50],int row,int col)
{
    int i,j,k,temp;
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            for(k=j+1; k<col; k++)
            {
                if(matrix[i][j]>matrix[i][k])
                {
                    temp=matrix[i][j];
                    matrix[i][j]=matrix[i][k];
                    matrix[i][k]=temp;
                }
            }
        }
    }
}

void main()
{
    int row,col,i,j,k,temp;
    printf("Enter the number of rows : ");
    scanf("%d",&row);
    printf("Enter the number of columns : ");
    scanf("%d",&col);

    int matrix[50][50];
    createMatrix(matrix,row,col);
    showMatrix(matrix,row,col);
    sort(matrix,row,col);
    showMatrix(matrix,row,col);

    printf("The largest integer in the Matrix is : %d\n",matrix[row-1][col-1]);
    printf("The 2nd largest integer in the Matrix is : %d\n",matrix[row-1][col-2]);
    printf("The smallest integer in the Matrix is : %d\n",matrix[0][0]);
    printf("The 2nd smallest integer in the Matrix is :%d \n",matrix[0][1]);



}
