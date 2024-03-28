#include <stdio.h>
#include <stdlib.h>

// El programa pregunta al usuario el n�mero de registro que desea modificar, obtiene el nuevo promedio del alumno y modifica el registro como el archivo correspondiente
typedef struct
{
    int matricula;
    char nombre [20];
    int carrera;
    float promedio;
} alumno;

void modifica (FILE *);

void main(void)
{
    FILE *ar;
    if ((ar = fopen ("ad1.dat", "r+")) != NULL)
        modifica(ar);
    else
        printf("\nEl archivo no se puede abrir...\n\n");
    fclose(ar);
}

void modifica (FILE *ap) //modificar promedio
{
    int d;
    alumno alu;

    printf("\nIngrese el numero de registro que desea modificar: ");
    scanf("%d", &d);

    fseek(ap, (d-1)* sizeof (alumno), 0);
    // la instrucci�n fseek tiene tres argumentos.
    //El primero indica que el apuntador se debe posicionar al inicio del FILE
    //El segundo se�ala el n�mero de bloques que debe moverse
    //El tercer argumento se utiliza para expresar que se debe mover a partir de la posici�n en la que actualmente se encuentra

    fread (&alu, sizeof (alumno), 1, ap);

    printf("\nIngrese el promedio correcto del alumno: ");
    scanf("%f", &alu.promedio);

    fseek(ap, (d-1)* sizeof (alumno), 0); //reposicionar donde se va a guardar el dato ingresdado.

    fwrite(&alu, sizeof (alumno), 1, ap);
}
