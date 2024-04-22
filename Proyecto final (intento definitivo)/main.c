#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct gasto //defino una estructura llamada gasto para guardar todos los parametros que voy a necesitar en el programa
{
    float costVehiculo; // COSTO INICIAL
    int devaluacion;    // en 5 años costara 700,000
    float precioDevaluacion; //700,000 cuando pasen 5 años el vehiculo costará.
    float KManual; // la distancia anualmente
    int efMX; //eficiencia maxima equivale a 16L/100km
    int efMIN; //eficiencia minima equivale 8L/100 km
    float costoGasolin; // precio de la gasolina
    float seguro;       // mensualmente
    float gomas;        // precio del paquete de gomas
    float cambioGomas; //cada cuando KM se cambian las gomas
    float mantenimiento; // precio mensualmente

    float distancia; //para calcular viajes
};
//Declaracion de funciones
void escribe ( FILE *ye, struct gasto *g1);
void lee (FILE *ye, struct gasto *g1);
void modifica(struct gasto *g1);

int main(void)
{
    int opcion; //para guardar la opcion que el usuario elija del menu
    float consumo; //para calcular los galones
    struct gasto g1 = {2000000,5,700000,19000,16,8,297,2000,26000,1,6200,200}; //inicio una estructura de gasto llamada g1
    float gastofijo = ((g1.mantenimiento*60)+(g1.seguro*60)+(g1.gomas * g1.cambioGomas * 5)+ (g1.costVehiculo - g1.precioDevaluacion)); // Calculo el costo total del vehiculo
    float gastofijo2 = ((g1.costoGasolin) * (consumo/3.785)); // Calculo el costo  de la gasolina
    float galones = consumo/3.785; //convertir de galon a litro
    float CxKM = gastofijo / (g1.KManual*5); // calculo el costo por kilometro

    FILE *ye;
    if ((ye =fopen ("ye", "r")) != NULL) //si existe un archivo llamado "ye", se ejecuta el calculo de abajo y se imprime en la consola solamente
    {

//Impresión de valores fijos
    printf ("\nCosto vehiculo: %.2f \nPeriodo de devaluacion: %d \nDevaluacion: %.2f \nDistancia anual (en KM): %.2f \nEficiencia maxima: %d \nEficiencia minima: %d \nPrecio de gasolina: %.2f \nSeguro(mensual): %.2f \nPrecio de paquete de gomas: %.2f \nCambio de gomas: %.0f \nMantenimiento mensual: %.2f",g1.costVehiculo,g1.devaluacion, g1.precioDevaluacion,g1.KManual,g1.efMX,g1.efMIN, g1.costoGasolin, g1.seguro,g1.gomas,g1.cambioGomas, g1.mantenimiento);

//cálculo de las 3 preguntas base que hay que responder
        CxKM = gastofijo / (g1.KManual*5);
        // Calcular el costo del galon por kilometro
        float GxKM = gastofijo2/ 100;
        // Calcular costo de viaje totales
        float ViajeT = (GxKM * g1.distancia);

//Imprimir el resultado del costo de vehículo
        printf("\n\nRESULTADOS EN TEXTO\n");
        printf("\nEl costo de su vehiculo por kilometro es de %.4f pesos.\n", CxKM);
        fflush(stdin);

        printf ("\n\nConsumo          | Costo x KM         | KM x galon      | Viaje total");
        printf ("\n------------------------------------------------------------------------");
        for (float consumo = g1.efMIN; consumo <= g1.efMX; consumo += 1)
        {
            float CxKM = gastofijo / (g1.KManual*5);
            float GxKM = (g1.costoGasolin) * (consumo/3.785)/ 100;
            float ViajeT = (GxKM * g1.distancia);
            printf ("\n   %.0fL/KM         |   %.2f/KM          |    $%.2f        |   $%.2f   \n", consumo, CxKM, GxKM, ViajeT);

        }
        printf("\n\n------------------------------------------------------------------------\n\n");
        fclose (ye);

    }
    else //si no se ejecuta el c+alculo fue porque no se encntró el archivo
    {
        printf ("\nNo pudo encontrarse el archivo\n");
    }


    do //hago un bucle do-while por si se elije una opción diferente a las establecidas, no se ejecute.
    {
        printf ("\n\nQue desea realizar? \n0-Salir \n1-Cambiar parametros \n2-Imprimir parametros \n3-calculo de viaje e imprimir tabla \nSeleccione: ");
        scanf ("%d", &opcion);

        //uso switch para indicar qué hacer en caso de que se elija una de las opciones válidas.
        switch (opcion)
        {
        case 1:
            modifica(&g1);
            escribe(ye, &g1);
            printf("\nParametros cambiados.\n");
            break;
        case 2:
            printf("\n---Parametros del vehiculo----\n");
            printf("Costo del vehiculo: %.1f\n", g1.costVehiculo);
            printf("Periodo de uso de vehiculo: %d years\n", g1.devaluacion);
            printf("Devaluacion despues de %d years: %.1f\n", g1.devaluacion, g1.precioDevaluacion);
            printf("Kilometraje y promedio anual: %.2f\n", g1.KManual);
            printf("Minimo de consumo (L/100km): %d\n", g1.efMIN);
            printf("Maximo de consumo (L/100km): %d\n", g1.efMX);
            printf("Mantenimiento mensual: %.2f\n", g1.mantenimiento);
            printf("Seguro mensual: %.2f\n", g1.seguro);
            printf("Costo anual de gomas: %.2f\n", g1.gomas);
            printf("Cada --%.0f-- se cambian las gomas\n", g1.cambioGomas);
            printf("Precio de la gasolina: %.2f\n",g1.costoGasolin);
            printf ("\n\nCosto del vehiculo x KM: %.2f", CxKM);

//agregé una ocion para guardar los parámetros impresos en caso de que el usuario quiera tenerlo en un dispositivo.
            printf ("\n\nDesea guardar los parametros en un archivo? 1-Si \t0-No: ");
            int guardar1; //declaro la variable donde voy a guardar o escanear el numero que seleccioné.
            scanf ("%d", &guardar1);
              if (guardar1 == 1)
                {
                    FILE *ye = fopen("ye", "w");
                    if (ye != NULL)
                    {
                    fprintf (ye,"\nCosto vehiculo: %.2f \nPeriodo de devaluacion: %d \nDevaluacion: %.2f \nDistancia anual (en KM): %.2f \nEficiencia maxima: %d \nEficiencia minima: %d \nPrecio de gasolina: %.2f \nSeguro(mensual): %.2f \nPrecio de paquete de gomas: %.2f \nCambio de gomas: %.0f \nMantenimiento mensual: %.2f",g1.costVehiculo,g1.devaluacion, g1.precioDevaluacion,g1.KManual,g1.efMX,g1.efMIN, g1.costoGasolin, g1.seguro,g1.gomas,g1.cambioGomas, g1.mantenimiento);
                    fprintf (ye, "\n\nCosto del vehiculo x KM: %.2f\n\n\n", CxKM);
                    printf ("\nParametros guardados.\n");
                     }  else
                     printf ("\nParametros no guardados.\n");
            }
            break;
            fflush (stdin);
        case 3:
            //este caso pertenece al calculo del viaje
            g1.distancia, g1.costoGasolin; // llamo de la estructura a distancia y el costo de gasolina porque las voy a necesitar.
//pregunto la distancia y el precio de la gasona, luego ejecuto la tabla en base a esa información.
            printf ("Agrega la distancia de su viaje: ");
            scanf ("%f", &g1.distancia);
            printf ("Agrega el precio de la gasolina: ");
            scanf ("%f", &g1.costoGasolin);
            {
                printf ("\n\nConsumo          | Costo x KM         | KM x galon      | Viaje total");
                printf ("\n------------------------------------------------------------------------");
                //uso for para repetir las filas comenzando desde 8L/KM hasta 16L/KM. Mientras el consumo esté en ese rango, se le va a sumar 1 y se va aplicar el cálculo de costo x KM, KM por galon y viaje total a cada fila.
                for (float consumo = g1.efMIN; consumo <= g1.efMX; consumo += 1)
                {
                    float CxKM = gastofijo / (g1.KManual*5); //aqui se calcula el costo que tiene un vehiculo por KM
                    float GxKM = ((g1.costoGasolin) * (consumo/3.785)/ 100); //aqui se calcula los galones. Introduje directamente la conversion de litros a galones.
                    float ViajeT = (GxKM * g1.distancia); //calculo total del viaje.
                    printf ("\n   %.0fL/KM         |   %.2f/KM          |    $%.2f        |   $%.2f   \n", consumo, CxKM, GxKM, ViajeT);
                    printf ("\n------------------------------------------------------------------------");
                }
                //opcion para imprimir la tabla en el archivo llamado Tabla
                printf("\n¿Desea guardar la tabla en un archivo? (1-Si \t0 - No): ");
                int guardar;
                scanf("%d", &guardar);
                if (guardar == 1)
                {
                    FILE *ye = fopen("Tabla", "w"); //cuando encuentre el archivo Tabla, va imprimir la tabla
                    if (ye != NULL)
                    {
                        fprintf(ye, "\n\n|----------------------------------------------|\n");
                        fprintf(ye, "| Consumo (L/100km) | Costo vehículo/km | Costo km/galón | Costo total viaje |\n");
                        fprintf(ye, "|----------------------------------------------|\n");
                        for (float consumo = g1.efMIN; consumo <= g1.efMX; consumo += 1.0)
                        {
                            // Cálculo del costo del vehículo por kilómetro
                            float CxKM = gastofijo / (g1.KManual*5);
                            float GxKM = (g1.costoGasolin) * (consumo/3.785)/ 100;
                            float ViajeT = (GxKM * g1.distancia);

                            fprintf (ye, "\n   %.0fL/KM         |   %.2f/KM          |    $%.2f        |   $%.2f   \n", consumo, CxKM, GxKM, ViajeT);
                        }
                        fprintf(ye, "|----------------------------------------------|\n");
                        fclose(ye);
                        printf("\nProceso de guardado completo.\n");
                    }
                    else //si no se ejecuta el if, aparecera este mensaje
                    {
                        printf("\nNo se ha guardado.\n");
                    }
                }
                else //si el usuario pone 0 cuando le pregunto si desea guardar la tabla, le aparece este mensaje.
                {
                    printf ("\nSe eligio no guardar la tabla.\n");
                }
            }
            break;

        default:
            printf ("La opcion que ha introducido no es valida.");
            break;
        }

    }
    while (opcion != 0); //cuando pongan 0, se rompe el bucle.

}


