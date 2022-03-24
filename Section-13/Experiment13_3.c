/*Write a menu-base program that creates two one-dimensional arrays at runtime and performs the following operations as chosen by the user. Separate functions should be written for each of the following operations.
1. Insert an element in the 1st array (if size exceeds the allocated size, use ‘realloc()’)
2. Sort the 1st array.
3. Sort the 2nd array.
4. Merge the two arrays. */
#include <stdio.h>
#include <stdlib.h>

void insert(int *arr, int size)
{
    int newNum, i;
    char ch;
    printf("\nArray before input\n");
    for (i = 0; i < size; i++)
    {
        printf("%d\t", *(arr + i));
    }
    printf("\nEnter the number you want to enter\n");
    scanf("%d", &newNum);
    arr = (int *)realloc(arr, (size + 1) * sizeof(int));
    *(arr + size) = newNum;

    printf("Array after input of new number %d \n", newNum);
    for (int i = 0; i <= size; i++)
    {
        printf("%d\t", *(arr + i));
    }
}

void sort(int *arr, int size)
{

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (*(arr + i) > *(arr + j))
            {
                int temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d\t", *(arr + i));
    }
}

void merge(int *arr1, int *arr2, int size1, int size2)
{

    int *arr, size, i, j, k;
    size = size1 + size2;

    arr = (int *)malloc((size) * sizeof(int));

    for (i = 0; i < size1; i++)
    {
        *(arr + i) = *(arr1 + i);
    }

    for (i = size1, j = 0; (i < size && j < size2); i++, j++)
    {
        *(arr + i) = *(arr2 + j);
    }

    for (i = 0; i < size; i++)
    {
        printf("%d\t", *(arr + i));
    }
}
void main()
{
    int *arr1, *arr2, *i, size1, size2, choice, choi;
    printf("Enter the size of the first array : ");
    scanf("%d", &size1);
    arr1 = (int *)malloc(size1 * sizeof(int));
    printf("Enter the size of the second array : ");
    scanf("%d", &size2);
    arr2 = (int *)malloc(size2 * sizeof(int));

    printf("Enter the %d elements to the first array\n", size1);

    for (i = arr1; i < arr1 + size1; i++)
    {
        scanf("%d", i);
    }

    printf("Enter the %d elements to the second array\n", size2);

    for (i = arr2; i < arr2 + size2; i++)
    {
        scanf("%d", i);
    }

    while (1)
    {
        printf("----------------------------------------------------------------------------------------\n");
        printf("Enter the choice\n");
        printf("1 for inserting a number in the array \n2 for Sort the 1st array\n3 for Sort the 2nd array\n4 for Merge the two arrays.\nAnd 0 for exit the program\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 0:
            exit(0);
            break;
        case 1:
            printf("In which array you want to enter the new element 1st array or 2nd array\n");
            scanf("%d", &choi);
            if (choi == 1)
            {
                insert(arr1, size1);
            }
            else
            {
                insert(arr2, size2);
            }
            break;
        case 2:
            sort(arr1, size1);
            break;
        case 3:
            sort(arr2, size2);
            break;
        case 4:
            merge(arr1, arr2, size1, size2);
            break;

        default:
            printf("Invalid choice\n");
            break;
        }
        printf("\n----------------------------------------------------------------------------------------\n");
    }
}