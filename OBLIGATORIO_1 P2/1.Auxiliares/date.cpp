#include <iostream>

#include "date.h"

void scanDate (date &d)
{
    printf("+ Dia: ");
    scanf("%d", &d.dia);

    printf("+ Mes: ");
    scanf("%d", &d.mes);

    printf("+ Anio: ");
    scanf("%d", &d.anio);
}

void printDate (date d)
{
    printf("%d / %d / %d", d.dia, d.mes, d.anio);
}

boolean valDate(date d)
{
    boolean valido = TRUE;

    if (d.dia < 1 || d.mes < 1 || d.anio < 1)
        valido = FALSE;

    switch(d.mes)
    {

    case 2:
        if (d.anio % 4 != 0 && d.dia > 28)
        {

            valido = FALSE;
        }
        else
        {
            if (d.dia > 29)
            {
                valido = FALSE;
            }
        }
        break;

    case 4:
    case 6:
    case 9:
    case 11:
        if (d.dia > 30)
            valido = FALSE;
        break;

    default:
        if (d.dia > 31)
            valido = FALSE;
        break;
    }
}

// GET
int getDia(date d)
{
    return d.dia;
}

int getMes(date d)
{
    return d.mes;
}

int getAnio(date d)
{
    return d.anio;
}

boolean compararDate(date d1, date d2)
{
    boolean iguales=FALSE;
    if(getDia(d1)==getDia(d2)&&getMes(d1)==getMes(d2)&&getAnio(d1)==getAnio(d2))
        iguales=TRUE;
    return iguales;
}

