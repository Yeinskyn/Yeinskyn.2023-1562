#include <stdio.h>
#include <string.h>

void main(void)
{

    int i;
    char cad0[20] = "Hola México";
    char cad1[20] = "Hola RD";
    char cad2[20] = "Hola Venezuela";
    char cad3[20] = "Hola México";
    char *c, c3;

    i = strcmp(cad0, cad1);
    // strcmp permite comparar dos cadenas de caracteres. Si la primera cadena es mayor a la segunda, regresa un valor positivo, si es menor, un valor negativo y de otra forma, 0/

    printf("\nResultado de la comparación -cad0 y cad1-: %d", i);

    i = strcmp(cad0, cad2);
    printf("\nResultado de la comparación -cad0 y cad2-: %d", i);

    i = strcmp(cad0, cad3);
    printf("\nResultado de la comparación -cad0 y cad3-: %d", i);

    i = strlen(cad0);
    // strlen obtiene la longitud el número de caracteres de una cadena.

    printf("\nLongitud cadena cad0: %d", i);

    i = strlen(cad1);
    printf("\nLongitud cadena cad1: %d", i);

    c = strchr(cad1, 'G'); //apuntador de tipo caracter
    /* strchr busca la posición en la que se encuentra un caracter y si lo encuentra, regresa un apuntador a la primera ocurrencia del caracter en la cadena. sino es NULL */

    if (c != NULL)
    {
        c3 = *c;
        printf("\nEl valor de c3 es: %c", c3);
    }

    c = strchr(cad2, 'V');
    if (c != NULL)
    {
        c3 = *c;
        printf("\nEl valor de c3 es: %c", c3);
    }
}
