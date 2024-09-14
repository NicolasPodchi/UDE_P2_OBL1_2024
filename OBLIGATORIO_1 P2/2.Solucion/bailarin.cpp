//hola
#include "bailarin.h"

void cargarbailarin(bailarin &b)
{
    printf("Ingrese nombre")
    scan(b.nombre);
    printf ("Ingrese apellido:")
    scan(b.apellido);
    printf ("Ingrese cedula:");
    scanf("%ld",&b.cedula);
    printf("Ingrese fecha de ingreso: ");
    scanDate(b.fechaNacimiento);

}
