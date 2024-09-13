#ifndef BAILARIN_H_INCLUDED
#define BAILARIN_H_INCLUDED
typedef struct
{
    long int cedula;
    str nombre;
    str apellido;
    date fechaNacimiento;
    time horaIngreso;
    tipoBailarin discriminante;

    union
    {
        int cantidadPremios;
        str estiloTango;
        paises nacionalidad;
    } datos;

} bailarin;


#endif // BAILARIN_H_INCLUDED
