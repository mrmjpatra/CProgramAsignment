/*Write a program that takes as input a string and two numbers n1 and n2 and find the substring between these two positions. For example, let the string is “Welcome” and the numbers are n1=2 and n2=5 then the substring will be: “lcom”. */
#include <stdio.h>
#include <string.h>

void main()
{
    char str[100];
    int n1, n2, len;

    printf("Enter the String :\n");
    gets(str);

    printf("Enter the First position : ");
    scanf("%d", &n1);
    printf("Enter the First position : ");
    scanf("%d", &n2);
    len = strlen(str);

    if (n1 < len && n2 < len && n1 < n2)
    {

        for (int i = n1; i <= n2; i++)
        {
            printf("%c", str[i]);
        }
    }
    else
    {
        printf("Invalid!! position you have entered\n");
    }
}