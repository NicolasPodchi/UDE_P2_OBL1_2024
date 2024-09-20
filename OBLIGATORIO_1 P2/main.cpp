#include <iostream>
#include <cstdlib>

#include "1.Auxiliares/menu.h"
#include "2.Solucion/muestra.h"

using namespace std;

void procesarConsulta(muestra muestraComunal, int opcionConsultas)
{
    //AUX
    long int ci;
    int infantil, juvenil, adulto;
    date fecha;
    strings estiloTango;
    int cantMercosur, cantOtro;

    do
    {
        system("cls");
        mostrarMenuConsultas(opcionConsultas);

        switch(opcionConsultas)
        {
        case 1:
            //Listado basico de bailarines ingresados, ordenado por hora de llegada
            printf(":: LISTA DE BAILARINES INGRESADOS ::\n\n");
            if(estaVacio(muestraComunal)==TRUE)
                printf("LA LISTA ESTA VACIA.\n\n");
            else
                imprimirLista(muestraComunal);
            system("pause");
            break;
        case 2:
            //Listado detallado de un bailarin, dada su cedula

            printf("Ingerse la cedula del bailarin a consultar: ");
            scanf("%ld", &ci);
            while(existeBailarin(muestraComunal, ci) == FALSE)
            {
                system("cls");
                printf("NO EXISTE BAILARIN PARA LA CEDULA INGRESADA. INGRESE NUEVAMENTE: ");
                scanf("%ld", &ci);
            }
            listarBailarin(cedulaybailarin(ci,muestraComunal));
            system("pause");
            break;
        case 3:
            //Cantidad de bailarines de cada tipo ingresados
            printf(":: CANTIDAD DE BAILARINES INGRESADOS DE CADA TIPO ::\n\n");
            cantidadTipoBailarin(muestraComunal, infantil, juvenil, adulto);
            //mostrar resultados
            printf("INFANTILES: %d",infantil);
            printf("JUVENILES: %d", juvenil);
            printf("ADULTOS: %d",adulto);
            system("pause");
            break;
        case 4:
            //Cantidad de bailarines nacidos en una fecha dada
            printf(":: CANTIDAD DE BAILARINES NACIDOS EN UNA FECHA ::\n\n");
            printf("Ingrese la fecha a considerar: ");
            scanDate(fecha);
            printf("\nCANTIDAD DE BAILARINES NACIDOS EN ESA FECHA: %d",cantidadNacidosFecha(muestraComunal,fecha));
            system("pause");
            break;
        case 5:
            //Cantidad de bailarines infantiles que superan una cantidad de premios dada
            printf(":: CANTIDAD DE BAILARINES INFANTILES QUE SUPERAN UNA CANTIDAD DE PREMIOS DADA :: \n");

            int cantidadPremios;
            int cantidadPremiosResultado;

            printf("Ingrese la cantidad de premios: ");
            scanf("%d", &cantidadPremios);

            cantidadPremiosResultado=InfantilSuperaPremios(muestraComunal, cantidadPremios);
            printf("\n%d bailarines infantiles superan los %d premios.",cantidadPremios);

            system("pause");
            break;
        case 6:
            //Cantidad de bailarines juveniles que bailan un estilo de tango dado
            printf(":: CANTIDAD DE BAILARINES JUVENILES QUE BAILAN UN ESTILO DE TANGO DADO ::\n\n");
            printf("Ingrese el estilo de tango a buscar: ");
            scan(estiloTango);
            printf("CANTIDAD DE BAILARINES QUE BAILAN ESE ESTILO DE TANGO: %d",cantidadTango(muestraComunal,estiloTango));
            system("pause");
            break;
        case 7:
            //Cantidad de bailarines adultos provenientes del mercosur y de fuera
            printf(":: CANTIDAD DE BAILARINES ADULTOS DE MERCOSUR Y DE FUERA ::\n\n");
            cantidadMercosurYOtros(muestraComunal,cantMercosur,cantOtro);

            printf("MERCOSUR: %d",cantMercosur);
            printf("OTRO: %d",cantOtro);
            system("pause");
            break;
        case 8:
            //Volver al menu principal
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
    inicializarMuestra(muestraComunal);
    do
    {
        system("cls");
        mostrarMenu(opcion);

        switch(opcion)
        {
        case 1:
            // Registrar ingreso de un bailar n

            //validar que la muestra no este llena, si esta llena emitir mensaje de error
            if (estaLleno(muestraComunal)==FALSE)
            {
                cargarBailarin(b);

                //validar hora. mientras no ingrese la hora bien, tiene que seguir cargando el bailarin
                while (ValidarHora(muestraComunal, darHoraIngreso(b)) == FALSE)
                {
                    system ("cls");
                    printf("LA HORA NO PUEDE SER MENOR QUE EL BAILARIN ANTERIOR. INGRESE EL BAILARIN NUEVAMENTE.\n");
                    cargarBailarin(b);
                }

                nuevoBailarin(b, muestraComunal);
            }
            break;
        case 2:
            // Registrar salida de un bailarin

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
            // Registrar nuevo premio para un bailarin infantil

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
            // Menu de listados y consultas
            procesarConsulta(muestraComunal, opcionConsultas);
            break;
        case 5:
            // Salir del programa
            break;
        default:
            system("cls");
            printf("OPCION INCORRECTA \n");
            system("pause");
            break;
        }
    }
    while (opcion != 5);

    return 0;
}





