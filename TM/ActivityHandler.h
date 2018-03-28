#ifndef CAMBIO_H
#define CAMBIO_H
#include <time.h>
#include "FileHandler.h"

class ActivityHandler
{
    private:
        vector<actividad> actividades;

    public:
        ActivityHandler(vector<actividad> &actividades);
        ~ActivityHandler();
        void cambiarActividad(int tipo);
		void iniciarActividad(int tipo);
		time_t tiempoTipo(int tipo);
        string porcentajeActividad(int tipo);
        char* mostrarTiempoTotal();
        char* mostrarNombre(int i);
        char* mostrarFecha(int i);
        char* mostrarTipo(int i);
        string mostrarTiempo(int i);
        char* mostrarFechaInicio(int i);
        char* mostrarFechaFin(int i);
        int cantidad_actividades();
        void ReiniciarJornada();
        void FinalizarJornada();

};

#endif // CAMBIO_H
