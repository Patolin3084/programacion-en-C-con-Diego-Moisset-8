#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char name1[31],name2[31];
    printf("Enter a name: ");
    gets(name1);
    printf("Enter other name: ");
    gets(name2);
    printf("Names arranged alphabetically: ");
    if(strcmp(name1,name2)<0)
    {
        printf("%s - %s",name1,name2);
    }
    else
    {
        printf("%s - %s",name2,name1);
    }
    getch();
    return 0;
}
