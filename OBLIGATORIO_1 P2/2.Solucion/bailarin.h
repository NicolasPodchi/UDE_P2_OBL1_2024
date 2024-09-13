#ifndef BAILARIN_H_INCLUDED
#define BAILARIN_H_INCLUDED

#include"../1.Auxiliares/time.h"
#include "../1.Auxiliares/strings.h"
#include "../1.Auxiliares/date.h"
#include "tipoBailarin.h"
#include "paises.h"

typedef struct
{
    long int cedula;
    strings nombre;
    strings apellido;
    date fechaNacimiento;
    time horaIngreso;
    tipoBailarin discriminante;

    union
    {
        int cantidadPremios;
        strings estiloTango;
        paises nacionalidad;
    } datos;

} bailarin;

#endif // BAILARIN_H_INCLUDED
