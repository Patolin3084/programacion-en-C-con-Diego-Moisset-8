#include<stdio.h>
#include<conio.h>

void numberBigger (int number1,int number2,int number3)
{
    if(number1>number2 && number1>number3)
    {
        printf("The bigger number is %i",number1);
    }
    else
    {
        if(number2>number3)
        {
            printf("The bigger number is %i",number2);
        }
        else
        {
            printf("The bigger number is %i",number3);
        }
    }
}

int main()
{
    int n1,n2,n3;
    printf("Enter an integer number: ");
    scanf("%i",&n1);
    printf("Enter another integer number: ");
    scanf("%i",&n2);
    printf("Enter a last integer number: ");
    scanf("%i",&n3);
    numberBigger(n1,n2,n3);
    getch();
    return 0;
}
