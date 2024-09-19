#include "muestra.h"

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

void inicializarMuestra(muestra &muestraParam)
{
    muestraParam.tope= 0;
}

void sumaUnPremio (muestra &lista, long int ci)
{
    int i = 0;
    boolean terminar = FALSE;

    while(i < lista.tope && terminar == FALSE)
    {
        if(darCedula(lista.arre[i])  == ci)
        {
            lista.arre[i].datos.cantidadPremios++;
            terminar = TRUE;
        }

        i++;
    }
}

void nuevoBailarin (bailarin b, muestra &lista)
{
    cargarBailarin(b);
    lista.arre[lista.tope]=b;
    lista.tope++;
}

void eliminarBailarin (long int ci, muestra &lista)
{
    muestra listaAUX;
    inicializarMuestra(listaAUX);

    int i = 0;
    while(i < lista.tope)
    {
        if(darCedula(lista.arre[i]) != ci)
        {
            nuevoBailarin(lista.arre[i], listaAUX);
        }

        i++;
    }

    lista = listaAUX;
}

boolean existeBailarin (muestra lista, long int ci)
{
    boolean existe=FALSE;
    int i=0;
    while(!existe && i<lista.tope)
    {
        if(darCedula(lista.arre[i])==ci)
            existe=TRUE;
        else
            i++;
    }
    return existe;
}

time horaUltimoBailarin (muestra lista)
{
    return darHoraIngreso(lista.arre[lista.tope-1]);
}

void imprimirLista (muestra lista)
{
    int i;
    for(i=0; i<lista.tope-1; i++)
    {
        printf("LISTA DE BAILARINES REGISTRADOS:\n\n");
        printf("%d.",i+1);
        listarBailarin(lista.arre[i]);
    }
}

void cantidadTipoBailarin(muestra lista, int &infantil, int &juvenil, int &adulto)
{
    int i;
    infantil=0;
    juvenil =0;
    adulto=0;
    for(i=0; i<lista.tope-1; i++)
    {
        switch(darTipoBailarin(lista.arre[i]))
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
    for (i=0; i<lista.tope-1; i++)
    {
        if(darTipoBailarin(lista.arre[i])==JUVENIL)
        {
            darEstiloTango(lista.arre[i],bailaEstilo);
            if(streq(bailaEstilo, estilo)==TRUE)
                cant++;
        }
    }
    return cant;
}

int cantidadNacidosFecha(muestra lista, date f)
{
    int i, cant=0;
    for(i=0;i<lista.tope-1;i++)
    {
        if(compararDate(f,darFechaNacimiento(lista.arre[i]))==TRUE)
            cant++;
    }
    return cant;
}

void cedulaybailarin(long int ci, muestra lista)//tiene que tener la cedula algun bailarin
{
    int i;
    bailarin b;
    for (i=0;i<lista.tope;i++)
        if(ci== darCedula(b))
            listarBailarin(b);
        else
            i++;
}




