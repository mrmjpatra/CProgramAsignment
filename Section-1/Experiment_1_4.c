// To find out the area and perimeter of circle

#include<stdio.h>
#define PI 3.14

int main()
{

    float r,area,peri;
    printf("Enter the radius of circle\n");
    scanf("%f",&r);

    area=PI*r*r;
    peri=2*PI*r;

    printf("The area and perimeter of the circle is : %.2f and %.2f\n",area,peri);

    return 0;

}
