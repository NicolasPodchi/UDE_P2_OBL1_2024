#ifndef DATE_H_INCLUDED
#define DATE_H_INCLUDED

#include "boolean.h"

typedef struct
{
    int dia;
    int mes;
    int anio;
} date;

void scanDate (date &d);

void printDate (date d);

boolean valDate(date d);

// GET
int getDia(date d);
int getMes(date d);
int getAnio(date d);

#endif // DATE_H_INCLUDED
