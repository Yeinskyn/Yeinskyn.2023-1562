#include <stdio.h>
#include <stdlib.h>
//calcular promedio mensula de lluvias de tres regiones.
//Determinar la region con mayor promedio de lluvia anual.

void Mayor (float, float, float);

void main(void)
{
    int I;
    float GOL, PAC, CAR, AGOL = 0, APAC = 0, ACAR = 0;
    for (I = 1; I <= 12; I++)
    {
        printf ("\nIngresa las lluvias del mes %d\n", I);
        printf ("\nRegiones Golfo, Pacifico y Caribe: ");
        scanf ("%f %f %f", &GOL, &PAC, &CAR);
        AGOL += GOL;
        APAC += PAC;
        ACAR += CAR;
    }
    printf ("\nPromedio de lluvias Region Golfo: %6.2f", (AGOL / 12));
    printf ("\nPromedio de lluvias Region Pacifico: %6.2f", (APAC / 12));
    printf ("\nPromedio de lluvias Region Caribe: %6.2f \n", (ACAR / 12));
    Mayor (AGOL, APAC, ACAR);
}
void Mayor (float R1, float R2, float R3)
{
    if (R1 > R2)
        if (R1 > R3)
            printf ("\nLa region con mayor promedio es *Region Golfo*. Su promedio es: %6.2f", (R1 / 12));
        else
            printf ("\nLa region con mayor promedio es la *Region Caribe*. Su promedio es %6.2f", (R3 / 12));
    else if (R2 > R3)
        printf ("\nRegion con mayor promedio es la *Region del Pacifico*. Su promedio es %6.2f", (R2 / 12));
    else
        printf ("La region con mayor promedio es la *Region del Caribe*. Su promedio es %6.2f", (R3 / 12));
}
