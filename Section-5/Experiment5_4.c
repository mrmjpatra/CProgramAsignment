/*Write a program that takes as input an integer ‘n’ and computes the following series: 1 - (2/3!) + (3/4!) - (4/5!) + .... ± (n/(n+1)!). */
#include <stdio.h>

void main()
{

    float sum = 1.0;
    int num, n, fac;
    printf("Enter the value of n : ");
    scanf("%d", &num);

    for (int i = 2; i <= num; i++)
    {
        fac=1;
        for (int j = 1; j <= (i + 1); j++)
        {
            fac = fac * j;
        }
        printf("%d\n", fac);

        if (i % 2 == 0)
        {
            sum = (sum - ((float)i / (float)(fac)));
        }
        else
        {
            sum = (sum + ((float)i / (float)(fac)));
        }
    }
    printf("The value of the series is %f", sum);
}