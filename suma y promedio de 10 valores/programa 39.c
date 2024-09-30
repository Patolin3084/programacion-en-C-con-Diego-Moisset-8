#include<stdio.h>
#include<conio.h>

int main()
{
    int f;
    float  valor, suma, promedio;
    suma=0;
    for(f=1; f<=10; f++)
    {
        printf("Ingrese valor:");
        scanf("%f",&valor);
        suma=valor+suma;
    }
    promedio=suma/10;
    printf("Suma de los 10 valores:");
    printf("%f",suma);
    printf("\n");
    printf("Promedio de los 10 valores:");
    printf("%f",promedio);
    getch();
    return 0;
}
