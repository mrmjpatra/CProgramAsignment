/*Write a program that takes input, the principal, rate of interest and time and then calculates the simple and compound interest*/

#include<stdio.h>
#include<math.h>


void main()
{
    float pr,rate,time,si,comp;

    /*Input of principal amount, rate and time from the user*/
    printf("Enter the principal amount:\n ");
    scanf("%f",&pr);
    printf("Enter the rate:\n ");
    scanf("%f",&rate);
    printf("Enter the time period:\n ");
    scanf("%f",&time);

    /*Calculating the simple interest and compound interest*/

    si=(pr*rate*time)/100;
    comp=pr*(pow((1+rate/100),time));

    /*printing the simple interest and compound interest*/

    printf("The simple interest for principal amount %.2f, rate %.2f and time %f is %.2f\n",pr,rate,time,si);
    printf("The compound interest for principal amount %.2f, rate %.2f and time %.2f is %.2f\n",pr,rate,time,comp);


}
