#ifndef CAMBIO_H
#define CAMBIO_H
#include <time.h>
#include "FileHandler.h"

class ActivityHandler
{
    public:
        ActivityHandler(vector<actividad> &actividades);
        virtual ~ActivityHandler();
        void cambiarActividad(int tipo);
		void iniciarActividad(int tipo);

    protected:

    private:
        vector<actividad> *actividades;
};

#endif // CAMBIO_H
