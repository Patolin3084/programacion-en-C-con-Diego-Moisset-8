#include<stdio.h>
#include<conio.h>

void load(int notes[5])
{
    for(int x=0;x<5;x++)
    {
        printf("Enter the student note: ");
        scanf("%i",&notes[x]);
    }
}

float average(int notes[5])
{
    int add=0;
    float average;
    for(int x=0;x<5;x++)
    {
        add=add+notes[x];
    }
    average=add/5;
    return average;
}

void main()
{
    int notesA[5];
    int notesB[5];
    printf("Course A\n");
    load(notesA);
    printf("Course A average: %0.2f\n",average(notesA));
    printf("Course B\n");
    load(notesB);
    printf("Course B average: %0.2f\n",average(notesB));
    if(average(notesA)>average(notesB))
    {
        printf("The students of cours A are the high average: %0.2f",average(notesA));
    }
    else
    {
        printf("The students of cours B are the high average: %0.2f",average(notesB));
    }
    getch();
    return 0;
}
