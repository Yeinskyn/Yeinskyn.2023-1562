#include <stdio.h>
#include <stdlib.h>
void main(void)
{
    char *cad0 = "Buenos dias";
    char cad1 [20] = "Hola"; // tiene un espacio de 20 caracteres.
    char cad2 [] = "Mexico"; // como no tiene espacio reservado, acepta cualquier numero de caracteres.
    char cad3 [] = {'B', 'i', 'e', 'n', 'v', 'e', 'n', 'i', 'd', 'o', '\0'};
    char cad4 [20], cad5[20], cad6[20];

    printf ("\nLa cadena cad0 es: ");
    puts (cad0); //apropiada para escribir cadena de caracteres.

    printf ("\nLa cadena cad1 es: ");
    printf ("%s", cad1); //%s para escribir cadena de caracteres.

    printf ("\nLa cadena cad2 es: ", cad2);
    puts (cad2);

    printf ("\nLa cadena cad3 es: ", cad3);
    puts (cad3);

    printf ("\n\nIngrese una linea de texto *se lee con gets*: \n");
    gets (cad4); //para leer cadena de caracteres.
    printf ("\nLa cadena cad4 es: ");
    puts (cad4);
    fflush(stdin);

    printf ("\nIngrese una linea de texto *se lee con scanf*: \n");
    scanf ("%s", cad5); //usar scanf con %s es solo util para cadena de palabras que forma una sola palabra.
    printf("\nLa cadena cad5 es: ");
    printf("%s", cad5);
    fflush(stdin);

    char p;
    int i = 0;
    printf("\n\nIngrese una linea de texto *se lee cada caracter con getchar*: \n");
    //se usa getchar para leer y asignarlo a la variable cad6.

    while ((p = getchar()) != '\n')
        cad6 [i++] = p;
    cad6[i] = '\0'; //para indicar el fin.

    printf ("\nLa cadena cad6 es: ");
    puts (cad6);
}
