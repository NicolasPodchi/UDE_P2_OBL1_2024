#include <iostream>
#include "1.Auxiliares/boolean.h"

using namespace std;

int main()
{
    printf("prueba");
    cout << "Hello world!" << endl;
    return 0;
}

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

typedef enum
{
    INFANTIL,
    JUVENIL,
    ADULTO

} tipoBailarin;

typedef enum
{
    URUGUAY,
    BRASIL,
    ARGENTINA,
    PARAGUAY,
    OTRO

} paises;

const int TAM = 50;
typedef struct
{
    bailarin arre[TAM];
    int tope;
} muestra;


