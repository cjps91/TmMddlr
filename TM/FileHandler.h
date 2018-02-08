#ifndef _FILEHANDLER_H
#define _FILEHANDLER_H

#define TRABAJO 1
#define DESCANSO 2
#define PROCRASTINACION 3

#include <time.h>
#include <string>
#include <vector>
#include <iostream>
using namespace std;

struct actividad{
    time_t fecha_ini;
    time_t fecha_fin;
    int tipo;
    const char *nombre;
};

class FileHandler{

    vector<actividad> actividades;

	private:
	protected:
	public:

		FileHandler(vector <actividad> &vector_actividades){ this->actividades = vector_actividades; }
		~FileHandler();
		bool LeerFichero(vector <actividad> &vector_actividades, const char* nombre_archivo);
		bool EscribirFichero(vector <actividad> vector_actividades, const char* nombre_archivo);

};


#endif
