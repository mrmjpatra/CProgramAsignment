/* Write a function using pointers to add two matrices and return the resultant matrix. Use this function within the main function to add two matrices.*/
#include<stdio.h>

void createMatrix(int mat[100][100],int size)
{
    for(int i=0; i<size; i++)
    {
        printf("Enter the elements into the %d row\n",i+1);
        for(int j=0; j<size; j++)
        {
            scanf("%d",(*(mat+i)+j));
        }

    }
}
void show(int a[100][100],int size)
{
    int i,j;
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            printf("%7d\t",(*(*(a+i)+j)));
        }
        printf("\n");
    }

}
void addMatrix(int A[][100],int B[][100],int C[][100],int size)
{

    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            *(*(C+i)+j)=(*(*(A+i)+j)+*(*(B+i)+j));
        }
    }

}
void main()
{
    int a[100][100],b[100][100],c[100][100],i,j,size;
    printf("Enter the size of the matrix: ");
    scanf("%d",&size);
    printf("Enter the elements to %dX%d matrix\n\n",size,size);
    //Creating Matrix-A
    printf("Enter the element to Matrix-A\n\n");
    createMatrix(a,size);
    printf("Enter the element to Matrix-B\n\n");
    createMatrix(b,size);
    printf("The matrix-A is\n");
    show(a,size);
    printf("\nThe matrix-B is\n");
    show(b,size);
    addMatrix(a,b,c,size);
    printf("The sum of two matrix is\n");
    show(c,size);


}
