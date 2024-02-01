#include <stdio.h>
#include <stdlib.h>

//promedio usando if-else

void main(void)
{
    float pro;
    printf("Ingrese su promedio: ");
    scanf ("%f", &pro);

    if (pro >= 6)
        printf("\nUsted fue APROBADO. \n");
    else
        printf("\nUsted fue REPROBADO. \n");
}
