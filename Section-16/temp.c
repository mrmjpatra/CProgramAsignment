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

DNode *CreateLinkList(DNode *start)
{
    int item;
    char ch;
    start = (DNode *)malloc(sizeof(DNode));
    if (start == NULL)
    {
        printf("Out of memory space\n");
        return start;
    }
    printf("Enter the info field of first node\n");
    scanf("%d", &start->info);
    printf("A new node with info field %d is created\n", start->info);
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
        printf("\nOut of memory space\n");
        return;
    }

    NewNode->info = item;
    NewNode->next = NULL;
    ptr->next = NewNode;
    NewNode->prev = ptr;
}

void Traverse(DNode *start)
{
    DNode *ptr;

    if (start == NULL)
    {
        printf("Empty List");
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

DNode *InsertAtBeg(DNode *start)
{

    DNode *NewNode;
    NewNode = (DNode *)malloc(sizeof(DNode));

    if (NewNode == NULL)
    {
        printf("\nOut of memory space\n");
        
    }
    else{
    printf("Enter the info field New Node\n");
    scanf("%d", &NewNode->info);
    NewNode->prev = NULL;
    NewNode->next = start;
    start->prev = NewNode;
    start = NewNode;
    }
}


void InsertAtInter(DNode *start){
    DNode *NewNode,*ptr1,*ptr2;
    int choice;
    NewNode=(DNode*)malloc(sizeof(DNode));
    if (NewNode==NULL)
    {
        printf("\nOut of Memory Space\n");
    }
    else{

        printf("Enter the info field value after which you want to add the new node\n");
        scanf("%d",&choice);
        ptr1=start;
        while (ptr1->info!=choice && ptr1->next!=NULL)
        {
            ptr1=ptr1->next;

        }
        ptr2=ptr1->next;
        printf("Enter the info field of New Node\n");
        scanf("%d",&NewNode->info);
        NewNode->next=ptr2;
        ptr2->prev=NewNode;
        NewNode->prev=ptr1;
        ptr1->next=NewNode;
    }
}
DNode* DelFirstNode(DNode *start){
    DNode *ptr;
    ptr=start;
    start=ptr->next;
    start->prev=NULL;
    free(ptr);
    ptr=NULL;
    return start;
}
void DelLastNode(DNode *start){

    DNode *ptr1,*ptr2;

    ptr1=start;
    ptr2=ptr1->next;
    while (ptr2->next!=NULL)
    {
        ptr1=ptr1->next;
        ptr2=ptr1->next;
    }
    
    ptr1->next=NULL;
    ptr2->prev=NULL;
    free(ptr2);
    ptr2=NULL;

}
void DelInterNode(DNode *start){
    DNode *ptr1,*ptr2,*ptr3;
    int choice;
    ptr1=start;
    printf("Enter the info field of node after which you want to delete node\n");
    scanf("%d",&choice);
    while (ptr1->info!=choice && ptr1->next!=NULL)
    {
        ptr1=ptr1->next;
    }
    ptr2=ptr1->next;
    ptr3=ptr2->next;

    ptr1->next=ptr2->next;
    ptr3->prev=ptr1;
    free(ptr2);
    ptr2=NULL;




}
void main()
{
    DNode *start;
    start = CreateLinkList(start);
    Traverse(start);
    //start = InsertAtBeg(start);
    // InsertAtEnd(start);
    //InsertAtInter(start);
    //start=DelFirstNode(start);
    // DelLastNode(start);
    DelInterNode(start);
    Traverse(start);
}
