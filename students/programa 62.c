#include<stdio.h>
#include<conio.h>

int main()
{
    int f,courseA[5],courseB[5],addA=0,addB=0;
    float averageA,averageB;
    printf("Students of course A\n");
    for(f=0;f<5;f++)
    {
        printf("Enter the grade of the student: ");
        scanf("%i",&courseA[f]);
        addA=addA+courseA[f];
    }
    printf("Students of course B\n");
    for(f=0;f<5;f++)
    {
        printf("Enter the grade of the student: ");
        scanf("%i",&courseB[f]);
        addB=addB+courseB[f];
    }
    averageA=addA/5;
    averageB=addB/5;
    printf("Average coursus A:");
    printf("%f0.2\n",averageA);
    printf("Average coursus B:");
    printf("%f0.2\n",averageB);
    if(averageA>averageB)
    {
        printf("Coursus A has the highest average");
    }
    else
    {
        printf("Coursus B has the highest average");
    }
    getch();
    return 0;
}
