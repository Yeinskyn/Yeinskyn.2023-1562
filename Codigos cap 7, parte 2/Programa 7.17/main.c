#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//obtener cadena invertida
char* inverso(char *);

void main(void)
{
    char fra[50], aux[50];

    printf("\nIngrese la l�nea de texto: ");
    gets(fra);

    strcpy(aux, inverso(fra)); // Se copia a aux el resultado de la funci�n inverso

    printf("\nEscribe la l�nea de texto en forma inversa: ");
    puts(aux);
}

char* inverso(char *cadena) // calcula el inverso y regresa el resultado
{
    int i = 0, j, lon;
    char cad;

    lon = strlen(cadena);
    j = lon - 1;

    while (i < ((lon - 1) / 2))
    {
        cad = cadena[i];
        cadena[i] = cadena[j];
        cadena[j] = cad;
        i++;
        j--;
    }
    return (cadena);
}
