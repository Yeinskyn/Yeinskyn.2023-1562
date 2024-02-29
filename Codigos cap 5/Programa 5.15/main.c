#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    int X = 5, Y = 8, V[5] = {1, 3, 5, 7, 9};
    int *AY, *AX; // AY y AX representan apuntador a un entero
    AY = &Y; //AY tiene la direccion de Y
    X = *AY; // X toma el valor de Y
    *AY = V[3] + V[2];

    printf ("X = %d \nY=%d \nV[0]=%d \nV[1]=%d \nV[2]=%d \nV[3]=%d \nV[4]=%d", X, Y, V[0], V[1], V[2], V[3], V[4]);

    AX = &V[V[0] * V[1]];
    X = *AX;
    Y = *AX * V[1];
    *AX = *AY - 3;

    printf ("\n\nX = %d \nY=%d \nV[0]=%d \nV[1]=%d \nV[2]=%d \nV[3]=%d \nV[4]=%d", X, Y, V[0], V[1], V[2], V[3], V[4]);
}
