/*Write a program to input ‘n’ numbers (the value of ‘n’ is specified at runtime) in an array and display their sum and average. */
#include<stdio.h>
#include<stdlib.h>


void main()
{
    
    int size,*n,*i,sum=0,count=0;
    float avg;
    printf("Enter the size of the array\n");
    scanf("%d",&size);
    n=(int*)malloc(size*sizeof(int));
    if(n==NULL){
        printf("No space available\n");
        exit(0);
    }
    printf("Space allocated for %d size\n",size);
    printf("Enter the %d number of integer in the array\n",size);
    for (i = n; i <n+size; i++)
    {
        scanf("%d",i);
 
    }

    for ( i = n; i < n+size; i++)
    {
        (sum)+=(*i);
        printf("%d\n",*i);       
    }

    avg=(float)sum/size;
    printf("The sum of the entered number is %d\n",sum);
    printf("The average of the entered number is : %.2f",avg);


}