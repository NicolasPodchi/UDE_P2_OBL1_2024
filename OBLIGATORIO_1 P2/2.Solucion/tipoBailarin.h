#ifndef TIPOBAILARIN_H_INCLUDED
#define TIPOBAILARIN_H_INCLUDED

typedef enum
{
    INFANTIL,
    JUVENIL,
    ADULTO

} tipoBailarin;

//CARGAR TIPO BAILARIN
void cargarTipoBailarin(tipoBailarin &tipoBailarinScan);

//MOSTRAR TIPO BAILARIN
void mostrarTipoBailarin(tipoBailarin tipoBailarinParam);

#endif // TIPOBAILARIN_H_INCLUDED
