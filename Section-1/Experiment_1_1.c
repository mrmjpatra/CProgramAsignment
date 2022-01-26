//write a program to find smallest of three number

#include<stdio.h>


int main()
{

    int num1,num2,num3;

    printf("Enter the first number\n");
    scanf("%d",&num1);
    printf("Enter the second number\n");
    scanf("%d",&num2);
    printf("Enter the third number\n");
    scanf("%d",&num3);

    if(num1<num2 && num1<num3)
    {
        printf("%d is the smallest number among %d,%d and %d ",num1,num1,num2,num3);
    }
    else if(num2<num1 && num2<num3)
    {
        printf("%d is the smallest number among %d,%d and %d ",num2,num1,num2,num3);
    }
    else
    {
        printf("%d is the smallest number among %d,%d and %d ",num3,num1,num2,num3);
    }



    return 0;
}
