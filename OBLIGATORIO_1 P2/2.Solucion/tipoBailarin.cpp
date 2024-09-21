//hola
#include "tipoBailarin.h"
#include <stdio.h>

//CARGAR BAILARIN
void cargarTipoBailarin(tipoBailarin &b)
{
    printf("Ingrese el tipo de bailarin");
    printf("\n 1 - Infantil ");
    printf("\n 2 - Juvenil ");
    printf("\n 3 - Adulto \n");
    printf("Seleccione la opcion: ");
    int num;
    scanf("%d", &num);
    while(num<1 || num>3)
    {
        printf("Valor erroneo, ingrese devuelta: ");
        scanf("%d", &num);
    }
    switch(num)
    {
    case 1:
        b=INFANTIL ;
        break;

    case 2:
        b = JUVENIL;
        break;

    case 3:
        b = ADULTO;
        break;
    }

}

//MOSTRAR BAILARIN
void mostrarTipoBailarin(tipoBailarin tipoBailarinParam)
{
    switch(tipoBailarinParam)
    {
    case INFANTIL:
        printf("Infantil");
        break;

    case JUVENIL:
        printf("Juvenil");
        break;

    case ADULTO:
        printf("Adulto");
        break;
    }
}
