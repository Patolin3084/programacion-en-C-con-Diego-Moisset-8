#include<stdio.h>
#include<conio.h>

int main()
{
    int f,valor,suma;
    suma=0;
    for(f=1;f<=10;f++)
    {
        printf("Ingese un valor: ");
        scanf("%i",&valor);
        if(f>5)
        {
            suma=valor+suma;
        }
    }
    printf("Resultado de la suma de los ultimos 5 valores:");
    printf("%i",suma);
    getch();
    return 0;
}
