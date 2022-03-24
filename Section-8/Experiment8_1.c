/*Write a program to find out the length of a string without using the strlen() function.*/

#include <stdio.h>

void main()
{

    char str[200];
    int count = 0;
    printf("Enter the String : \n");
    gets(str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        count++;
    }

    printf("The length of the entered string \"%s\" is : %d ", str, count);
}