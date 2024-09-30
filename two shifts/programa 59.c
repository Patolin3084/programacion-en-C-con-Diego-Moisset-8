#include<stdio.h>
#include<conio.h>

int main()
{
    float shiftMorn[4],shiftAft[4],Morn=0,Aft=0;
    int f;
    printf("Salarys morning employees\n");
    for(f=0;f<4;f++)
    {
        printf("Enter the salary: ");
        scanf("%f",&shiftMorn[f]);
    }
    printf("Salarys afternoon employees\n");
    for(f=0;f<4;f++)
    {
        printf("Enter the salary: ");
        scanf("%f",&shiftAft[f]);
    }
    for(f=0;f<4;f++)
    {
        Morn=Morn+shiftMorn[f];
        Aft=Aft+shiftAft[f];
    }
    printf("Total morning salary: ");
    printf("%0.2f\n",Morn);
    printf("Total afternoon salary: ");
    printf("%0.2f\n",Aft);
    getch();
    return 0;
}
