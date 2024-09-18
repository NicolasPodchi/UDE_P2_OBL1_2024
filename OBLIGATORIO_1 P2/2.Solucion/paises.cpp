//hola
#include <stdio.h>
#include "paises.h"

void cargarPais(paises p)
{
    int x;
    printf("Ingrese pais del bailarin: ");
    printf("\n1 - Uruguay");
    printf("\n2 - Brasil");
    printf("\n3 - Argentina");
    printf("\n4 - Paraguay");
    printf("\n5 - Otro");
    scanf("%d",&x);
    switch(x)
    {
        case 1: p = URUGUAY;
        break;
        case 2: p= BRASIL;
        break;
        case 3: p= ARGENTINA;
        break;
        case 4: p= PARAGUAY;
        break;
        case 5: p= OTRO;
        default: ;
        //VALIDACION
    }
}

void mostrarPais(paises p)
{
    switch(p)
    {
        case URUGUAY: printf("URUGUAY");
        break;
        case BRASIL: printf("BRASIL");
        break;
        case ARGENTINA: printf("ARGENTINA");
        break;
        case PARAGUAY: printf("PARAGUAY");
        break;
        case OTRO: printf("OTRO");
        default:;
        //VALIDACION
    }
}


