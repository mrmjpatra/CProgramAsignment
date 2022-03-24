/* Rewrite the program mentioned in Experiment 2.2. However, rename the data types ‘float’ to ‘Decimal’ and ‘int’ to ‘integer’ by using typedef statement.Use of typedef*/
#include<stdio.h>
#include<math.h>


void main()
{
//use of typedef
    typedef int integer;
    typedef float Decimal;


    Decimal rate,time,si,comp;
    integer pr;
    /*Input of principal amount, rate and time from the user*/
    printf("Enter the principal amount:\n ");
    scanf("%d",&pr);
    printf("Enter the rate:\n ");
    scanf("%f",&rate);
    printf("Enter the time period:\n ");
    scanf("%f",&time);

    /*Calculating the simple interest and compound interest*/

    si=(pr*rate*time)/100;
    comp=pr*(pow((1+rate/100),time));

    /*printing the simple interest and compound interest*/

    printf("The simple interest for principal amount %d, rate %.2f and time %f is %.2f\n",pr,rate,time,si);
    printf("The compound interest for principal amount %d, rate %.2f and time %.2f is %.2f\n",pr,rate,time,comp);


}
