#include <stdio.h>
#include <stdlib.h>

//poner los datos descendentes.
// variables de tipo real.

void main(void)
{
    float A, B, C;
    printf ("\nIngresar las ventas de los tres vendedores: ");
    scanf ("%f %f %f", &A, &B, &C);

    if (A > B)
        if (A > C)
            if (B > C)
                printf ("\n\n El orden es A, B y C: %8.2f %8.2f %8.2f", A, B, C);
            else
                printf ("\n\n El orden es A, C, B: %8.2f %8.2f %8.2f", A, C, B);
        else
            printf("\n\n El orden es C, A, B: %8.2f %8.2f %8.2f", C, A, B);
    else if (B > C)
        if (A > C)
            printf ("\n\n El orden es B, A, C: %8.2f %8.2f %8.2f", B, A, C);
        else
            printf ("\n\n El orden es B, C, A: %8.2f %8.2f %8.2f", B, C, A);
    else
        printf ("\n\n El orden es C, B, A");

}
