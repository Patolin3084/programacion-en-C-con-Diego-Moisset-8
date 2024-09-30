#include<stdio.h>

int main()
{
    float horasTrabajadas;
    float costoHora;
    float sueldo;
    printf("Ingrese las horas trabajadas por el empleado:");
    scanf("%f",&horasTrabajadas);
    printf("Ingrese el pago por hora:");
    scanf("%f",&costoHora);
    sueldo=horasTrabajadas*costoHora;
    printf("El sueldo total del operario es de: ");
    printf("%f",sueldo);
    getch();
    return 0;
}
