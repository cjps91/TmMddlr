#include "ActivityHandler.h"

ActivityHandler::ActivityHandler(vector<actividad> &actividades){

    this->actividades = actividades;

}

ActivityHandler::~ActivityHandler(){
    //Destructor
}

void ActivityHandler::iniciarActividad(int tipo){
	actividad nueva;
	nueva.nombre = "Actividad "+actividades.size()+1;
    time(&nueva.fecha_ini);
    nueva.tipo = tipo;
	actividades.push_back(nueva);
}

void ActivityHandler::cambiarActividad(int tipo) {
    time(&actividades.at(actividades.size()-1).fecha_fin);
	iniciarActividad(tipo);
}

time_t ActivityHandler::tiempoTipo(int tipo){

    time_t tiempoTipo = 0;

    for(unsigned int i = 0 ; i < actividades.size() ; i++)
        tiempoTipo += (actividades.at(i).fecha_fin - actividades.at(i).fecha_ini);

    return tiempoTipo;
}

time_t ActivityHandler::tiempoTotal(){
    return (actividades.at(actividades.size()-1).fecha_fin - actividades.at(0).fecha_ini);
}

float ActivityHandler::porcentajeActividad(int tipo){

    return ((float)((tiempoTipo(tipo) / tiempoTotal()) * 100));
}
