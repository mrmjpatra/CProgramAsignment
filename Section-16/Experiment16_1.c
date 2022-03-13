/*Write a menu-based program to implement the following operations on a double linked list based on user’s choice.
1. Create a single linked list.
2. Traverse a single linked list.
3. Insert a node at the beginning.
4. Insert a node at the end
5. Insert a node at an intermediate position after a given node.
6. Delete the first node.
7. Delete the last node.
8. Delete an intermediate node after a given node.*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct Node
{
    int info;
    struct Node *prev;
    struct Node *next;
};

typedef struct Node DNode;
void InsertInfo(DNode *start, int item);

DNode *CreateLinkList()
{
    DNode *start;
    int item;
    char ch;
    start = (DNode *)malloc(sizeof(DNode));
    if (start == NULL)
    {
        printf("\nOut of memory Space\n");
        return;
    }
    printf("Enter the info of the first Node\n");
    scanf("%d", &start->info);
    start->prev = start->next = NULL;
    printf("1st node with info field %d created.", start->info);
    printf("\nDo you want to add more nodes \nPress Y to continue and press any other key to quit\n");
    ch = getche();
    while (ch == 'Y' || ch == 'y')
    {
        printf("\nEnter the value(info value) of New Node\n");
        scanf("%d", &item);
        InsertInfo(start, item);
        printf("\nDo you want to add more nodes \nPress Y to continue and press any other key to quit\n");
        ch = getche();
    }
    return start;
}
void InsertInfo(DNode *start, int item)
{
    DNode *NewNode, *ptr;
    ptr = start;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }

    NewNode = (DNode *)malloc(sizeof(DNode));
    if (NewNode == NULL)
    {
        printf("\nOut of Memory Space\n");
        return;
    }
    NewNode->info = item;
    NewNode->prev = ptr;
    NewNode->next = NULL;

    ptr->next = NewNode;
    printf("A new node with info field %d added to the linked list\n", NewNode->info);
}

void Traverse(DNode *start)
{
    DNode *ptr;
    if (start == NULL)
    {
        printf("\nEmpty Linked List\n");
    }
    else
    {
        ptr = start;
        printf("\nThe linked list is\n");
        while (ptr != NULL)
        {
            printf("%d<-> ", ptr->info);
            ptr = ptr->next;
        }
        printf("\b\b\b\b   ");
        printf("\n\n");
    }
}
void InsertNodeAtBegn(DNode *start)
{
    DNode *NewNode;
    int item;
    NewNode = (DNode *)malloc(sizeof(DNode));
    if (NewNode == NULL)
    {
        printf("\nOut of Memory Space\n");
        return;
    }
    printf("Enter the info for the New Node\n");
    scanf("%d", &item);
    NewNode->info = item;
    NewNode->next = start;
    NewNode->prev = NULL;
    start->prev = NewNode;
    start = NewNode;
    Traverse(start);
}

void InsertAtEnd(DNode *start)
{
    DNode *NewNode, *ptr;
    int item;
    ptr = start;
    NewNode = (DNode *)malloc(sizeof(DNode));
    if (NewNode == NULL)
    {
        printf("\nOut of Memory Space\n");
        return;
    }
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }

    printf("Enter the info for the New Node\n");
    scanf("%d", &item);
    NewNode->info = item;
    NewNode->next = NULL;
    NewNode->prev = ptr;
    ptr->next = NewNode;
}
void InsertAtInter(DNode *start)
{
    int choice, item;
    DNode *NewNode, *ptr1,*ptr2;
    printf("Enter the info field value after which you want to add the Node\n");
    scanf("%d", &choice);
    NewNode = (DNode *)malloc(sizeof(DNode));
    if (NewNode == NULL)
    {
        printf("\nOut of Memory Space\n");
        return;
    }
    ptr1 = start;
    while (ptr1->info != choice && ptr1->next != NULL)
    {
        ptr1 = ptr1->next;
    }
    ptr2=ptr1->next;
    printf("Enter the info field of New Node\n");
    scanf("%d", &item);
    NewNode->info=item;
    NewNode->prev=ptr1;
    NewNode->next=ptr2;
    ptr1->next=NewNode;
    ptr2->prev=NewNode;

}

void DelFirstNode(DNode *start){
    DNode *ptr;

    ptr = start;
    if (start->next ==start->prev== NULL)
    {
        free(start);
        start = NULL;
        return start;
    }

    start = ptr->next;
    ptr->next = NULL;
    free(ptr);
    return start;
}
void main()
{
    DNode *start;
    start = CreateLinkList(start);
    Traverse(start);
    // InsertNodeAtBegn(start);
    // InsertAtEnd(start);
    // InsertAtInter(start);
    DelFirstNode(start);
    Traverse(start);
}