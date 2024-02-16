#include <stdio.h>
#include <stdlib.h>
//cuantas veces se encuentra un numero en el arreglo
void main(void)
{
    //se declara las variables y los arreglos
    int I, NUM, CUE = 0;
    int ARRE [100];
    for (I = 0; I < 100; I++)
    {
        //los datos que se ingresan se leen y sirven para asignar valor del arreglo.
        printf ("Ingrese el elemento %d del arreglo: ", I+1);
        scanf ("%d", &ARRE[I]);
    }
    //Se compara el dato que se ingresa con los datos del arreglo.
    printf("\nIngresar el numero que busca en el arreglo: ");
    scanf("%d", NUM);

    for (I = 0; I < 100; I++)
        if (ARRE[I] == NUM)
        CUE++;
    printf("\nEl %d se encuentra % veces en este arreglo.", NUM, CUE);
}
