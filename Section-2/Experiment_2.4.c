/* Write a program to read  the price of an item in decimal form and print the output in paise*/

#include<stdio.h>

void main()
{

    float item,paise;
    printf("Enter the price of the item : ");
    scanf("%f",&item);

    paise=(item*100);

    printf("The item price is %f paise",paise);
}
