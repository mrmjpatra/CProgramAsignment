#include <stdio.h>
#include <stdlib.h>
void Transpose(sparse[][5],int row,int col);
void SparseMatrix(int mati[][3])
{

    int row, col;
    row = mati[0][0];
    col = mati[0][1];
    int sparse[row][col];
    int nzero = mati[0][2];
    //making all the elements of the sparse to zero
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sparse[i][j] = 0;
        }
    }
    //Inserting the correspoding elements
    for (int i = 1; i < nzero+1; i++)
    {
        sparse[mati[i][0]][mati[i][1]] = mati[i][2];
    }
    printf("The Sparse Matrix is: \n\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%-5d", sparse[i][j]);
        }
        printf("\n\n");
    }
    //Caling the transpose function
    Transpose(sparse,row,col);
}

void Transpose(sparse[][5],int row,int col){
    printf("The transpose of the matrix: \n\n");

    for(int i=0;i<5;i++){
        for(int j=0;j<4;j++){
            printf("%-5d",sparse[j][i]);
        }
        printf("\n\n");
    }

}
void main()
{

    int mat[100][3];
    int row, col, nzero;
    printf("Enter the number of rows of the matrix\n");
    scanf("%d", &row);
    printf("Enter the number of columns of the matrix\n");
    scanf("%d", &col);
    printf("Enter the number of non zero element\n");
    scanf("%d", &nzero);
    mat[0][0] = row;
    mat[0][1] = col;
    mat[0][2] = nzero;
    printf("Enter the matrix in three tuple form(%d X 3 form)\n", (nzero+1));
    for (int i = 1; i < nzero + 1; i++)
    {

        for(int j=0;j<3;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    printf("\n");
    printf("The entered matrix in 3-Tuple form is\n\n");
    for (int i = 0; i < nzero + 1; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%-5d\t", mat[i][j]);
        }
        printf("\n\n");
    }
    printf("\n");
    SparseMatrix(mat);

    
}