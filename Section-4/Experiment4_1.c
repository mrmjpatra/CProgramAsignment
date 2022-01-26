/*Write a program to input three numbers and find out the smallest.*/
#include<stdio.h>
#include<conio.h>

int main()
{
    int num1,num2,num3;

    //Input of four numbers from the user

    printf("Enter first number:\n");
    scanf("%d",&num1);

    printf("Enter second number:\n");
    scanf("%d",&num2);

    printf("Enter third number:\n");
    scanf("%d",&num3);


    if(num1<num2 && num1<num3)
    {
        printf("%d is the smallest number",num1);
    }
    else if(num2<num1 && num2<num3)
    {
        printf("%d is the smallest number",num2);
    }
    else
    {
        printf("%d is the smallest number",num3);
    }


    return 0;
}
