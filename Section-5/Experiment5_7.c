/*Write a program to input a number and check whether it is palindrome or not (a
palindrome number is a number that remains the same when its digits are reversed, e.g., 16461).
*/


#include<stdio.h>
#include<conio.h>


int main(){
int num,rem=0,rev=0,n;
printf("Enter the number\n");
scanf("%d",&num);
n=num;
while(num!=0){
    rem=num%10;
    rev=rev*10+rem;
    num=num/10;

}

if(n==rev){
  printf("It is an palindrome number");
}
else {
    printf("It is not an palindrome number");
}




    return 0;
}
