#ifndef CAMBIO_H
#define CAMBIO_H
#include <time.h>
#include "FileHandler.h"

class ActivityHandler
{
    public:
        ActivityHandler();
        virtual ~ActivityHandler();
        void cambiarActividad(vector<actividad> &actividades, int tipo);
		void iniciarActividad(vector<actividad> &actividades, int tipo);

    protected:

    private:
};

#endif // CAMBIO_H
