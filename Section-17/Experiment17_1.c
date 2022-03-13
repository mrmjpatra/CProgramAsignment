/* An employee is represented by the following attributes:
− Employee ID
− Name
− Date of Joining (DD MM YY)
− Salary
Write a program to read the information of five employees from the keyboard and write it in a file “EmployeesInfo.txt”, and again read the same information from the file “EmployeesInfo.txt” and display it on the screen.*/
#include <stdio.h>
#include <stdlib.h>
struct Date
{
    int dd;
    int mm;
    int yy;
};

struct Employee
{
    int id;
    char name[20];
    struct Date date;
    float salary;
};
typedef struct Employee Employee;
void main()
{

    Employee emp[5];
    char c;

    printf("Enter the details of the 5 Employees\n");
    printf("-----------------------------------------------\n\n");

    for (int i = 0; i < 5; i++)
    {
        printf("Enter details of %d Employee\n", i + 1);
        printf("-----------------------------------------------\n");
        printf("Enter the id of %d employee\n", i + 1);
        scanf("%d", &emp[i].id);
        printf("Enter the name of the %d Employee\n", i + 1);
        scanf("%s", emp[i].name);
        printf("Enter the Joining date of the Employee in the format of DD MM YY by preessing spacebar\n");
        scanf("%d %d %d", &emp[i].date.dd, &emp[i].date.mm, &emp[i].date.yy);
        printf("Enter the salary of the %d employee\n", i + 1);
        scanf("%f", &emp[i].salary);
    }

    FILE *fp;
    fp = fopen("Employee.txt", "w");
    if (fp == NULL)
    {
        printf("\nFile can't be opened\n");
        exit(0);
    }
    else
    {
        printf("\nFile successfully created.You data is saved in this file\n");
    }
    if (ferror(fp))
    {
        printf("Can't write in the file\n");
        exit(0);
    }
    fprintf(fp, "\nStoring the details of Employee %d\n", i + 1);
    fprintf(fp, "\n================================================\n");
    fprintf(fp, "\nDetails of the 5 Employees\n");
    for (int i = 0; i < 5; i++)
    {

        fprintf(fp, "Details of the %d Employee\n", i + 1);
        fprintf(fp, "Id of the Employee is : %d\nName of the Employee is :%s\nDate of Joining of the Employee is :%d %0d %d\nSalary : %.2f\n", emp[i].id, emp[i].name, emp[i].date.dd, emp[i].date.mm, emp[i].date.yy, emp[i].salary);
    }
    fclose(fp);
    fp = fopen("Employee.txt", "r");
    if (fp == NULL)
    {
        printf("\nFile can't be opened\n");
        exit(0);
    }
    else
    {
        printf("\nFile successfully Opened.\n");
    }
    if (ferror(fp))
    {
        printf("Can't Read from this file\n");
        exit(0);
    }
    c = fgetc(fp);

    while (c != EOF)
    {
        printf("%c", c);
        c = fgetc(fp);
    }

    fclose(fp);
}
