/*Write a program to input ‘n’ numbers (the value of ‘n’ is specified at runtime) in an array and display the largest and largest among them. */
#include<stdio.h>
#include<stdlib.h>

void findlargest(int *arr,int size)
{
    int i;
    int largest=*(arr);
    int smallest=*(arr+0);
    for (i =1; i <size; i++)
    {
        if(*(arr+i)>largest)
        {
            largest=*(arr+i);
        }
    }


    for (i =1; i <size; i++)
    {
        if(*(arr+i)<smallest)
        {
            smallest=*(arr+i);
        }
    }
    printf("The largest number is: %d\n",largest);
    printf("The smallest number is: %d\n",smallest);

}
void main()
{
    int *arr,*i,size,*temp;
    printf("ENter the size of the array\n");
    scanf("%d",&size);
    arr=(int*)malloc(size*sizeof(int));
    if (arr==NULL)
    {
        printf("No Space is available\n");
        exit(0);
    }
    printf("The space is allocated for the size %d\n",size);

    for ( i = arr; i < arr+size; i++)
    {
        scanf("%d",i);
    }

    findlargest(arr,size);






}
