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

    char nombre [50];
    char tiempoTipo [50];

    struct tm * timeinfo;
    time_t rawtime;

    time ( &rawtime );
    timeinfo = localtime ( &rawtime );

    actividad nueva;

	switch(tipo)
    {
        case 1: strcpy(nombre,"TRA");
        break;

        case 2: strcpy(nombre,"DES");
        break;

        case 3: strcpy(nombre,"PRO");
	    break;
	}

	//tiempoTipo = asctime(timeinfo);

    strcat(nombre, tiempoTipo);
	//strcat(nombre , asctime(timeinfo));

    nueva.tipo = tipo;
    nueva.nombre = nombre;
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

char* ActivityHandler::mostrarTiempoTotal(){
    //Transformar a minutos y segundos
    struct tm *timeinfo;
    time_t tiempo_total = actividades.at(actividades.size()-1).fecha_fin - actividades.at(0).fecha_ini;
    timeinfo = localtime(&tiempo_total);
    char *cadena_tiempo = "";
    sprintf(cadena_tiempo , "%dh %dm %ds",timeinfo->tm_hour-1 , timeinfo->tm_min , timeinfo->tm_sec);

    return(cadena_tiempo);
}

char* ActivityHandler::mostrarNombre(int i){
    return(actividades[i].nombre);
}

char* ActivityHandler::mostrarFechaInicio(int i){
    struct tm *timeinfo;
    time_t tiempo = actividades[i].fecha_ini;
    timeinfo = localtime(&tiempo);
    return(asctime(timeinfo));
}

char* ActivityHandler::mostrarFechaFin(int i){
    struct tm *timeinfo;
    time_t tiempo = actividades[i].fecha_fin;
    timeinfo = localtime(&tiempo);
    return(asctime(timeinfo));
}

char* ActivityHandler::mostrarTipo(int i){

    char* tipo;

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
