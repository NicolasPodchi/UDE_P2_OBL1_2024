#include <iostream>

#include "date.h"

void scanDate (date &d)
{
    printf("Ingrese el día: ");
    scanf("%d", &d.dia);

    printf("Ingrese el mes: ");
    scanf("%d", &d.mes);

    printf("Ingrese el año: ");
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

