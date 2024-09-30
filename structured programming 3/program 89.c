#include<stdio.h>
#include<conio.h>

void biggest()
{
    int value1,value2,value3;
    printf("Enter the first value to compare: ");
    scanf("%i",&value1);
    printf("Enter the second value to compare: ");
    scanf("%i",&value2);
    printf("Enter the third value to compare: ");
    scanf("%i",&value3);
    if(value1<value2 && value1<value3)
    {
        printf("The lowest number is: %i\n",value1);
        printf("_______________________________________________________\n");
    }
    else
    {
        if(value2<value3)
        {
            printf("The lowest number is: %i\n",value2);
            printf("_______________________________________________________\n");
        }
        else
        {
            printf("The lowest number is: %i\n",value3);
        printf("_______________________________________________________\n");
        }
    }
}
/*
int main()
{
    biggest();
    biggest();
    biggest();
    getch();
    return 0;
}*/

int main()
{
    int f;
    for(f=0;f<3;f++)
    {
        biggest();
    }
    getch();
    return 0;
}
