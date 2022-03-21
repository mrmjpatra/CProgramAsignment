/*Write a program that request two float  type numbers from the user and then divide the 1st number by the 2nd number and display the result with the number*/

#include <stdio.h>

void main()
{
    float num1, num2;

    /*Input of two float point number*/
    printf("Enter the two number\n");
    scanf("%f %f", &num1, num2);
    /*Printing of answer*/

    printf("The division of 1st number %.2f by second number %.2f is : %.2f", num1, num2, (num1 / num2));
}
