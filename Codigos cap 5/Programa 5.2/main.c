#include <stdio.h>
#include <stdlib.h>

//paso 1 - almacena datos de 5 candidatos
//paso 2 - imprime total de votos de cada uno

void main(void)
{
    int ELE [5] = {0}; // Se declara un arreglo entero llamado ELE, tiene 5 elementos iniciando desde 0.
    int I, VOT; // se declara variables de tipo entero.

    printf("\nIngresa el primer voto * 0 - para terminar*: "); // ingresar datos
    scanf ("%d", &VOT); // sirve para leer datos que se entra.

    while (VOT)
    {
        if ((VOT > 0) && (VOT < 6)) // Si se cumple esos dos operandos continua ejecutando el codigo.
            ELE [VOT-1]++; // se le descuenta porque la primera posicion del arreglo es 0.
        else
            printf("\nEl voto ingresado es incorrecto. \n");
        printf ("\nIngresa el siguiente voto *0 - para terminar*: ");
        scanf ("%d", &VOT); // En caso que no cumpla las condiciones, se imprime el bloque else
    }
    printf ("\nResultados de la Eleccion\n"); // si se cumple el bloque WHILE, se imprime esto.

    for (I = 0; I <= 4; I++) // Es un bucle que se repite hasta recorrer todos los datos o instrucciones que esten en el bucle.
        printf("\nEl candidato %d: %i", I+1, ELE [1]); // lectura de los datos finales.
}
