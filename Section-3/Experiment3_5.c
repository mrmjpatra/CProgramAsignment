/*Write a program to read a four-digit integer and print the sum of its digits. [Hint: Use / and % operators.]*/
#include<stdio.h>
#include<conio.h>

int main(){
int num,n,sum=0,rem=0;

printf("Enter the four digit number\n");
scanf("%d",&num);
n=num;

while (num!=0)
{
    rem=num%10;
    sum=sum+rem;
    num=num/10;
    
}



printf("The sum of four digits of your entered number %d is : %d",n,sum);
return 0;
}
