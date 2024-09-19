#include <iostream>
#include <cstdlib>

#include "1.Auxiliares/menu.h"
#include "2.Solucion/muestra.h"

using namespace std;

void procesarConsulta(muestra muestraComunal, int opcionConsultas)
{
    int infantil, juvenil, adulto;

    //AUX
    long int ci;

    do
    {
        system("cls");
        mostrarMenuConsultas(opcionConsultas);

        switch(opcionConsultas)
        {
        case 1:
            //Listado b�sico de bailarines ingresados, ordenado por hora de llegada
            //imprimirLista(muestraComunal);
            break;
        case 2:
            //Listado detallado de un bailar�n, dada su c�dula


            printf("Ingerse la cedula del bailarin a consultar: ");
            scanf("%ld", &ci);
            while(existeBailarin(muestraComunal, ci) == FALSE)
            {
                system("cls");
                printf("NO EXISTE BAILARIN PARA LA CEDULA INGRESADA. INGRESE NUEVAMENTE: ");
                scanf("%ld", &ci);
            }

            cedulaybailarin(ci,muestraComunal);
            break;
        case 3:
            //Cantidad de bailarines de cada tipo ingresados
//            cantidadTipoBailarin(muestraComunal, infantil, juvenil, adulto);
            //mostrar resultados
            break;
        case 4:
            //Cantidad de bailarines nacidos en una fecha dada
            break;
        case 5:
            //Cantidad de bailarines infantiles que superan una cantidad de premios dada
            break;
        case 6:
            //Cantidad de bailarines juveniles que bailan un estilo de tango dado
            break;
        case 7:
            //Cantidad de bailarines adultos provenientes del mercosur y de fuera
            break;
        case 8:
            //Volver al men� principal
            break;
        default:
            system("cls");
            printf("OPCION INCORRECTA \n");
            system("pause");
            break;
        }
    }
    while (opcionConsultas != 8);
}

int main()
{
    bailarin b;
    int opcion;
    int opcionConsultas;
    muestra muestraComunal;

    //AUX
    long int ci;

    do
    {
        system("cls");
        mostrarMenu(opcion);

        switch(opcion)
        {
        case 1:
            // Registrar ingreso de un bailar n


            cargarBailarin(b);

            //valiDAR HORA

            nuevoBailarin(b, muestraComunal);
            break;
        case 2:
            // Registrar salida de un bailar�n

            printf("Ingerse la cedula del bailarin a eliminar: ");
            scanf("%ld", &ci);

            while(existeBailarin(muestraComunal, ci) == FALSE)
            {
                system("cls");
                printf("NO EXISTE BAILARIN PARA LA CEDULA INGRESADA. INGRESE NUEVAMENTE: ");
                scanf("%ld", &ci);
            }

            eliminarBailarin(ci, muestraComunal);
            break;
        case 3:
            // Registrar nuevo premio para un bailar�n infantil

            printf("Ingerse la cedula del bailarin a premiar: ");
            scanf("%ld", &ci);

            while(existeBailarin(muestraComunal, ci) == FALSE)
            {
                system("cls");
                printf("NO EXISTE BAILARIN PARA LA CEDULA INGRESADA. INGRESE NUEVAMENTE: ");
                scanf("%ld", &ci);
            }

            sumaUnPremio(muestraComunal, ci);
            break;
        case 4:
            // Men� de listados y consultas
            procesarConsulta(muestraComunal, opcionConsultas);
            break;
        case 5:
            // Salir del programa
            break;
        default:
//            system("cls");
//            printf("OPCION INCORRECTA \n");
//            system("pause");
            break;
        }
    }
    while (opcion != 5);

    return 0;
}





