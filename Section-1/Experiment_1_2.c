#include<stdio.h>


int main()
{

    float cel, far;
    int user_input;
    printf("What you want \n 1. Press 1 for Celsius to Fahrenheit \n 2. Press 2 for Fahrenheit to Celsius\n");
    scanf("%d",&user_input);

    if(user_input==1)
    {
        printf("Enter The Temperature to Convert Celsius to Fahrenheit\n");
        scanf("%f",&cel);
        far=(cel*9/5)+32;
        printf("%f in Fahrenheit scale is %.2f",cel,far);
    }
    else
    {
        printf("Enter The Temperature to Convert Fahrenheit to Celsius\n");
        scanf("%f",&far);
        cel=(5.0/9.0)*(far-32);
        printf("%f in Celsius scale is %.2f",far,cel);
    }


    return 0;
}
