#include<stdio.h>
#include<conio.h>
/*
void loadAdd1()
{
    int value1,value2,add1;
    printf("Enter the first value: ");
    scanf("%i",&value1);
    printf("Enter the second value: ");
    scanf("%i",&value2);
    add1=value1+value2;
    printf("The sum of the first two values is: %i\n",add1);
    printf("_______________________________________________________\n");
}

void loadAdd2()
{
    int value1,value2,add2;
    printf("Enter the first value: ");
    scanf("%i",&value1);
    printf("Enter the second value: ");
    scanf("%i",&value2);
    add2=value1+value2;
    printf("The sum of the second two values is: %i\n",add2);
    printf("_______________________________________________________\n");
}

void ending()
{
    int add1,add2,add3;
    add3=add1+add2;
    printf("The sum of both results is: %i\n",add3);
    printf("_______________________________________________________\n");
    printf("Thanks for using this program.");

}

int main()
{
    loadAdd1();
    loadAdd2();
    ending();
    getch();
    return 0;
}*/

void loadAdd()
{
    int value1,value2,add;
    printf("Enter the first value: ");
    scanf("%i",&value1);
    printf("Enter the second value: ");
    scanf("%i",&value2);
    add=value1+value2;
    printf("The sum of %i and %i is: %i\n",value1,value2,add);
}

void space()
{
     printf("_______________________________________________________\n");
}

int main()
{
    loadAdd();
    space();
    loadAdd();
    space();
    space();
    getch();
    return 0;
}
