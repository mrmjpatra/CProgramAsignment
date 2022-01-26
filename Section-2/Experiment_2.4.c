/* Write a program to read  the price of an item in decimal form and print the output in paise*/

#include<stdio.h>

void main(){

float item,z;
printf("Enter the price of the item");
scanf("%f",&item);

z=(item*100);

printf("The item price is %f paise",z);
}
