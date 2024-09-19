#ifndef MUESTRA_H_INCLUDED
#define MUESTRA_H_INCLUDED

#include "bailarin.h"

const int TAM = 50;
typedef struct
{
    bailarin arre[TAM];
    int tope;
} muestra;


void inicializarMuestra(muestra &muestraParam);

boolean existeBailarin (muestra lista, long int ci);

boolean estaVacio (muestra comunal);

boolean estaLleno (muestra comunal);

time horaUltimoBailarin (muestra comunal);

void nuevoBailarin (bailarin b, muestra &lista);

// PRECONDICION: Debe existir bailarin para la ci
void eliminarBailarin (long int ci, muestra &lista);

//BAILARIN INFANTIL
void sumaUnPremio (muestra &lista, long int ci);

void imprimirLista (muestra lista);

void imprimirBailarin (muestra lista, long int ci);

void cantidadTipoBailarin(muestra lista, int &infantil, int &juvenil, int &adulto);

void cantidadTipoBailarin(muestra lista, int &infantil, int &juvenil, int &adulto);

int cantidadTango(muestra lista, strings estilo);

int cantidadNacidosFecha(muestra lista, date f);

void cedulaybailarin(long int ci, muestra lista);
#endif // MUESTRA_H_INCLUDED
