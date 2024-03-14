#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//intercambiar filas del arreglo. La ultima con la primera, la penultima con la segunda, etc...

void intercambia (char FRA[] [30], int);

void main(void)
{
    int i, n;
    char FRA[20][30];
    printf("\nIngrese el numero de filas del arreglo: ");
    scanf("%d", &n);
    for (i=0; i<n; i++)
    {
        printf("Ingrese la linea de texto numero %d: ", i+1);
        fflush(stdin);
        gets (FRA[i]);
    }
    printf("\n\n");
    intercambia (FRA, n);
    for (i=0; i<n; i++)
    {
        printf("Impresion de la linea de texto %d: ", i+1);
        puts (FRA[i]);
    }
}

void intercambia (char FRA[][30], int n) // bloque que intercambia las filas del arreglo
{
    int i, j;
    j = n - 1;
    char cad[30];
    for (i=0; i< (n/2); i++)
    {
        strcpy(cad, FRA[i]);
        strcpy (FRA[i], FRA[j]);
        strcpy (FRA[j], cad);
        j--;
    }
}
