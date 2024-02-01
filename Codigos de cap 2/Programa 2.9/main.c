#include <stdio.h>
#include <stdlib.h>

// Identificar si al introducir valores el resultado es menor que 820.

void main(void)
{
    int R, T, Q;
    float RES;
    printf("\nIngrese tres valores (R, T, Q): ");
    scanf ("%d %d %d", &R, &T, &Q);

    RES = pow (R,4) - pow (T,3) + 4 * pow (Q,2);

    if (RES < 820)
        printf ("R = %d \tT = %d \t = %d", R, T, Q);
    else
        printf("\nNo cumple con los parametros \n");
}
