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
            system("cls");
            printf(":: LISTA DE BAILARINES INGRESADOS ::\n\n");
            if(estaVacio(muestraComunal)==TRUE)
                printf("LA LISTA ESTA VACIA.\n\n");
            else
                imprimirLista(muestraComunal);
            system("pause");
            break;
        case 2:
            //Listado detallado de un bailarin, dada su cedula
            system("cls");
            printf(":: DATOS DE BAILARIN DETALLADO ::\n\n");
            printf("Ingerse la cedula del bailarin a consultar: ");
            scanf("%ld", &ci);
            if(existeBailarin(muestraComunal, ci) == TRUE)
            {
                listarBailarin(cedulaybailarin(ci,muestraComunal));
                printf("\n\n");

            }
            else
            {
                system("cls");
                printf("NO EXISTE BAILARIN PARA LA CEDULA INGRESADA. INTENTE NUEVAMENTE.\n");
            }
            system("pause");
            break;
        case 3:
            //Cantidad de bailarines de cada tipo ingresados
            system("cls");
            printf(":: CANTIDAD DE BAILARINES INGRESADOS DE CADA TIPO ::\n\n");
            cantidadTipoBailarin(muestraComunal, infantil, juvenil, adulto);
            //mostrar resultados
            printf("INFANTILES: %d\n",infantil);
            printf("JUVENILES: %d\n", juvenil);
            printf("ADULTOS: %d\n\n",adulto);
            system("pause");
            break;
        case 4:
            //Cantidad de bailarines nacidos en una fecha dada
            system("cls");
            printf(":: CANTIDAD DE BAILARINES NACIDOS EN UNA FECHA ::\n\n");
            printf("Ingrese la fecha a considerar: ");
            scanDate(fecha);
            printf("\nCANTIDAD DE BAILARINES NACIDOS EN ESA FECHA: %d\n\n",cantidadNacidosFecha(muestraComunal,fecha));
            system("pause");
            break;
        case 5:
            //Cantidad de bailarines infantiles que superan una cantidad de premios dada
            system("cls");
            printf(":: CANTIDAD DE BAILARINES INFANTILES QUE SUPERAN UNA CANTIDAD DE PREMIOS DADA :: \n\n");

            int cantidadPremios;
            int cantidadPremiosResultado;

            printf("Ingrese la cantidad de premios: ");
            scanf("%d", &cantidadPremios);

            cantidadPremiosResultado = InfantilSuperaPremios(muestraComunal, cantidadPremios);

            printf("\n%d bailarines infantiles superan los %d premios.\n\n", cantidadPremiosResultado, cantidadPremios);

            system("pause");
            break;
        case 6:
            //Cantidad de bailarines juveniles que bailan un estilo de tango dado
            system("cls");
            printf(":: CANTIDAD DE BAILARINES JUVENILES QUE BAILAN UN ESTILO DE TANGO DADO ::\n\n");
            printf("Ingrese el estilo de tango a buscar: ");
            scan(estiloTango);
            printf("\nCANTIDAD DE BAILARINES QUE BAILAN ESE ESTILO DE TANGO: %d\n\n",cantidadTango(muestraComunal,estiloTango));
            system("pause");
            break;
        case 7:
            //Cantidad de bailarines adultos provenientes del mercosur y de fuera
            system("cls");
            printf(":: CANTIDAD DE BAILARINES ADULTOS DE MERCOSUR Y DE FUERA ::\n\n");
            cantidadMercosurYOtros(muestraComunal,cantMercosur,cantOtro);

            printf("MERCOSUR: %d\n",cantMercosur);
            printf("OTRO: %d\n\n",cantOtro);
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
            system("cls");
            printf(":: INGRESO DE BAILARIN ::\n\n");
            //validar que la muestra no este llena, si esta llena emitir mensaje de error
            if (estaLleno(muestraComunal)==FALSE)
            {
                cargarBailarin(b);
                //validar hora. mientras no ingrese la hora bien, tiene que seguir cargando el bailarin
                while (ValidarHora(muestraComunal, darHoraIngreso(b)) == FALSE || existeBailarin(muestraComunal, darCedula(b))==TRUE)
                {
                    system ("cls");
                    printf("ERROR. INGRESE EL BAILARIN NUEVAMENTE.\n\n");
                    cargarBailarin(b);
                }

                nuevoBailarin(b, muestraComunal);
                system("cls");
                printf("BAILARIN CARGADO CON EXITO.\n");
                system("pause");
            }
            else
            {
                printf("LA MUESTRA ESTA LLENA.\n");
                system("pause");
            }
            break;
        case 2:
            // Registrar salida de un bailarin
            system("cls");
            printf("::REGISTRAR SALIDA DEL BAILARIN ::\n\n");
            printf("Ingerse la cedula del bailarin a eliminar: ");
            scanf("%ld", &ci);
            if(existeBailarin(muestraComunal,ci)==TRUE)
            {
                system("cls");
                eliminarBailarin(ci, muestraComunal);
                printf(":: SALIDA REGISTRADA EXITOSAMENTE ::\n");
                system("pause");
            }
            else
            {
                system("cls");
                printf("ERROR, NO EXISTE EL BAILARIN, VUELVA A INTENTARLO\n");
                system("pause");
            }
            break;
        case 3:
            // Registrar nuevo premio para un bailarin infantil
            printf(":: REGISTRAR NUEVO PREMIO PARA UN BAILARIN INFANTIL ::");
            system("cls");
            printf("Ingrese la cedula del bailarin a premiar: ");
            scanf("%ld", &ci);
            if(existeBailarin(muestraComunal, ci) == TRUE)
            {
                if(darTipoBailarin(cedulaybailarin(ci,muestraComunal))==INFANTIL)
                {
                    system("cls");
                    sumaUnPremio(muestraComunal, ci);
                    printf(":: PREMIO SUMADO EXITOSAMENTE ::\n");
                    system("pause");
                }
                else
                {
                    system("cls");
                    printf("ERROR, BAILARIN NO INFANTIL. VUELVA A INTENTARLO.\n");
                    system("pause");
                }
            }
            else
            {
                system("cls");
                printf("ERROR, NO EXISTE EL BAILARIN, VUELVA A INTENTARLO\n");
                system("pause");
            }
            break;
        case 4:
            // Menu de listados y consultas
            if(estaVacio(muestraComunal) == FALSE)
            {
                procesarConsulta(muestraComunal, opcionConsultas);
            }
            else
            {
                system("cls");
                printf("LA LISTA ESTA VACIA. NO SE PERMITE INGRESAR AL MENU DE CONSULTAS. \n\n");
                system("pause");
            }
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





