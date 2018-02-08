#ifndef CAMBIO_H
#define CAMBIO_H
#include <time.h>
#include "FileHandler.h"

class ActivityHandler
{
    private:
        vector<actividad> actividades;

    public:
        ActivityHandler(vector<actividad> &actividades){this->actividades = actividades;}
        virtual ~ActivityHandler();
        void cambiarActividad(int tipo);
		void iniciarActividad(int tipo);
		time_t tiempoTipo(int tipo);
        time_t tiempoTotal();
        float porcentajeActividad(int tipo);

};

#endif // CAMBIO_H
