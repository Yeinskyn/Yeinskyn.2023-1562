#include <stdio.h>
#include <stdlib.h>

int mcd(int, int);
void main(void)
{
    int NU1, NU2, RES;
    printf ("\nIngresa los dos numeros enteros: ");
    scanf ("\n%d %d", &NU1, &NU2);
    RES = mcd (NU1, NU2);
    printf ("\nEl maximo comun divisor de %d y %d es --> %d", NU1, NU2, RES);
}
int mcd (int N1, int N2)
//para calcular el mcd de los numeros ingresados.
{
    int I;
    if (N1 < N2)
        I = N1 / 2;
    else
        I = N2 / 2;
    while ((N1 % I)|| (N2 % I))
//mientras sea igual a una opcion, se mantiene activo.
        I--;
    return I;
}

