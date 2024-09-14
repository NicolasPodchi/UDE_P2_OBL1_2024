//hola
#include "tipoBailarin.h"

//CARGAR BAILARIN
void cargarTipoBailarin(tipoBailarin &tipoBailarinScan)
{
    printf("Ingrese el tipo de bailarin: ");
    printf("\n 1 - Infantil ");
    printf("\n 2 - Juvenil ");
    printf("\n 3 - Adulto ");

    int num;
    scanf("%d", &num);

    swtich(num)
    {
    case 1:
        tipoBailarin = INFANTIL;
        break;

    case 2:
        tipoBailarin = JUVENIL;
        break;

    case 3:
        tipoBailarin = ADULTO;
        break;

    default:
        //VALIDAR ELEMENTO
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
