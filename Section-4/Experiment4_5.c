/*An electricity board charges the following rates for the use of electricity.
− For the first 200 units: 80 paise per unit
− For the next 100 units: Rs. 1.30 per unit
− Beyond 300 units: Rs. 2.00 per unit
All users are charged a minimum of Rs. 100 as meter charge.
If the total amount is more that Rs. 400,
then an additional surcharge of 15% of total amount is charged.
Write a program to read the name of a consumer and
the number of units consumed and print the charge with his/her name.*/

#include<stdio.h>
#include<conio.h>

int main()
{
    char name[20];
    float units,m1=0,m2=0,m3=0,amount;

    printf("Enter the Name of the Consumer\n");
    gets(name);
    printf("Enter the number of units consumed\n");
    scanf("%f",&units);

    if(units<=200){
        m1=units;
    }
    else if(units>200 && units<=300){
       m2=units-200;
    }
    else if(units>300){
        m3=units-300;
    }
    amount=(m1*0.80)+(m2*1.30)+(m3*2.00)+100;
    if(amount>400){
        amount=amount+(amount*0.15);
    }
    printf("The amount charged for the consumer ");
    puts(name);
    printf("is %f",amount);




    return 0;
}
