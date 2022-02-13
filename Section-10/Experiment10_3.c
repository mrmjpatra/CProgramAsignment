/* Use recursive function calls to evaluate the following series:
x - (x3/3!) + (x5/5!) - (x7/7!) + …*/
#include <stdio.h>
#include <math.h>

double series(int x, int n)
{
    double callfunc, sum = 1;


    int t = 2 * n - 1;

    if (t <= 1)
    {
        printf("%d", x);
        return x;
    }

    for (int i = 1; i <= t; i++)
    {
        sum = (sum * x) / i;
    }

    if (n % 2 == 0)
    {
        callfunc = series(x, n - 1);
        printf(" - (%d^%d/%d!)", x,t, t);
        return callfunc - sum;
    }
    callfunc = series(x, n - 1);
    printf("+ (%d^%d/%d!)", x, t, t);
    return sum + callfunc;
}

void main()
{

    int x, n;
    double value;
    printf("Enter the value of x : ");
    scanf("%d", &x);
    printf("Enter the number of n : ");
    scanf("%d", &n);
    value = series(x, n);
    printf(" = %f", value);
}