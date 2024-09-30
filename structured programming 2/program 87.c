#include<stdio.h>
#include<conio.h>

void square()
{
    int value,square;
    printf("Enter a number to show your square: ");
    scanf("%i",&value);
    square=value*value;
    printf("The square of the number %i is: %i\n",value,square);
    printf("_______________________________________________________\n");
}

void product()
{
    int value1,value2,product;
    printf("Enter a number : ");
    scanf("%i",&value1);
    printf("Enter other number : ");
    scanf("%i",&value2);
    product=value1*value2;
    printf("The product of %i and %i is: %i\n",value1,value2,product);
    printf("_______________________________________________________\n");
}

int main()
{
    square();
    product();
    getch();
    return 0;
}
