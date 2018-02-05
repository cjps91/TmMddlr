#include "ActivityHandler.h"

ActivityHandler::ActivityHandler()
{
    //ctor
}

ActivityHandler::~ActivityHandler()
{
    //dtor
}

void ActivityHandler::iniciarActividad(vector<actividad> &actividades, int tipo){
	actividad nueva;
	nueva.nombre = "Actividad "+actividades.size()+1;
    time(&nueva.fecha_ini);
    nueva.tipo = tipo;
	actividades.push_back(nueva);
}

void ActivityHandler::cambiarActividad(vector<actividad> &actividades, int tipo) {
    time(&actividades[actividades.size()-1].fecha_fin);
	iniciarActividad(actividades, tipo);
}
