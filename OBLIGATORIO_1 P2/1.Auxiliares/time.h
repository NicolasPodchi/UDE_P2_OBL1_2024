#ifndef HORA_H_INCLUDED
#define HORA_H_INCLUDED
#include "boolean.h"

typedef struct
{
    int horas;
    int minutos;
} time;

void cargarhora (time &t);
void printhora (time t);
boolean chequeohoras (time t);
boolean chequeomin (time t);

//GET
int getHoras(time t);
int getMinutos(time t);


#endif // HORA_H_INCLUDED
