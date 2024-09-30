#include<stdio.h>
#include<conio.h>
/*
int main()
{
    int f,valor,mult;
    printf("Esta es la tabla de multiplicar del: ");
    scanf("%i",&valor);
    for(f=1;f<=13;f++)
    {
        mult=valor*f;
        printf("%i",mult);
        printf(" - ");
    }
    getch();
    return 0;
}*/

int main()
{
    int f,valor;
    printf("Esta es la tabla de multiplicar del: ");
    scanf("%i",&valor);
    for(f=valor;f<=valor*13;f=f+valor)
    {
        printf("%i",f);
        printf(" - ");
    }
    getch();
    return 0;
}
