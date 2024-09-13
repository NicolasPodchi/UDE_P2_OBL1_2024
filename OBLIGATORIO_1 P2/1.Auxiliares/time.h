#ifndef HORA_H_INCLUDED
#define HORA_H_INCLUDED
#include "boolean.h"

typedef struct{
                int horas;
                int minutos;
              }time;

void cargarhora (time &t);
boolean chequeohoras (time t);
boolean chequeomin (time t);
void cargarhora (time &t);
void printhora (time t);


#endif // HORA_H_INCLUDED
