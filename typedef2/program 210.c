#include<stdio.h>
#include<conio.h>

#define TAM 5

struct person{
    char name[40];
    int age;
};

typedef struct person tpeople[TAM];

void load(tpeople people)
{
    for(int r=0;r<TAM;r++)
    {
        printf("Enter the name:");
        gets(people[r].name);
        printf("Enter the age:");
        scanf("%i",&people[r].age);
        fflush(stdin);
    }
}

void print(tpeople people)
{
    for(int r=0;r<TAM;r++)
        printf("%s %i\n",people[r].name,people[r].age);
}

int main()
{
    tpeople people;
    load(people);
    print(people);
    getch();
    return 0;
}
