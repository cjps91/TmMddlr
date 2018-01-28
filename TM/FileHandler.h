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
};

class FileHandler{

	private:
	protected:
	public:

		FileHandler();
		~FileHandler();
		bool LeerFichero(vector <actividad> &vector_actividades, const char* nombre_archivo);
		bool EscribirFichero(vector <actividad> vector_actividades, const char* nombre_archivo);

};


#endif
