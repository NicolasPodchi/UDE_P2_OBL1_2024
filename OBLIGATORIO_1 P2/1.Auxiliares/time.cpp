#include <stdio.h>
#include "time.h"
#include "boolean.h"

boolean chequeohoras (time t)
{
    boolean b=TRUE;
    if (t.horas<0||t.horas>24)
        b=FALSE;
    return b;
}

boolean chequeomin (time t)
{
    boolean b=TRUE;
    if (t.minutos<0||t.minutos>60)
        b=FALSE;
    return b;
}


void cargarhora (time &t)
{
    do
    {
        printf("\nIngrese horas: ");
        scanf("%d", &t.horas);
    }
    while (chequeohoras(t)==FALSE);

    do
    {
        printf("\nIngrese minutos: ");
        scanf("%d", &t.minutos);
    }
    while (chequeomin(t)==FALSE);
}

void printhora (time t)
{
    printf("HORA DE INGRESO: %d : %d", t.horas,t.minutos);
}

//GET
int getHoras(time t)
{
    return t.horas;
}

int getMinutos(time t)
{
    return t.minutos;
}
