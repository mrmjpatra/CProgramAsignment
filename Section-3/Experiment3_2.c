/*Write a program to take a number as input and check whether it is even or odd using conditional operator (do not use if statement).*/


#include<stdio.h>
#include<conio.h>

int main()
{
    int num;
    /*Input of number from the user*/
    printf("Enter the number to check whether the number is ever or odd\n");
    scanf("%d",&num);

    if(num%2==0)
    {
        printf("The entered number %d is even\n",num);
    }
    else
    {
        printf("The entered number %d is odd\n",num);
    }

    return 0;
}
