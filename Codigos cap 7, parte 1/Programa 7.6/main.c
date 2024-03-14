#include <stdio.h>
#include <string.h>

void main(void)
{
    char *cad0 = "Hola Rep. Dom.";
    char cad1[20], cad2[20], cad3 [20] = "buenos dias!";

    strcpy(cad1, cad0); // esta función permite copiar una cadena de caracteres. Ahora copia la cadena cad0 a cad1.

    printf("\nPrueba de la función strcpy. Se esta copiando la cadena cad0 a cad1: %s\n", cad1);

    strcpy(cad1, cad3);
    printf("\nPrueba de la función strcpy. Se esta copiando la cadena cad3 a cad1: %s\n", cad1);

    strcpy(cad1, "XX");
    printf("\nPrueba de la función strcpy. Se copia la cadena XX a cad1: %s\n", cad1);

    strncpy(cad2, cad0, 4);
    cad2[4] = '\0'; //ahora se copia 4 caracteres de la cadena cad0 a la cadena cad2
    printf("\nPrueba de la función strncpy. Se copian los primeros 4 caracteres de la cadena cad0 a cad2: %s\n", cad2);

    strncpy(cad2, cad3, 3);
    cad2[3] = '\0';
    printf("\nPrueba de la función strncpy. Se copian 3 caracteres de cad3 a cad2: %s\n", cad2);

    strcat(cad0, cad3);
    printf("\nPrueba de la función strcat. Se incorpora la cadena cad3 a cad0: %s\n", cad0);

    strcat(cad1, "YY"); //esta funcion incorpora una cadena de caracteres a otra cadena. ahora agrega la YY a la cad1.
    printf("\nPrueba de la función strcat. Se incorpora la cadena YY a cad1: %s\n", cad1);

    strcat(cad2, " ");
    strncat(cad2, cad0, 4);
    printf("\nPrueba de la función strncat. Se incorporan 4 caracteres de cad0 a cad2: %s\n", cad2);

    cad0 = strstr(cad0, "Rep. Dom.");
    printf("\nPrueba de la función strstr. Se trata de localizar la cadena Rep. Dom. dentro de cad0: %s\n", cad0);

    cad0 = strstr(cad0, "Guatemala");
    printf("\nPrueba de la función strstr. Se trata de localizar la cadena Guatemala dentro de cad0: %s\n", cad0);
}

