#include<stdio.h>

int main()
{
    int num1, num2, num3, num4, suma, promedio;
    printf("Ingresar primer valor:");
    scanf("%i",&num1);
    printf("Ingresar segundo valor:");
    scanf("%i",&num2);
    printf("Ingresar tercer valor:");
    scanf("%i",&num3);
    printf("Ingresar cuarto valor:");
    scanf("%i",&num4);
    suma=num1+num2+num3+num4;
    promedio=(suma)/4;
    printf("El resultado de la suma de los numeros es:");
    printf("%i",suma);
    printf("\n");
    printf("El resultado del promedio de los numeros es:");
    printf("%i",promedio);
    getch();
    return 0;
}
