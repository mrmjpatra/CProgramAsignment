/* Write a program  to compute the area of a triangle given its three side*/

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    float s,a,b,c,area;
    printf("Enter the one sides of the triangle\n");
    scanf("%f",&a);
    printf("Enter the second sides of the triangle\n");
    scanf("%f",&b);
    printf("Enter the third sides of the triangle\n");
    scanf("%f",&c);


    s=(a+b+c)/2.0;
    area=pow((s*(s-a)*(s-b)*(s-c)),1.0/2.0);
    printf("The area of triangle is %.4f",area);




    return 0;
}
