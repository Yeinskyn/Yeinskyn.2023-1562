#include <stdio.h>
#include <string.h>

typedef struct
{
    char noba[10]; //nombre de banco
    char nucu[10]; // numero de cuenta
} banco;

typedef union
{
    banco che; //cheque
    banco nomi;//nomina
    char ven;//ventanilla
} fpago;

typedef struct
{
    char cnu[20]; //calle y numero
    char col[20]; // colonia
    char cp[5]; //codigo postal
    char ciu[15]; // ciudad
} domicilio;

typedef struct
{
    int num;
    char nom[20];
    float ven[12];
    domicilio domi;
    float sal;
    fpago pago;
    int cla;
} vendedor;

void Lectura (vendedor *, int);
void F1 (vendedor *,int);
void F2 (vendedor *,int);
void F3 (vendedor *,int);
void F4 (vendedor *,int);

void main (void)
{
    vendedor VENDEDORES [100];
    int TAM;

    do
    {
        printf ("Ingrese el numero de vendedores: ");
        scanf ("%d", &TAM);
    }
    while (TAM > 100 || TAM < 1);
    Lectura (VENDEDORES, TAM);
    F1 (VENDEDORES, TAM);
    F2 (VENDEDORES, TAM);
    F3 (VENDEDORES, TAM);
    F4 (VENDEDORES, TAM);
    printf ("\n\nFIN DEL PROGRAMA");
}

void Lectura (vendedor A[], int T)
{

    int I, J;
    for (I=0; I<T; I++)
    {
        printf ("\nIngrese datos del vendedor %d", I+1);
        printf ("\nNumero del vendedor: ");
        scanf ("%d", &A[I].num);
        printf ("Nombre del vendedor: ");
        fflush(stdin);
        gets (A[I].nom);
        printf ("Ventas del year: \n");
        for (J = 0; J < 12; J++)
        {
            printf ("\t Mes %d: ", J+1);
            scanf("%f", &A[I].ven[J]);
        }
        printf ("Domicilio del vendedor: \n");
        printf ("\tCalle y numero: ");
        fflush (stdin);
        gets (A[I].domi.cnu);
        printf ("\tColonia: ");
        fflush (stdin);
        gets (A[I].domi.col);
        printf ("\tCodigo postal: ");
        fflush(stdin);
        gets (A[I].domi.cp);
        printf ("\tCiudad: ");
        fflush (stdin);
        gets (A[I].domi.ciu);
        printf ("Salario del vendedor: ");
        scanf ("%f", &A[I].sal);
        printf ("Forma de pago (1- Banco, 2- Nomina, 3-Ventanilla): ");
        scanf ("%d", &A[I].cla);

        switch (A[I].cla)
        {
        case 1:
        {
            printf ("\tNombre del banco: ");
            fflush (stdin);
            gets (A[I].pago.che.noba);
            printf ("\tNumero de cuenta: ");
            fflush (stdin);
            gets(A[I].pago.che.nucu);
        }
        break;
        case 2:
        {
            printf ("\tNombre del banco: ");
            fflush (stdin);
            gets (A[I].pago.nomi.noba);
            printf ("\tNumero de cuenta: ");
            fflush (stdin);
            gets(A[I].pago.nomi.nucu);
        }
        break;
        case 3:

            A[I].pago.venta = 'S';
            break;

        }
    }
}

void F1 (vendedor A[], int T)
{
    int I, J;
    float SUM;
    printf("\n\t\tVentas Totales de los Vendedores");
    for (I = 0; I < T; I++)
    {
        printf("\nVendedor: %d", A[I].num);
        SUM = 0.0;
        for (J = 0; J < 12; J++)
            SUM += A[I].ven[J];
        printf("\nVentas: %.2f\n", SUM);
    }
}

void F2(vendedor A[], int T)
{
    int I, J;
    float SUM;
    printf("\n\t\tIncremento a los Vendedores con Ventas > 1,500,000$");
    for (I = 0; I < T; I++)
    {
        SUM = 0.0;
        for (J = 0; J < 12; J++)
            SUM += A[I].ven[J];
        if (SUM > 1500000.00)
        {
            A[I].sal *= 1.05;
            printf("\nNúmero de empleado: %d\nVentas: %.2f\nNuevo salario: %.2f", A[I].num, SUM, A[I].sal);
        }
    }
}

void F3(vendedor A[], int T)
{
    int I, J;
    float SUM;
    printf("\n\t\tVendedores con Ventas < 300,000");
    for (I = 0; I < T; I++)
    {
        SUM = 0.0;
        for (J = 0; J < 12; J++)
            SUM += A[I].ven[J];
        if (SUM < 300000.00)
            printf("\nNúmero de empleado: %d\nNombre: %s\nVentas: %.2f", A[I].num, A[I].nom, SUM);
    }
}

void F4(vendedor A[], int T)
{
    int I;
    printf("\n\t\tVendedores con Cuenta en el Banco");
    for (I = 0; I < T; I++)
    {
        if (A[I].cla == 1)
            printf("\nNúmero de vendedor: %d\n Banco: %s\nCuenta: %s", A[I].num, A[I].pago.che.noba, A[I].pago.che.nucu);
    }
}


