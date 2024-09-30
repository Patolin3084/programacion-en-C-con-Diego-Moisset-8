#include<stdio.h>
#include<conio.h>

int main()
{
    char name1[21],name2[21];
    int age1,age2;
    printf("Enter the name of the first person: ");
    gets(name1);
    printf("Enter the age: ");
    scanf("%i",&age1);
    fflush(stdin);
    printf("Enter the name of the second person: ");
    gets(name2);
    printf("Enter the age: ");
    scanf("%i",&age2);
    if(age1>age2)
    {
        printf("The oldest person is: %s",name1);
    }
    else
    {
        if(age1<age2)
        {
            printf("The oldest person is: %s",name2);
        }
        else
        {
            printf("%s and %s are the same age",name1,name2);
        }
    }
    getch();
    return 0;
}
