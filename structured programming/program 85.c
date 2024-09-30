#include<stdio.h>
#include<conio.h>

void presentation()
{
    printf("Program that allows loading two values by keyboard.\n");
    printf("Add the two values\n");
    printf("Show the result.\n");
    printf("_______________________________________________________\n");
}

void loadAdd()
{
    int value1,value2,add;
    printf("Enter the first value: ");
    scanf("%i",&value1);
    printf("Enter the second value: ");
    scanf("%i",&value2);
    add=value1+value2;
    printf("The sum of the two values is: %i\n",add);
}

void ending()
{
    printf("_______________________________________________________\n");
    printf("Thanks for using this program.");
}

int main()
{
    presentation();
    loadAdd();
    ending();
    getch();
    return 0;
}
