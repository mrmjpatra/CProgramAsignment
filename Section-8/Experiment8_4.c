/*Write a program that reads two strings and then compares them without using the strcmp() function. */
#include <stdio.h>
#include <string.h>

void main()
{

    char str1[100], str2[200];
    int l1, l2;

    printf("Enter the First String : \n");
    gets(str1);
    printf("Enter the Second String : \n");
    gets(str2);
    l1 = strlen(str1);
    l2 = strlen(str2);

    if (l1 != l2)
    {
        printf("They are  not same string");
    }

    else
    {

        for (int i = 0; str1[i] != '\0'; i++)
        {
            if (str1[i] != str2[i])
            {
                printf("They are not same string");
                break;
            }
            else
            {
                printf("They are same string");
                break;
            }
        }
    }
}