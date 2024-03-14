#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    int i;
    double d;
    long l;
    char cad0[20], *cad1;

    printf ("\nIngrese una cadena de caracteres: ");
    gets (cad0);
    i = atoi (cad0); //ATOI contiene una cadena que contiene numeros a un valor tipo entero. Si la cadena comienza en otro caracter o no tiene numeros, regresa 0 al valor indefinido.
    printf ("\n%s \t% d", cad0, i+3);

    printf ("\nIngrese una cadena de caracteres: ");
    gets(cad0);
    d = atof (cad0);// convierte una cadena que tiene numeros reales a un valor double.
    printf ("\n%s \t %.2lf", cad0,  d+1.50);

    d = strtod (cad0, &cad1); //convierte cadena de numero reales a tipo double. El resto de la cadena se almacena en la &cad1.
    printf ("\n%s \t.2lf", cad0, d+1.50);
    puts (cad1);

    l = atol (cad0); // convierte una cadena de caracteres con numeros a valor tipo long y si no tiene numeros o comienza con otro caracter, regresa el valor a 0.
    printf ("\n%s \t%ld", cad0, l+10);

    l = strtol (cad0, &cad1,0); //convierte una cadena de caracteres con numeros a tipo long. El resto se almacena en &cad1.
    printf ("\n%s \t %ld", cad0, l+10);
    puts (cad1);

}