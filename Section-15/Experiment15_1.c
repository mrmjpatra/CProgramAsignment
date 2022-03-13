/* Write a menu-based program to implement the following operations on a single linked list based on user’s choice.
1. Create a single linked list.
2. Traverse a single linked list.
3. Insert a node at the beginning.
4. Insert a node at the end.
5. Insert a node at an intermediate position after a given node.
6. Delete the first node.
7. Delete the last node.
8. Delete an intermediate node after a given node.
9. Sorting the node values.*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

typedef struct Node SNode;
void InsertAtEndSLL(SNode *start, int item);

SNode *CreateSLL()
{
    SNode *start;
    int item;
    char ch;

    start = (SNode *)malloc(sizeof(SNode));

    if (start == NULL)
    {
        printf("\nOut of Memory");
        return;
    }

    printf("Enter the info field of 1st Node\n");
    scanf("%d", &start->data);
    start->next = NULL;
    printf("The 1st node with info field %d created\n", start->data);

    printf("\nDo you want to add more nodes \nPress Y to continue and press any other key to quit\n");
    ch = getche();
    while (ch == 'Y' || ch == 'y')
    {
        printf("\nEnter the value(info value) of New Node\n");
        scanf("%d", &item);
        InsertAtEndSLL(start, item);
        printf("Do you want to add more nodes\nPress Y to continue and press any other key to quit\n");

        ch = getche();
    }

    return start;
}
void InsertAtEndSLL(SNode *start, int item)
{
    SNode *newNode, *ptr;
    ptr = start;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }

    newNode = (SNode *)malloc(sizeof(SNode));
    if (newNode == NULL)
    {
        printf("\nMemory out of Space\n");
    }

    newNode->data = item;
    newNode->next = NULL;

    ptr->next = newNode;
    printf("The new Node with info field %d added  to the linked list\n", newNode->data);
}

void Traverse(SNode *start)
{
    SNode *ptr;
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
            printf("%d-> ", ptr->data);
            ptr = ptr->next;
        }
        printf("\b\b\b  ");
        printf("\n\n");
    }
}

SNode *InsertBegn(SNode *start)
{

    SNode *NewNode;
    NewNode = (SNode *)malloc(sizeof(SNode));
    if (NewNode == NULL)
    {
        printf("\n Out of memory Space");
    }
    printf("Enter the data of the node at the begining\n");
    printf("Enter the info field of node\n");
    scanf("%d", &NewNode->data);
    NewNode->next = start;
    start = NewNode;
    return start;
}

SNode *InserNodeAtEnd(SNode *start)
{
    SNode *NewNode, *ptr;
    ptr = start;
    NewNode = (SNode *)malloc(sizeof(SNode));
    if (NewNode == NULL)
    {
        printf("\nOut of memory space");
        return;
    }
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    printf("Enter the info of the Node at the end\n");
    scanf("%d", &NewNode->data);
    NewNode->next = NULL;
    ptr->next = NewNode;
    return start;
}
SNode *InserNodeAtInter(SNode *start)
{
    SNode *NewNode, *ptr;
    ptr = start;
    int item;
    printf("Enter the data after which you want to the new node\n");
    scanf("%d", &item);
    NewNode = (SNode *)malloc(sizeof(SNode));
    if (NewNode == NULL)
    {
        printf("\nOut of Meomory Space\n");
        return;
    }
    while ((ptr->data != item) && (ptr->next != NULL))
    {
        ptr = ptr->next;
    }
    printf("Enter the info field of the Node\n");
    scanf("%d", &NewNode->data);
    NewNode->next = ptr->next;
    ptr->next = NewNode;

    return start;
}

SNode *DelFirstNode(SNode *start)
{
    SNode *ptr;
    ptr = start;
    if (start->next == NULL)
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
SNode *DelLastNode(SNode *start)
{
    SNode *ptr1, *ptr2;
    ptr1 = start;
    if (start->next == NULL)
    {
        free(start);
        start = NULL;
        return start;
    }
    ptr1 = start;
    ptr2 = start->next;
    while (ptr2->next != NULL)
    {
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }

    ptr1->next = NULL;
    free(ptr2);

    return start;
}
SNode *DelInter(SNode *start)
{
    SNode *ptr1, *ptr2;
    int item;
    printf("Enter the data after which you want to delete the node\n");
    scanf("%d", &item);
    ptr1 = start;
   

    while (ptr1->data != item && ptr1->next != NULL)
    {
        ptr1 = ptr1->next;
    }
    if (ptr1->next==NULL)
    {
        printf("\n%d is not found in the linked list.",item);
        exit(0);
    }
    ptr2 = ptr1->next;

    ptr1->next = ptr2->next;
    free(ptr2);
    return start;
}

void SortNode(SNode *start)
{

    SNode *i, *j;

    for (i = start; i!= NULL; i = i->next)
    {

        for (j = i->next; j!= NULL; j = j->next)
        {

            if (i->data > j->data)
            {
                int temp = i->data;
                i->data = j->data;
                j->data = temp;
            }
        }

    }
}

void main()
{
    SNode *start=NULL;
    int choice;
    
    while (1)
    {
        printf("Enter the Choice\n");
        printf("Press 1 for Create a single linked list.\n2 for Traverse a single linked list.\n3 for Insert a node at the beginning.\n4 for Insert a node at the end.\n5 for Insert a node at an intermediate position after a given node.\n6 for Delete the first node.\n7 for Delete the last node.\n8 for Delete an intermediate node after a given node.\n9 for Sorting the node values.\n0 for exit the program\n");
        scanf("%d",&choice);

        switch (choice)
        {
        case 0:
            exit(0);
            break;
        case 1:
            start = CreateSLL();
            Traverse(start);
            break;
        case 2:
            Traverse(start);
            break;
        case 3:
            start=InsertBegn(start);
            Traverse(start);
            break;
        case 4:
            start = InserNodeAtEnd(start);
            Traverse(start);
            break;
        case 5:
            start = InserNodeAtInter(start);
            Traverse(start);
            break;
        case 6:
            start=DelFirstNode(start);
            Traverse(start);
            break;
        case 7:
            start=DelLastNode(start);
            Traverse(start);
            break;
        case 8:
            start=DelInter(start);
            Traverse(start);
            break;
        case 9:
            SortNode(start);
            Traverse(start);
            break;
        
        default:
            printf("Invalid!! Choice\n");
            break;
        }


    }
    


}
