#include <stdio.h>
#include <stdlib.h>
// manejar caracteres
void main(void)
{
    char p1, p2, p3 = '$';

    printf ("Ingrese un caracter: ");
    p1 = getchar (); // leer caracter
    putchar (p1); //escribir un caracter

    printf ("\n");
    fflush (stdin); //luego de leer caracter, sirve para limpiar el bufer.
    printf ("\nEl caracter p3 es: ");
    putchar(p3); //escribir caracter almacenado en p3.

    printf ("\n");
    printf ("\nIngrese otro caracter: ");
    fflush (stdin);
    scanf  ("%c", &p2); //
    printf ("%c", p2);
}
