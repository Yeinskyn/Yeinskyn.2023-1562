#include <stdio.h>
#include <math.h>

void main(void)
{
    int niv;
    float sal;
    printf("\n Ingrese el nivel del maestro: ");
    scanf ("%d", &niv);
    printf("\n Ingrese el salario del maestro: ");
    scanf ("%f", &sal);

    switch (niv)
    {
    case 1:
        sal = sal * 1.0035;
        break;

    case 2:
        sal = sal * 1.0041;
        break;

    case 3:
        sal = sal * 1.0048;
        break;

    case 4:
        sal = sal * 1.0053;
        break;
    }
    printf ("\nSu nivel: %d \nSu nuevo salario: %8.2f", niv, sal);
}
