#ifndef BAILARIN_H_INCLUDED
#define BAILARIN_H_INCLUDED

#include <iostream>
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

//CARGAR BAILARIN
void cargarBailarin(bailarin &b);
void listarBailarin (bailarin b);
void cargarbailarin(bailarin &b);

void listarBailarin (bailarin b);

//SELECTORAS
long int darCedula(bailarin b);

void darNombre(bailarin b, strings &nombre);

void darApellido(bailarin b, strings &apellido);

date darFechaNacimiento(bailarin b);

time darHoraIngreso(bailarin b);

tipoBailarin darTipoBailarin(bailarin b);

int darCantidadPremiios(bailarin b);

void darEstiloTango(bailarin b, strings &estilo);

paises darPais(bailarin b);

void listarBailarinResumen (bailarin b);

#endif // BAILARIN_H_INCLUDED
