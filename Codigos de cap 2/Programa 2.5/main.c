#include <stdio.h>
#include <math.h>

// Al recibir los datos, obtenga el resultado.

void main(void)
{
    int OP, T;
    float res;
    printf("Ingrese la opcion del calculo y el valor entero: ");
    scanf ("%d %d", &OP, &T);

    switch (OP)
    {
        case 1: res = T / 5;
        break;

        case 2: res = pow (T, T);
        break;

        case 3:
        case 4: res = 6 * T/2;
        break;

        default: res = 1;
        break;
    }
printf ("\nEl resultado es: %8.2f \n", res);
}
