#include<stdio.h>
#include<conio.h>

int main()
{
    int f,n,cantidad;
    float base,altura,superficie;
    cantidad=0;
    base=0;
    altura=0;
    printf("Ingrese cantida de triangulos a analizar:");
    scanf("%i",&n);
    for(f=1;f<=n;f++)
    {
        printf("\n");
        printf("Base del triangulo:");
        scanf("%f",&base);
        printf("Altura del triangulo:");
        scanf("%f",&altura);
        superficie=(base*altura)/2;
        printf("Superficie del triangulo: ");
        printf("%f",superficie);
        printf("\n");
        if(superficie>12)
        {
            cantidad++;
        }
    }
    printf("\n");
    printf("Cantidad de triangulos con superficie mayor a 12: ");
    printf("%i",cantidad);
    getch();
    return 0;
}
