/* Write a program  to compute the area of a triangle given its three side*/

#include <stdio.h>
#include <math.h>

void main()
{
    float s, a, b, c, area;
    printf("Enter the three sides of the triangle\n");
    scanf("%f %f %f", &a, &b, &c);
    s = (a + b + c) / 2;
    area = sqrt((s * (s - a) * (s - b) * (s - c)));
    printf("The area of triangle is %.4f", area);
}
