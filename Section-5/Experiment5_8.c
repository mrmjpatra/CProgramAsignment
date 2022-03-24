/*Write a program to input a number and check whether it is Armstrong or not (An
Armstrong number is an integer such that the sum of the cubes of its digits is equal to the number itself. For
example, 371 is an Armstrong number since 33 + 73 + 13 = 371).
*/


#include<stdio.h>
#include<conio.h>
#include<math.h>


int main(){

    int num,n,rem=0,sto=0,a;

    printf("Enter the number\n");
    scanf("%d",&num);
    n=num;

    while(num!=0){
        rem=num%10;
        sto=sto+(pow(rem,3));
        num=num/10;

    }
    if (n==sto){
        printf("The entered number %d is an Armstrong number\n",n);
    }
    else{
       printf("The entered number %d is Not an Armstrong number\n",n);
    }



    return 0;
}
