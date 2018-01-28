#include "FileHandler.h"
#include <time.h>
#include <stdio.h>

FileHandler::FileHandler()
{
    //ctor
}

FileHandler::~FileHandler()
{
    //dtor
}

bool FileHandler::LeerFichero(vector<actividad> &actividades , const char* nombre_archivo){

    //Creamos el fichero
    FILE *f1;
    f1 = fopen (nombre_archivo, "rb");

    int numero_actividades = actividades.size();

    actividad aux;

    //Error si el archivo es inaccesible
    if (f1 == NULL)
    {
       perror("El archivo especificado no se puede abrir.");
       return -1;
    }
    else
    {
        fread(&numero_actividades,1,sizeof(int),f1);

        while(!feof(f1)){
            fread(&aux,1,sizeof(actividad),f1);
            actividades.push_back(aux);
        }

        fclose(f1);
        return true;
    }
}

bool FileHandler::EscribirFichero(vector <actividad> actividades , const char *nombre_archivo){

    //Creamos el fichero
    FILE *f2;
    f2 = fopen (nombre_archivo, "wb");

    int numero_actividades = actividades.size();

    //Error si el archivo es inaccesible
    if (f2 == NULL)
    {
        perror("El archivo especificado no se puede abrir.");
        return -1;
    }
    else
    {
        fwrite(&numero_actividades,sizeof(int),1,f2);
        for(int i = 0; i < numero_actividades ; i++){
            fwrite(&actividades[i],sizeof(actividad),1,f2);
        }

        fclose(f2);
        return true;
    }
}
