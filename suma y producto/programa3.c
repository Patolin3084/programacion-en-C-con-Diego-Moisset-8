#include<stdio.h>

int main()
{
    int num1, num2, suma, producto;
    printf("Ingrese el primer valor:");
    scanf("%i",&num1),
    printf("ingrese el segundo valor:");
    scanf("%i",&num2);
    suma=num1+num2;
    producto=num1*num2;
    printf("El resultado de la suma es:");
    printf("%i",suma);
    printf("\n");
    printf("El resultado del producto es:");
    printf("%i",producto);
    getch();
    return 0;
}
