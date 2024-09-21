#ifndef MUESTRA_H_INCLUDED
#define MUESTRA_H_INCLUDED

#include "bailarin.h"

const int TAM =50;
typedef struct
{
    bailarin arre[TAM];
    int tope;
} muestra;

boolean estaVacio (muestra comunal);

boolean estaLleno (muestra comunal);

void inicializarMuestra(muestra &muestraParam);

//PRECONDICION: Debe existir un bailarin con la cedula ingresada y debe ser un bailarin infantil
void sumaUnPremio (muestra &lista, long int ci);

//PRECONDICION: El bailarin no puede existir en la muestra
void nuevoBailarin (bailarin b, muestra &lista);

//PRECONDICION: El bailarin debe existir en la muestra
void eliminarBailarin (long int ci, muestra &lista);

boolean existeBailarin (muestra lista, long int ci);

//PRECONDCION: La muestra no puede estar vacia -  -
time horaUltimoBailarin (muestra lista);

//PRECONDCION: La lista no puede estar vacia
void imprimirLista (muestra lista);

void cantidadTipoBailarin(muestra lista, int &infantil, int &juvenil, int &adulto);

int cantidadTango(muestra lista, strings estilo);

int cantidadNacidosFecha(muestra lista, date f);

//PRECONDCION: Tiene que tener la cedula algun bailarin
bailarin cedulaybailarin(long int ci, muestra lista);

//PRECONDCION: Cantidad de bailarines infantiles que superan una cantidad de premios dada
int InfantilSuperaPremios(muestra lista, int cantidadPremios);

void cantidadMercosurYOtros(muestra lista, int &cantMercosur, int &cantOtro);

boolean ValidarHora(muestra lista, time horaIngreso);

#endif // MUESTRA_H_INCLUDED
