#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    char *cad0;
    cad0 = "Argentina";
    puts (cad0);

    cad0 = "Brasil"; // se modifica el contenido de la variable cad0.
    puts (cad0);

    /* INICIALIZAR DE LA SIGUIENTE FORMA DA ERROR EN EL PROGRAMA.

    char *cad1;
    gets (*cad1);   gets(cad1);

    explicacion: para apuntar a una cadena de caracteres con GETS es necesario poner = ""
    */

    char *cad1 = "";
    gets (cad1);

    // da error ----> char cad1[]; porque no reserva el espacio con = ""

    char cad2[20] = "Mexico";
    puts (cad2);
    gets (cad2);


    char cad3[11] = "Guatemala";
    puts (cad3);
    gets (cad3);




}
