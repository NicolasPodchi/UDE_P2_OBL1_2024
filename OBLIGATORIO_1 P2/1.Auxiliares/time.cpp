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

boolean compararhora(time b, time c)
{
    boolean mayor=FALSE;
    if((b.horas)>(c.horas))
        mayor=TRUE;
    else if ((b.horas)<(c.horas))
        mayor= FALSE;
    else if((b.minutos)>(c.minutos))
        mayor=TRUE;
    else if ((b.minutos)<  (c.minutos))
        mayor=FALSE;
    return mayor;
}
