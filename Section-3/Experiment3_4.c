/*Write a program to input a character and check whether it is a vowel or consonant using conditional operator. [Hint: compare against the ASCII range.]*/
#include<stdio.h>
#include<conio.h>

int main()
{
    char ch;
    printf("Enter the character to check whether the number is vowel or consonant\n");
    scanf("%c",&ch);
    (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||  ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')? (printf("'%c' is Vowel.", ch)):(printf("'%c' is Consonant.", ch));

    return 0;
}
