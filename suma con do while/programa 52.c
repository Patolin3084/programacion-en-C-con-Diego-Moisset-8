#include<stdio.h>
#include<conio.h>

int main()
{
    int value,average,add=0,amount=0;
    do{
        printf("Enter a value (0 ends): ");
        scanf("%i",&value);
        if(value!=0)
        {
            add=add+value;
            amount++;
        }
    } while(value!=0);
    if (amount!=0)
    {
        average=add/amount;
        printf("The average of the entered values is: ");
        printf("%i",average);
    }
    else
    {
        printf("No values have been entered");
    }
    getch();
    return 0;
}
