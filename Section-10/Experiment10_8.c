//Write a function using pointers that compares two integer arrays to see whether they are identical. The function returns 1 if they are identical, 0 otherwise.
#include<stdio.h>

void createArray(int arr[],int size)
{
    printf("Enter the elements to the array\n");
    for(int i=0; i<size; i++)
    {
        scanf("%d",(arr+i));
    }
}
void show(int arr[],int size)
{
    for(int i=0; i<size; i++)
    {
        printf("%d\t",(*(arr+i)));
    }
}

int compareArray(int arr1[],int arr2[],int size1,int size2)
{
    int isSame;
    if(size1!=size2)
    {
        return 0;
    }
    for(int i=0; i<size1; i++)
    {
        isSame=0;
        if((*(arr1+i))==(*(arr2+i)))
        {
            isSame=1;
        }
    }
    if(isSame){
        return 1;
    }
    else{
        return 0;
    }
}
void main()
{
    int arr1[100],arr2[100],i,size1,size2;
    printf("Enter the size of the first array\n");
    scanf("%d",&size1);
    //Input of array-1
    createArray(arr1,size1);
    printf("Enter the size of the second array\n");
    scanf("%d",&size2);
    createArray(arr2,size2);
    printf("The first array is : ");
    show(arr1,size1);
    printf("\n");
    printf("The second array is : ");
    show(arr2,size2);
    int res=compareArray(arr1,arr2,size1,size2);
    printf("\n");


    if(res==1)
    {
        printf("The two arrays are identical");
    }
    else
    {
        printf("The two arrays are not identical");
    }
}
