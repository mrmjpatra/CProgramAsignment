// write a program to find smallest of three number

#include <stdio.h>

int main()
{

    int x, y, z, smallest;

    printf("Enter the first number\n");
    scanf("%d", &x);
    printf("Enter the second number\n");
    scanf("%d", &y);
    printf("Enter the third number\n");
    scanf("%d", &z);
    smallest = x;s
    if (y < x && y < z)
    {
        smallest = y;
    }
    else if (z < x && z < y)
    {
        smallest = zs;
    }

    printf("The smallest number among %d, %d and %d is %d", x, y, z, smallest);

    return 0;
}
