#include <stdio.h>
#include <stdlib.h>
//estadisticas de ventas mensuales de tres departamentos
const int MES = 12;
const int DEP = 3;
const int YEAR = 8;

void Lectura (float [MES][DEP][YEAR], int, int, int);
void Funcion1(float [MES][DEP][YEAR], int, int, int);
void Funcion2(float [MES][DEP][YEAR], int, int, int);
void Funcion3(float [MES][DEP][YEAR], int, int, int);

void main (void)
{
    float PRO [MES][DEP][YEAR];
    Lectura (PRO, MES, DEP, YEAR);
    Funcion1 (PRO, MES, DEP, YEAR);
    Funcion2 (PRO, MES, DEP, YEAR);
    Funcion3 (PRO, MES, DEP, YEAR);
}
void Lectura (float A[][DEP][YEAR], int F, int C, int P)
{
    int K, I, J;
    for (K = 0; K < P; K++)
        for (I = 0; I < F; I++)
            for (J = 0; J < C; J++)
            {
                printf ("YEAR: %d  \tMES: %d  \tDepartamento: %d", K+1, I+1, J+1);
                scanf ("%f", &A[I][J][K]);
            }
}
void Funcion1 (float A[][DEP][YEAR], int F, int C, int P)
{
    int I, J;
    float SUM = 0.0;
    for (I = 0; I < F; I++)
        for (J = 0; J < C; J++)
            SUM += A[I][J][P - 1];
    printf ("\nVentas totales de la empresa en el segundo year: %.2f", SUM);
}
void Funcion2 (float A[][DEP][YEAR], int F, int C, int P)
{
    int I, J;
    float SUM1 = 0, SUM2 = 0, SUM3 = 0;
    for (I = 0; I < F; I++)
        for (J = 0; J < C; J++)
            switch (J+1)
            {
            case 1:
                SUM1 += A[I][J][P - 1];
                break;
            case 2:
                SUM2 += A[I][J][P - 1];
                break;
            case 3:
                SUM3 += A[I][J][P - 1];
                break;

            }
    if (SUM1 > SUM2)
        if (SUM1 > SUM3)
        {
            printf("\n\nDepartamento con mayores ventas en el ultimo year: Hilos");
            printf ("Ventas: %.2f", SUM1);
        }
        else
        {
            printf ("\n\nDepartamento con mayores ventas en el ultimo year: Licra");
            printf ("Ventas: %.2f", SUM3);
        }
    else if (SUM2 >SUM3)
    {
        printf ("\n\nDepartamento con mayores ventas en el ultimo year: Lanas");
        printf ("Ventas: %.2f", SUM2);
    }
    else
    {
        printf ("\n\nDepartamento con mayores ventas en el ultimo year: Licra");
        printf ("Ventas: %.2f", SUM3);
    }
}
void Funcion3 (float A[][DEP][YEAR], int F, int C, int P)
{
    int K, I, J, DE, ME, AN;
    float VEN = -1.0;
    for (K=0; K<P; K++)
        for (I = 0; I < F; I++)
            for (J = 0; J < C; J++)
                if (A[I][J][K] > VEN)
                {
                    VEN = A[I][J][K];
                    DE = J;
                    ME = I;
                    AN = K;
                }
    printf ("\n\nDepartamento: %d  \tMes: %d  \t Year: %d", DE+1, ME+1, AN+1);
    printf ("Ventas: %.2f", VEN);
}


