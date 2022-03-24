/* Using pointers, write a function that receives a character string and a character as arguments and deletes all occurrence of this character in the string. The function should return the corrected string with no holes.*/
#include <stdio.h>
#include <string.h>

void fun(char str[100], int n)
{
    char *arr=str;
    int i, j, k;
    printf("\nYour entered String is : \n");
    puts(*(&arr));

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (*(&arr[i]) == *(&arr[j]))
            {
                for (k = j; k < n; k++)
                {
                    *(&arr[k]) = *(&arr[k + 1]);
                }

                n = n - 1;
                j--;
            }
        }
    }
    printf("\nAfter deleting the duplicate character: \n");
    puts(*(&arr));
}
void main()
{
    char str[100], ch;
    int len;
    printf("Enter the string\n");
    gets(str);
    len = strlen(str);
    fun(str,len);
}