// Write a program to swap two number without using third variable

#include<stdio.h>

int main()
{
    int num1,num2,temp;
    printf("Enter the first number\n");
    scanf("%d",&num1);
    printf("Enter the second number\n");
    scanf("%d",&num2);

    printf("The entered number are : %d and %d\n",num1,num2);

    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;

    printf("After Swapping the two number are : %d and %d\n",num1,num2);



    return 0;
}
