#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//El programa, al recibir dos cadenas de caracteres, calcula e imprime cu�ntas veces se encuentra la segunda cadena en la primera
void main(void)
{
    char cad1[50], cad2[50], *cad0 = "";
    int i = 0;

    printf("\n Ingrese la primera cadena de caracteres: ");
    gets(cad1);

    printf("\n Ingrese la cadena a buscar: ");
    gets(cad2);

    strcpy (cad0, cad2);
    cad0 = strstr (cad0, cad2);

    while (cad0 != NULL)
    {
        i++;
        cad0 = strstr (cad0 + 1, cad2);
    }
    printf("\nEl n�mero de veces que aparece la segunda cadena es: %d", i);
}
