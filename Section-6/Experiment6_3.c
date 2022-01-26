/*Write a program to read ‘n’ characters and then delete the duplicate characters.*/

#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    int n, i, j, k;
    
    char arr[50];

    printf("How many character you want to enter\n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("\nEnter the %d character\n", i + 1);
        arr[i] = getche();
    }


    printf("\nYour entered character are : \n");
    puts(arr);

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                for (k = j; k < n; k++)
                {
                    arr[k] = arr[k + 1];
                }
                
                n = n - 1;
                j--;
            }
        }
    }
    printf("\nAfter deleting the duplicate character: \n");
    puts(arr);

    return 0;
}
