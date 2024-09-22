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
        printf("+ Hora: ");
        scanf("%d", &t.horas);
    }
    while (chequeohoras(t)==FALSE);

    do
    {
        printf("+ Minutos: ");
        scanf("%d", &t.minutos);
    }
    while (chequeomin(t)==FALSE);
}

void printhora (time t)
{
    if(t.horas <= 9)
        printf("0");

    printf("%d:", t.horas);

    if(t.minutos <= 9)
        printf("0");

    printf("%d", t.minutos);
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
    else if((b.horas)==(c.horas) && (b.minutos)>=(c.minutos))
        mayor=TRUE;

    return mayor;
}
