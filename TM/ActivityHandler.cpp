#include "ActivityHandler.h"

ActivityHandler::ActivityHandler(vector<actividad> &actividades)
{
    //ctor
}

ActivityHandler::~ActivityHandler()
{
    //dtor
}

void ActivityHandler::iniciarActividad(int tipo){
	actividad nueva;
	nueva.nombre = "Actividad "+actividades.size()+1;
    time(&nueva.fecha_ini);
    nueva.tipo = tipo;
	actividades.push_back(nueva);
}

void ActivityHandler::cambiarActividad(int tipo) {
    time(&actividades[actividades.size()-1].fecha_fin);
	iniciarActividad(actividades, tipo);
}
