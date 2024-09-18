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

long int darCedula(bailarin b)
{
    return b.cedula;
}

void darNombre(bailarin b, strings &nombre)
{
    strcop(nombre,b.nombre);
}

void darApellido(bailarin b, strings &apellido)
{
    strcop(apellido,b.apellido);
}

date darFechaNacimiento(bailarin b)
{
    return b.fechaNacimiento;
}

time darHoraIngreso(bailarin b)
{
    return b.horaIngreso
}

tipoBailarin darTipoBailarin(bailarin b)
{
    return b.discriminante;
}

int darCantidadPremiios(bailarin b)
{
    return b.datos.cantidadPremios;
}

void darEstiloTango(bailarin b, strings &estilo)
{
    strcop(estilo, b.datos.estiloTango);
}

paises darPais(bailarin b)
{
    return b.datos.nacionalidad;
}










