/* */
#include<stdio.h>


void main()
{
    int row,col,i,j,k,temp;
    printf("Enter the number of rows : ");
    scanf("%d",&row);
    printf("Enter the number of rows : ");
    scanf("%d",&col);

    int matrix[row][col];

    for (i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {
            scanf("%d",&matrix[i][j]);
        }
        
    }

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            for(k=j+1;k<col;k++)
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
    
printf("The largest integer in the Matrix is : %d\n",matrix[row-1][col-1]);
printf("The 2nd largest integer in the Matrix is : %d\n",matrix[row-1][col-2]);
printf("The smallest integer in the Matrix is : %d\n",matrix[0][0]);
printf("The 2nd smallest integer in the Matrix is :%d \n",matrix[0][1]);



}