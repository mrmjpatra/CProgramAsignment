/* Write a program that will count the number of occurrences of a specific character in a given line of text.*/
#include <stdio.h>
#include <string.h>

void main()
{
    char str[200], ch;
    int count = 0;
    printf("Enter the line : \n");
    gets(str);
    printf("Enter the character you want to search : ");
    scanf("%c", &ch);

    for (int i = 0; i<=strlen(str); i++)
    {
        if (str[i] == ch)
        {
            count++;
        }
    }
    printf("The number of occurance of %c in line \"%s\" is : %d\n", ch, str, count);
}