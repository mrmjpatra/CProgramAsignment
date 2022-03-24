/* Write a program to create a structure COMPLEX to represent a complex number. Using the structure write a program to add two complex numbers and display their sum.*/
#include<stdio.h>

struct COMPLEX
{
    int real;
    int img;
};


void main()
{
    struct COMPLEX comp[2];
    printf("Enter the complex number in the format of a+bi\n");
    printf("Enter the first Complex number\n");
    scanf("%d+%di",&comp[0].real,&comp[0].img);
    printf("Enter the second Complex number\n");
    scanf("%d+%di",&comp[1].real,&comp[1].img);
    int sum=(comp[0].real+comp[1].real);
    int sum1=comp[0].img+comp[1].img;
    printf("The sum of the two complex number is %d+%di",sum,sum1);


}