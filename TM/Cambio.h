#ifndef CAMBIO_H
#define CAMBIO_H
#include <time.h>

struct actividad{
    time_t fecha_ini;
    time_t fecha_fin;
    int tipo;
};

class Cambio
{
    public:
        Cambio();
        virtual ~Cambio();
        actividad cambiarActividad(vector<actividad> &actividades, int tipo);
		actividad iniciarActividad(vector<actividad> &actividades);

    protected:

    private:
};

#endif // CAMBIO_H
