
/*Write a program to input a number and print “ODD” if the number is odd and “EVEN” if the number is even.*/
#include<stdio.h>
#include<conio.h>

int main()
{

    int num;

    printf("Enter the number\n");
    scanf("%d",&num);

    if(num%2==0)
    {

        printf("EVEN");
    }
    else
    {
        printf("ODD");
    }
    return 0;
}
