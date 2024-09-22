//hola
#include "bailarin.h"

void cargarBailarin(bailarin &b)
{
    printf("Nombre: ");
    scan(b.nombre);

    printf("Apellido: ");
    scan(b.apellido);

    printf("Cedula: ");
    scanf("%ld", &b.cedula);

    printf("\n");
    printf("Fecha de nacimiento \n");
    scanDate(b.fechaNacimiento);

    printf("\n");
    printf("Hora de ingreso \n");
    cargarhora(b.horaIngreso);

    printf("\n");
    cargarTipoBailarin (b.discriminante);

    switch (b.discriminante)
    {
    case INFANTIL:
        printf("\nCantidad de premios: ");
        scanf("%d", &b.datos.cantidadPremios);
        break;
    case JUVENIL:
        printf("\nEstilo de tango: ");
        scan(b.datos.estiloTango);
        break;

    case ADULTO:
        printf("\n");
        cargarPais (b.datos.nacionalidad);
    }
}
void listarBailarin (bailarin b)
{
    printf("\n ----DATOS DEL BAILARIN----\n");
    printf("NOMBRE: ");
    print (b.nombre);
    printf("\nAPELLIDO: ");
    print(b.apellido);
    printf("\nCEDULA: %ld", b.cedula);
    printf("\nFECHA NACIMIENTO: ");
    printDate(b.fechaNacimiento);
    printf("\n");
    printf("HORA DE INGRESO: ");
    printhora(b.horaIngreso);
    printf("\nTIPO BAILARIN: ");
    mostrarTipoBailarin(b.discriminante);
    printf("\n");
    switch(b.discriminante)
    {
    case INFANTIL:
        printf("CANTIDAD DE PREMIOS: %d", b.datos.cantidadPremios);
        break;
    case JUVENIL:
        printf("ESTILO DE TANGO: ");
        print(b.datos.estiloTango);
        break;
    case ADULTO:
        printf("NACIONALIDAD: ");
        mostrarPais(b.datos.nacionalidad);
        break;
    }
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
    return b.horaIngreso;
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

void listarBailarinResumen (bailarin b)
{
    printf("\n ----DATOS DEL BAILARIN----\n");
    printf("\nCEDULA: %ld", b.cedula);
    printf("\nNOMBRE: ");
    print (b.nombre);
    printf("\nAPELLIDO: ");
    print(b.apellido);
    printf("\nTIPO BAILARIN: ");
    mostrarTipoBailarin(b.discriminante);
    printf("\n ----******************----\n");

}








