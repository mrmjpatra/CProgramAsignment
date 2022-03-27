/*Write a menu-based program that takes two linear arrays A and B as input and displays the results of the following operations based on user’s choice.
1. Traverse A.
2. Traverse B.
3. Insert a new element in A (after insertion, the size of A should increase by 1).
4. Insert a new element in B (after insertion, the size of B should increase by 1).
5. Delete an element from A.
6. Delete an element from B.
7. Search an element in A.
8. Search an element in B.
9. Sort A (in ascending order).
10. Sort B (in ascending order).
11. Merge A and B to form a new array C.*/
#include <stdio.h>
#include <stdlib.h>

//Creating the Array
void createArray(int size, int arr[], char ch)
{
    printf("\nEnter the %d number in the Array %c\n", size, ch);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
}

//Display the Array
void displayArray(int size, int arr[], char ch)
{
    printf("The elements of the Array %c are: \n", ch);
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}
//Insertion of new Element
int insertElement(int size, int arr[], char ch)
{
    int position, new_num;

    printf("Enter the position you want to enter the new Element in Array-%c : \n", ch);
    scanf("%d", &position);

    printf("Enter the new number to enter in %d position\n", position);
    scanf("%d", &new_num);

    for (int i = size; i >= position; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[position - 1] = new_num;
    size = size + 1;
    printf("The size of the Array %c is %d\n", ch, size);
    displayArray(size, arr, ch);
    return size;
}

//Delete of element

int deleteElement(int size, int arr[], char ch)
{
    int position;
    printf("Enter the location where you wish to delete element in the Array-%c\n", ch);
    scanf("%d", &position);

    for (int i = position - 1; i <= position; i++)
    {
        arr[i] = arr[i + 1];
    }
    size = size - 1;
    printf("The array %c after deletion is:\n", ch);
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    return size;
}

//Searching of the element
void searchElement(int size, int arr[], char ch)
{
    int search;
    printf("Enter the element which you want to search in the Array-%c\n", ch);
    scanf("%d", &search);

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == search)
        {
            printf("%d is present in the Array-%c\n", search, ch);
            break;
        }
        else
        {
            printf("%d is not present in the Array-%c\n", search, ch);
            break;
        }
    }
}

//Sorting of Array

void sortArray(int size, int arr[], char ch)
{
    int temp;
    printf("The Array-%c before sorting: \n", ch);
    displayArray(size, arr, ch);
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("\nThe array-%c after sorting : \n", ch);
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

//Merge A and B to form a new array C.

int mergeAToB(int size1, int size2, int arrA[], int arrB[], int arrC[])
{
    int i, j;
    int sizeC = size1 + size2;

    for (i = 0; i < size1; i++)
    {
        arrC[i] = arrA[i];
    }

    for (i = size1, j = 0; (i < sizeC && j < size2); i++, j++)
    {
        arrC[i] = arrB[j];
    }

    printf("The Array-A and Array-B after merging :\n");

    displayArray(sizeC, arrC, 'C');
    return sizeC;
}

void main()
{

    int choice, A[50], B[50], C[50], sizeA, sizeB, sizeC;

    printf("Enter the Size of Array A : ");
    scanf("%d", &sizeA);

    createArray(sizeA, A, 'A');

    printf("Enter the Size of Array B : ");
    scanf("%d", &sizeB);
    createArray(sizeB, B, 'B');
    sizeC = sizeA + sizeB;

    printf("Enter 1 Traverse A and 2- Traverse of B\n\n");
    printf("Enter 3 Insert a new element in A and 4- Insert a new element in B\n\n");
    printf("Enter 5 Delete an element from A. And 6- Delete an element from B.\n\n");
    printf("Enter 7 Search an element in A. And 8- Search an element in B.\n\n");
    printf("Enter 9 Sort A (in ascending order). And 10- Sort B (in ascending order).\n\n");
    printf("Enter 11 Merge A and B to form a new array C.\n\n");

    while (1)
    {
        printf("Enter the choice : 0 for exit the program Or Enter the desired choice : \n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 0:
            exit(0);
            break;

        case 1:
            displayArray(sizeA, A, 'A');
            break;

        case 2:
            displayArray(sizeB, B, 'B');
            break;

        case 3:
            sizeA = insertElement(sizeA, A, 'A');
            break;

        case 4:
            sizeB = insertElement(sizeB, B, 'B');
            break;

        case 5:
            sizeA = deleteElement(sizeA, A, 'A');
            break;

        case 6:
            sizeB = deleteElement(sizeB, B, 'B');
            break;

        case 7:
            searchElement(sizeA, A, 'A');
            break;

        case 8:
            searchElement(sizeB, B, 'B');
            break;

        case 9:
            sortArray(sizeA, A, 'A');
            break;

        case 10:
            sortArray(sizeB, B, 'B');
            break;
        case 11:
            sizeC = mergeAToB(sizeA, sizeB, A, B, C);
            break;

        default:
            printf("Invalid!! Choice");
            break;
        }
    }
}
