/*Write a program to count the number of digits in a number.*/

#include <stdio.h>
#include <conio.h>

void main()
{

	int num, count, rem = 0, n;

	printf("Enter the number for counting the digits\n");
	scanf("%d", &num);
	n = num;

	while (num != 0)
	{
		rem = num % 10;
		num = num / 10;
		count++;
	}

	printf("The number of digits of your entered %d number is: %d", n, count);
}
