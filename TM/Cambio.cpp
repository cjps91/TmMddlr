#include "Cambio.h"

Cambio::Cambio()
{
    //ctor
}

Cambio::~Cambio()
{
    //dtor
}

actividad Cambio::cambiarActividad(actividad vieja, int tipo) {
    /* Quiero cambiar de actividad, entonces
    /* 1. asignamos fecha_fin a actividad actual
    /* 2. creamos actividad nueva asignandole fecha_ini y tipo.*/

    time(&vieja.fecha_fin);
    actividad nueva;
    time(&nueva.fecha_ini);
    nueva.tipo = tipo;

    return nueva;
}
