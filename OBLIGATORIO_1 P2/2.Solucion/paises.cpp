//hola
#include <stdio.h>
#include "paises.h"

void cargarPais(paises &p)
{
    int x;
    printf("Ingrese pais del bailarin");
    printf("\n 1 - Uruguay");
    printf("\n 2 - Brasil");
    printf("\n 3 - Argentina");
    printf("\n 4 - Paraguay");
    printf("\n 5 - Otro\n");
    printf("Seleccione la opcion: ");

    scanf("%d",&x);
    while(x<1 || x>5)
    {
        printf("Valor erroneo, ingrese devuelta: ");
        scanf("%d", &x);
    }

    switch(x)
    {
    case 1:
        p = URUGUAY;
        break;
    case 2:
        p= BRASIL;
        break;
    case 3:
        p= ARGENTINA;
        break;
    case 4:
        p= PARAGUAY;
        break;
    case 5:
        p= OTRO;
        break;
    }
}

void mostrarPais(paises p)
{
    switch(p)
    {
    case URUGUAY:
        printf("Uruguay");
        break;
    case BRASIL:
        printf("Brasil");
        break;
    case ARGENTINA:
        printf("Argentina");
        break;
    case PARAGUAY:
        printf("Paraguay");
        break;
    default:
        printf("Otro");
        break;
        //VALIDACION
    }
}


