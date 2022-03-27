/* Write a program using function to take a string as input and then convert all lowercase characters to its uppercase equivalent.*/
#include <stdio.h>
#include <string.h>

void toUperCase(char str[100])
{
    
    
    for (int i = 0; i <(strlen(str)); i++)
    {
        
         if (str[i] >= 97 && str[i] <= 122)
        {
            str[i]=str[i]-32;
        }
    }

    puts(str);
}

void main()
{
    char str[100];

    printf("Enter the String\n");
    gets(str);
    printf("String in upprer case is \n");
    toUperCase(str);
}