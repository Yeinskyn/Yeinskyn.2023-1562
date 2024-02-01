#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    float precio, newprecio;
    printf("Ingrese el precio del producto: ");
    scanf("%f", &precio);

    if (precio < 1500)
        newprecio = precio * 1.11;

    else
        newprecio = precio *1.08;
    printf ("\n El nuevo precio de su producto es: %8.2f", newprecio);

}
