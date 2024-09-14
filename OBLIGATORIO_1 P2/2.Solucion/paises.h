#ifndef PAISES_H_INCLUDED
#define PAISES_H_INCLUDED

typedef enum
{
    URUGUAY,
    BRASIL,
    ARGENTINA,
    PARAGUAY,
    OTRO

} paises;

//CARGAR PAIS
void cargarPais(paises p);

//MOSTRAR PAIS
void mostrarPais(paises p);

#endif // PAISES_H_INCLUDED
