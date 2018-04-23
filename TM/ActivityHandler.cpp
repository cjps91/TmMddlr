#include "ActivityHandler.h"
#include <string.h>
#include <stdio.h>
#include <iostream>
using namespace std;

ActivityHandler::ActivityHandler(vector<actividad> &actividades){

    this->actividades = actividades;

}

ActivityHandler::~ActivityHandler(){
    //Destructor
}

void ActivityHandler::iniciarActividad(int tipo){

    string nombre;
    string buffer;
    //string nombre;
    double tiempoTipo;

    time_t rawtime;
    time(&rawtime);
    tiempoTipo = (double) rawtime;

    actividad nueva;

	switch(tipo)
    {
        case 1: nombre = "ACT_TRABAJO_";
        break;

        case 2: nombre = "ACT_DESCANSO_";
        break;

        case 3: nombre = "ACT_PROCRAST_";
	    break;
	}

	//nombre += nombre + str(tiempoTipo);

    nueva.tipo = tipo;
    nueva.nombre = nombre.c_str();
    nueva.fecha_ini = rawtime;
	actividades.push_back(nueva);

}

void ActivityHandler::cambiarActividad(int tipo) {

    if(actividades.size() > 0){
        time(&actividades.at(actividades.size()-1).fecha_fin);
    }
    iniciarActividad(tipo);

}

time_t ActivityHandler::tiempoTipo(int tipo){

    time_t tiempoTipo = 0;

    for(int i = 0 ; i < actividades.size() ; i++)
        if(tipo == actividades[i].tipo)
            tiempoTipo += (actividades[i].fecha_fin - actividades[i].fecha_ini);

    return tiempoTipo;
}

void ActivityHandler::ReiniciarJornada(){
    actividades.clear();
}

void ActivityHandler::FinalizarJornada(){
    time(&actividades.at(actividades.size()-1).fecha_fin);
}

string ActivityHandler::mostrarTiempoTotal(){
    //Transformar a minutos y segundos
    struct tm *timeinfo;
    time_t tiempo_total = actividades.at(actividades.size()-1).fecha_fin - actividades.at(0).fecha_ini;
    timeinfo = localtime(&tiempo_total);
    char *cadena_tiempo = "";
    sprintf(cadena_tiempo , "%dh %dm %ds",timeinfo->tm_hour-1 , timeinfo->tm_min , timeinfo->tm_sec);

    return(cadena_tiempo);
}

string ActivityHandler::mostrarNombre(int i){
    return(actividades[i].nombre);
}

string ActivityHandler::mostrarFechaInicio(int i){
    struct tm *timeinfo;
    time_t tiempo = actividades[i].fecha_ini;
    timeinfo = localtime(&tiempo);
    return(asctime(timeinfo));
}

string ActivityHandler::mostrarFechaFin(int i){
    struct tm *timeinfo;
    time_t tiempo = actividades[i].fecha_fin;
    timeinfo = localtime(&tiempo);
    return(asctime(timeinfo));
}

string ActivityHandler::mostrarTipo(int i){

    string tipo;

    switch(actividades[i].tipo)
    {
        case 1: tipo = "TRA";
        break;
        case 2: tipo = "DES";
        break;
        case 3: tipo = "PRO";
	    break;
	}
    return(tipo);
}

string ActivityHandler::mostrarTiempo(int i){
    //Transformar a minutos y segundos
    char cadena_texto[50] = "";
    string cadena_tiempo = "";
    struct tm *timeinfo;
    time_t tiempo = actividades[i].fecha_fin - actividades[i].fecha_ini;
    timeinfo = localtime(&tiempo);

    sprintf(cadena_texto,"%ld s", tiempo);

    cadena_tiempo = cadena_texto;

    return(cadena_tiempo);
}

int ActivityHandler::cantidad_actividades(){
    return actividades.size();
}

string ActivityHandler::porcentajeActividad(int tipo){

    string string_porcentaje = "";
    char cadena_texto[50] = "";

    double porcentaje = (float)(100 * tiempoTipo(tipo))/(float)(actividades[actividades.size()-1].fecha_fin - actividades[0].fecha_ini);

    sprintf(cadena_texto,"%0.2f %c" , porcentaje, '%');
    string_porcentaje += cadena_texto;

    return (string_porcentaje);

}
