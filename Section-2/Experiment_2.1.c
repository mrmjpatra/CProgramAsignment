/*Write a program to compute the area of triangle given its base and height*/

#include<stdio.h>

int main(){

float height, base,area;

/*Input of height and base of triangle*/
printf("Enter the height of the triangle\n");
scanf("%f",&height);
printf("Enter the base of the triangle\n");
scanf("%f",&base);
/*printing the area of the triangle*/
printf("The area of the triangle of height %f and base %f is %f",height,base,((1.0/2)*base*height));

return 0;


}
