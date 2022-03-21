/*Write a program to input a character and check whether it is in upper case or lower case using conditional operator. [Hint: compare against the ASCII range.]*/

#include <stdio.h>

void main()
{
    char ch;
    printf("Enter the character\n");
    scanf("%c", &ch);
    (ch >= 97 && ch <= 122) ? (printf("The entered character is small")) : (printf("The entered character is capital"));
}
