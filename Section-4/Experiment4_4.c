/*Write a program that will read the value of x and evaluate the following function:
   | 1 for x>0
y =| 0 for x = 0
-  | 1 for x<0*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int x;
    printf("Enter the value of x\n");
    scanf("%d",&x);

    if(x>0)
    {
        printf("The value of y is: 1\n");
    }
    else if(x<0)
    {
        printf("The value of y is: -1\n");
    }
    else
    {
        printf("The value of y is: 0\n");
    }
    return 0;
}
