// To find out the area and perimeter of circle

#include<stdio.h>
#define PI 3.14

int main()
{

    float radius,area,peri;
    printf("Enter the radius of circle\n");
    scanf("%f",&radius);

    area=PI*radius*radius;
    peri=2*PI*radius;

    printf("The Area of The Circle with Radius %.2f is %.2f\n",radius,area);

    printf("\nThe Perimeter of The Circle with Radius %.2f is %.2f\n",radius,peri);

    return 0;

}
