#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    int X=3, Y=7, Z[5] = {2, 4, 6, 8, 10};
    printf ("\n X = %d \t Y = %d \t Z[0] = %d \t Z[1] = %d \t Z[2] = %d \t Z[3] = %d \t Z[4] = %d", X, Y, Z[0], Z[1], Z[2], Z[3], Z[4]);

    int *IX; // se apunta a un entero.
    IX = &X; // IX apunta  a X, obteniendo IX la direccion de X.
    Y = *IX; // Y toma el valor de X, o sea que vale 3 (el valor se declara en int)
    *IX = 1; // Z[2] se modifica y toma el valor 1.
    printf ("\n X = %d \t Y = %d \t Z[0] = %d \t Z[1] = %d \t Z[2] = %d \t Z[3] = %d \t Z[4] = %d", X, Y, Z[0], Z[1], Z[2], Z[3], Z[4]);

    IX = &Z[2]; // IX apunta al 3er elemento del arreglo Z.
    Y = *IX; // Y vale Z[2], tomando el valor de 6.
    *IX = 15; // Z[2] ahora vale 15.
    printf ("\n X = %d \t Y = %d \t Z[0] = %d \t Z[1] = %d \t Z[2] = %d \t Z[3] = %d \t Z[4] = %d", X, Y, Z[0], Z[1], Z[2], Z[3], Z[4]);

    X = *IX + 5; // modificacion de X, valor Z[2] + 5, dando un total de 20.
    *IX = *IX - 5; //Z[2] toma el valor de 10.
    printf ("\n X = %d \t Y = %d \t Z[0] = %d \t Z[1] = %d \t Z[2] = %d \t Z[3] = %d \t Z[4] = %d", X, Y, Z[0], Z[1], Z[2], Z[3], Z[4]);

   ++*IX; // Z[2] incrementa en 1, tomando el valor de 11
   *IX += 1; //  Z[2] se le suma otro 1, tomando el valor de 12.
    printf ("\n X = %d \t Y = %d \t Z[0] = %d \t Z[1] = %d \t Z[2] = %d \t Z[3] = %d \t Z[4] = %d", X, Y, Z[0], Z[1], Z[2], Z[3], Z[4]);

    X = *(IX + 1); //el apuntador IX toma a Z[3] temporalmente, tomando el valor de 8.
    Y = *IX; // Y toma el valor de Z[2] que es 12.
    printf ("\n X = %d \t Y = %d \t Z[0] = %d \t Z[1] = %d \t Z[2] = %d \t Z[3] = %d \t Z[4] = %d", X, Y, Z[0], Z[1], Z[2], Z[3], Z[4]);

    IX = IX + 1; // el apuntador apunta al cuarto elemento z[3].
    Y = *IX; // ahora vale z[3] con el valor de 8.
    printf ("\n X = %d \t Y = %d \t Z[0] = %d \t Z[1] = %d \t Z[2] = %d \t Z[3] = %d \t Z[4] = %d", X, Y, Z[0], Z[1], Z[2], Z[3], Z[4]);
    return 0;
}
