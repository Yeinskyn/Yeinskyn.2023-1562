#include <stdio.h>
#include <stdlib.h>

// Elergir asistente si cumple con el semestre y promedio.
// En caso de que cumpla, pedir su matricula, carrera y promedio.

void main(void)
{
    int mat, carr, sem;
    float pro;

    printf("\n Ingrese su matricula: ");
    scanf ("%d", &mat);
    printf("\n Marque el numero de su carrera (1- Industrial \t2-Telematica \t3-Computacion \t4-Mecanica): ");
    scanf ("%d", &carr);
    printf("\n Ingrese su semestre: ");
    scanf ("%d", &sem);
    printf("\n Ingrese su promedio: ");
    scanf("%f", &pro);

    switch (carr)
    {
    case 1:
        if (sem >= 6 && pro >= 8.5)
            printf("\n\n %d \t%d %5.2f", mat, carr, pro);
        break;
    case 2:
        if (sem >= 5 && pro >= 9.0)
            printf("\n\n %d \t%d %5.2f", mat, carr, pro);
        break;
    case 3:
        if (sem >= 6 && pro >= 8.8)
            printf("\n\n \t%d \t%d %5.2f", mat, carr, pro);
        break;
    case 4:
        if (sem >= 7 && pro >= 9.0)
            printf ("\n\n %d \t%d %5.2f", mat, carr, pro);
        break;
default:
        printf("\n\n Error en la carrera");
        break;
    }
}
