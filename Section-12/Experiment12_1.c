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
    struct Product p;
    int choice;

    printf("What you want to enter Model number or Item Code\nPress 1 for Model Number And 2 for Item Code : ");
    scanf("%d", &choice);
    if (choice == 1)
    {
        printf("Enter the Model number of the product\n");
        scanf("%s", &p.m.modelNumber);
    }
    else
    {

        printf("Enter the Item Code of the product\n");
        scanf("%s", &p.m.itemCode);
    }

    printf("Enter the Name : ");
    scanf("%s", p.name);

    printf("\nEnter the price of the product : ");
    scanf("%f", &p.price);
    printf("-----------------------------------------------------------------\n");
    if (choice == 1)
    {
        printf("The Model number of the product is %s\n", p.m.modelNumber);
    }
    else
    {

        printf("The Item Code of the product is %s\n", p.m.itemCode);
    }
    printf("The name of the customer : ");
    puts(p.name);
    printf("The price of the product : %f", p.price);
    printf("-----------------------------------------------------------------\n");
}