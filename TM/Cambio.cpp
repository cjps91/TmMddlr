#include "Cambio.h"

Cambio::Cambio()
{
    //ctor
}

Cambio::~Cambio()
{
    //dtor
}

void Cambio::iniciarActividad(vector<actividad> &actividades){
	actividad nueva;
	nueva.nombre = "Actividad "+actividades.size()+1;
    time(&nueva.fecha_ini);
    nueva.tipo = tipo;
	actividades.push_back(nueva);
}

void Cambio::cambiarActividad(vector<actividad> &actividades, int tipo) {	
    time(&actividades[actividades.size()-1].fecha_fin);
	iniciarActividad();
}
