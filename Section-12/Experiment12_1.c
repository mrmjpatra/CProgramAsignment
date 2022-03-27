/*An item is represented by the following attributes:
− Either a model number (string) or an item code (string)
− Name (string)
− Price (float)
Write a program using union to read the information for 5 items from the keyboard and print the same on the screen. */
#include <stdio.h>
union Model
{
    char modelNumber[30];
    char itemCode[30];
};

struct Product
{
    union Model m;
    char name[30];
    float price;
};

void main()
{
    struct Product p[5];
    int choice;


    for(int i=0;i<5;i++)
    {
    printf("What you want to enter Model number or Item Code\nPress 1 for Model Number And 2 for Item Code : ");
    scanf("%d", &choice);
    
    if (choice == 1)
    {
        printf("Enter the Model number of the product\n");
        scanf("%s", &p[i].m.modelNumber);
    }
    else
    {

        printf("Enter the Item Code of the product\n");
        scanf("%s", &p[i].m.itemCode);
    }

    printf("Enter the Name : ");
    scanf("%s", p[i].name);

    printf("\nEnter the price of the product : ");
    scanf("%f", &p[i].price);
    }
    printf("-----------------------------------------------------------------\n");
    for(int i=0;i<5;i++)
    {

    
    if (choice == 1)
    {
        printf("The Model number of the product is %s\n",p[i].m.modelNumber);
    }
    else
    {

        printf("The Item Code of the product is %s\n",p[i].m.itemCode);
    }
    printf("The name of the customer : ");
    puts(p[i].name);
    printf("The price of the product : %.2f", p[i].price);
    printf("-----------------------------------------------------------------\n");
    }
}