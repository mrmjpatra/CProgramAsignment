/*Write a program that takes a line of text from command line and prints characters present in the line in alphabetical order. For example, if we type the line of text “India is my country” on command line the output should be “acdIiimnnorstuyy”. */
#include <stdio.h>
#include<string.h>

void main(int argc, char *argv[])
{
    char temp;
    char str[1000]="";
    for (int i = 3; i <argc; i++)
    {
        
        strcat(str,argv[i]);
    }
    
    puts(str);




    // for (int i = 1; i < argc; i++)
    // {
    //     for (int j = i + 1; j < argc; j++)
    //     {
    //         if (*argv[i] > *argv[j])
    //         {
    //             temp = *argv[i];
    //             *argv[i] = *argv[j];
    //             *argv[j] = temp;
    //         }
    //     }
    // }

    // for (int i = 1; i < argc; i++)
    // {
    //     printf("%s", argv[i]);
    // }

}
