#include <stdio.h>
#include <stdlib.h>

//si el precio es MENOR/INFERIOR que $1500 incremente su valor un 11%.

void main(void)
{
    float precio, newprecio;
    printf ("Ingrese el precio del producto: ");
    scanf("%f", &precio);

    if (precio < 1500)
    {
        newprecio = precio * 1.11;
        printf ("El nuevo precio es : $%7.2f", newprecio);
    }
}
