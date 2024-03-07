#include <stdio.h>
#include <stdlib.h>
void main(void)
{
    int matriz[5][5];
    int f, c, sdp= 0, sds = 0;

    // se necesita un bucle para introducir los elementos que el usuario quiere en la matriz
    printf("Introduce los elementos de la matriz 5x5:\n");
    for (f = 0; f < 5; f++) // luego del PRINTF, el bucle for ayuda para poner un limite de introduccion de datos, en este caso, hasta 5 elementos. Se ejecutará hasta que se complete el bucle la columna.
    {
        for (c = 0; c < 5; c++) // este es para las columnas (las verticales)
        {
            printf("Elemento [%d][%d]: ", f, c); //luego utilizo el PRINTF para introducir los datos de cada casilla.
            scanf("%d", &matriz[f][c]);// asignar la direccion de los datos que introduje
        }
    }
    // Luego de tener los datos, hago un bucle para sumar los elementos de la diagonal principal y la diagonal secundaria.
    for (f = 0; f < 5; f++) //inicio nuevamente un for para mantener un margen hasta el que quiero llegar.
    {
        sdp += matriz[f][f]; //sumar los elementos de la diagonal principal.
        sds += matriz[f][4 - f];//en este se suma la secundaria. f es la fila y el [4 - f] es la columna. Se usa la resta con el 4 para invertir y que no sume la principal de nuevo.
    }
    // luego de administrar como se ejecutará el código, este apartado me mostrará, de forma esquemática, como se verá la tabla de matrices.
    printf("\nMatriz 5x5:\n");
    for (f = 0; f < 5; f++)
    {
        for (c = 0; c < 5; c++)
        {
            printf("%d\t", matriz[f][c]); //imprimo los datos que introduje en el inicio en la posicion que le corresponde. Para saber que posicion le corresponde, uso matriz [f][c] para posicionarlos.
        }
        printf("\n\n");
    }
    // Por último, quiero saber la suma de cada diagonal, por lo que ejecuto un PRINTF para cada una.
    printf("\nLa suma de la diagonal principal es: %d\n", sdp);
    printf("La suma de la diagonal secundaria es: %d\n", sds);
}


