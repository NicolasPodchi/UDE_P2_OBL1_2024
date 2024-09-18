//hola
#include "bailarin.h"

void cargarBailarin(bailarin &b)
{
    printf("Ingrese nombre: ");
    scan(b.nombre);
    printf("Ingrese apellido: ");
    scan(b.apellido);
    printf("Ingrese cedula: ");
    scanf("%ld", &b.cedula);
    printf("Ingrese fecha de nacimiento (dd mm yyyy): ");
    scanDate(b.fechaNacimiento);
    printf("Ingrese hora de ingreso (hh mm): ");
    cargarhora(b.horaIngreso);
    cargarTipoBailarin (b.discriminante);

    switch (b.discriminante)
    {
    case INFANTIL:
        printf("Ingrese cantidad de premios: ");
        scanf("%d", &b.datos.cantidadPremios);
        break;
    case JUVENIL:
        printf("\nIngrese estilo de tango: ");
        scan(b.datos.estiloTango);
        break;

    case ADULTO:
        cargarPais (b.datos.nacionalidad);
    }
}
void listarBailarin (bailarin b)
{
    printf("\n ----DATOS DEL BAILARIN----\n");
    printf("NOMBRE : ");
    print (b.nombre);
    printf("\n APELLIDO: ");
    print(b.apellido);
    printf("\nCEDULA: %ld", &b.cedula);
    printf("\nFECHA NACIMIENTO : ");
    printDate(b.fechaNacimiento);
    printhora(b.horaIngreso);
    printf("\nTIPO BAILARIN: ");
    mostrarTipoBailarin(b.discriminante);

}










