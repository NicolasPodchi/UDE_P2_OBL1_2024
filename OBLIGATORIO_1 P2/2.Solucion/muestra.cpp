//hola
#include "muestra.h"

boolean estaVacio (muestra comunal);

boolean estaLleno (muestra comunal);

void inicializarMuestra(muestra &muestraParam)
{
    muestraParam.tope= 0;
}

void sumaUnPremio (muestra &lista, long int ci)
{
    int i = 0;
    boolean terminar = FALSE;

    while(i < lista.tope && terminar == false)
    {
        if(darCedula() lista.arre[i] == ci)
        {
            lista.arre[i].cantidadPremios++;
            terminar = TRUE;
        }

        i++;
    }
}

void eliminarBailarin (muestra &lista, long int ci)
{
    muestra muestraAux;
inicializarMuestra();

    int i = 0;
    boolean terminar = FALSE;

    while(i < lista.tope && terminar == false)
    {
        if(lista.arre[i].cedula == ci)
        {
            lista.arre[i].cantidadPremios++;
            terminar = TRUE;
        }

        i++;
    }
}

boolean estaVacio (muestra comunal)
{
    boolean VACIO=FALSE;
    if(comunal.tope==0)
        VACIO=TRUE;
    else
        VACIO=FALSE;
    return VACIO;
}
boolean estaLleno (muestra comunal)
{
    boolean LLENO=FALSE;
    if (comunal.tope==TAM)
        LLENO=TRUE;
    return LLENO;
}


void nuevoBailarin (bailarin b, muestra &lista)
{
                cargarBailarin(b);
                lista.arre[lista.tope]=b;
                lista.tope++;
}

boolean existeBailarin (muestra lista, long int ci)
{
    boolean existe=FALSE;
    int i=0;
    while(!existe && i<lista.tope)
    {
        if(darCedula(muestra.arre[i])==ci)
            existe=TRUE;
        else
            i++;
    }
    return existe;
}

time horaUltimoBailarin (muestra comunal)
{
    return darHoraIngreso(muestra.arre[tope-1]);
}

void imprimirLista (muestra lista)
{
    int i;
    for(i=0; i<tope-1; i++)
    {
        printf("LISTA DE BAILARINES REGISTRADOS:\n\n");
        printf("%d.",i+1);
        listarBailarin(muestra.arre[i]);
    }
}

void cantidadTipoBailarin(muestra lista, int &infantil, int &juvenil, int &adulto)
{
    int i;
    infantil=0;
    juvenil =0;
    adulto=0;
    for(i=0; i<tope-1; i++)
    {
        switch(darTipoBailarin(muestra.arre[i]))
        {
        case INFANTIL:
            infantil++;
            break;
        case JUVENIL:
            juvenil++;
            break;
        case ADULTO:
            adulto++;
            break;
        }
    }
}

int cantidadTango(muestra lista, strings estilo)
{
    int cant=0, i;
    strings bailaEstilo;
    for (i=0; i<tope-1; i++)
    {
        if(darTipoBailarin(muestra.arre[i])==JUVENIL)
        {
            if(streq(darEstiloTango(muestra.arre[i],bailaEstilo),estilo)==TRUE)
                cant++;
        }
    }
    ��return�cant;
}




