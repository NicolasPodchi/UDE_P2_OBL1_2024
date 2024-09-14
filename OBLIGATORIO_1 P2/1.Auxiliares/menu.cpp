#include <iostream>
#include "menu.h"

void mostrarMenu (int &opcion)
{
    printf("1 - Registrar ingreso de un bailarin");
    printf("\n2 - Registrar salida de un bailarin");
    printf("\n3 - Registrar nuevo premio para un bailarin infantil");
    printf("\n4 - Menu de listados y consultas");
    printf("\n5 - Salir del programa");

    printf("\n\n SELECCIONE UNA OPCION: ");
    scanf("%d", &opcion);
}

void mostrarMenuConsultas (int &opcion)
{
    printf("1 - Listado basico de bailarines ingresados, ordenado por hora de llegada");
    printf("\n2 - Listado detallado de un bailarin, dada su cedula");
    printf("\n3 - Cantidad de bailarines de cada tipo ingresados");
    printf("\n4 - Cantidad de bailarines nacidos en una fecha dada");
    printf("\n5 - Cantidad de bailarines infantiles que superan una cantidad de premios dada");
    printf("\n6 - Cantidad de bailarines juveniles que bailan un estilo de tango dado");
    printf("\n7 - Cantidad de bailarines adultos provenientes del mercosur y de fuera");
    printf("\n8 - Volver al menu principal");

    printf("\n\n SELECCIONE UNA OPCION: ");
    scanf("%d", &opcion);
}
