/*Write a program to find out the HCF and LCM of two numbers.*/

#include <stdio.h>

void main()
{

    int n1, n2, hcf, lcm;
    printf("Enter two interger to find HCF And LCM\n");
    scanf("%d %d", &n1, &n2);

    for (int i = 1; i <= n1 && i <= n2; i++)
    {

        if (n1 % i == 0 && n2 % i == 0)
        {
            hcf = i;
        }
    }
    printf("The HCF of two interger is %d\n", hcf);
    lcm = (n1 * n2) / hcf;
    printf("The LCM of two integer is %d\n", lcm);
    
}