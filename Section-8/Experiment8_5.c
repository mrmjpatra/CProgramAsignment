/*Write a program which reads a string and prints it in alphabetical order. For example, the word WELCOME should be displayed as CEELMOW. */
#include <stdio.h>
#include <string.h>

void main()
{
    char str[100], temp;
    int len;

    printf("Enter the string \n");
    gets(str);
    len = strlen(str);

    for (int i = 0; i < len; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (str[i] > str[j])
            {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
    printf("The entered string in alphabetical order is : ");
    puts(str);
}