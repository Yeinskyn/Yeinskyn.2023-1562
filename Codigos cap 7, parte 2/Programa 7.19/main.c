#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// calcular cantidad de palabras en una cadena.

int cuentap (char *);

void main(void)
{
    int i;
    char fra[50];
    printf("\nIngrese la linea de texto: ");
    gets (fra);
    strcat (fra," ");

    i = cuentap (fra);
    printf("\nLa linea de texto tiene %d palabras", i);
}

int cuentap (char *cad)

{
    //localizar espacio en blanco (cada palabra se separa por un espacio).
    char *cad0 = "";
    int i = 0;
    cad0 = strstr(cad," ");

    while (strcmp(cad," "))
    {
        // se busca espacio en blanco a partir de siguiente posicion
        strcpy(cad, cad0);
        i++;
        cad0 = strstr (cad+ 1," ");
    }
    return (i);
}