void modifica(struct gasto *g1)
{
//lo que necesito si quiero modificar la estructura.
//pregunto los nuevos valores y lo guardo en la estructura
    printf("Agregue el costo del vehiculo: ");
    scanf("%f", &g1->costVehiculo);
    printf("Agrege el tiempo que va a durar con el vehiculo: ");
    scanf("%f", &g1->devaluacion);
   printf("Agrege la devaluacion del vehiculo: ", &g1->devaluacion);
    scanf("%f", &g1->precioDevaluacion);
    fflush(stdin);
    printf("Agrege el kilometraje promedio anual: ");
    scanf("%f", &g1->KManual);
    printf("Agrege el consumo minimo (L/100km): ");
    scanf("%f", &g1->efMIN);
    printf("Agrege el consumo maximo (L/100km): ");
    scanf("%f",&g1->efMX);
    printf("Agrege el mantenimiento mensualmente: ");
    scanf("%f", &g1->mantenimiento);
    printf("Agrege el seguro mensualmente: ");
    scanf("%f", &g1->seguro);
    printf("Agrege el costo de gomas: ");
    scanf("%f", &g1->gomas);
}

void lee(FILE *ye, struct gasto *g1) //leo los parámetros del vehículo en el archivo
{
    if (ye != NULL)
    {
        fread(g1, sizeof(struct gasto), 1, ye);
        fclose(ye);
    }
    else
    {
        printf("No se pudo abrir el archivo de parámetros del vehículo.\n");
    }
}

void escribe(FILE *ye, struct gasto *g1) //Función para escribir los parámetros del vehículo en el archivo
{
    if (ye != NULL)
    {
        fwrite(g1, sizeof(struct gasto), 1, ye);
        fclose(ye);
    }
    else
    {
        printf("No se pudo abrir el archivo de parámetros del vehículo.\n");
    }
}
