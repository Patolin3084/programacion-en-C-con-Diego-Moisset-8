#include<stdio.h>
#include<conio.h>

int main()
{
    float sueldo, gastos;
    int n, x, sAlto, sBajo;
    sAlto=0;
    sBajo=0;
    gastos=0;
    x=1;
    printf("Ingrese cantidad de trabajadores:");
    scanf("%i",&n);
    while(x<=n)
    {
        printf("Ingrese sueldo del trabajador:");
        scanf("%f",&sueldo);
        if(sueldo>=300)
        {
            sAlto=sAlto+1;
        }
        else
        {
            sBajo=sBajo+1;
        }
        gastos=gastos+sueldo;
        x=x+1;
    }
    printf("Cantidad de trabajador que cobran mas de 300:");
    printf("%i",sAlto);
    printf("\n");
    printf("Cantidad de trabajadores que cobran menos de 300:");
    printf("%i",sBajo);
    printf("\n");
    printf("Total de gastos en sueldos:");
    printf("%f",gastos);
    getch();
    return 0;
}
