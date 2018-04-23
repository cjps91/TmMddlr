#include "FileHandler.h"
#include <time.h>
#include <stdio.h>
#include <fstream>


FileHandler::~FileHandler(){
    //Destructor
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

bool FileHandler::EscribirFichero(vector <actividad> &actividades , const char *nombre_archivo){

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

void FileHandler::EscribirFicheroCSV(vector <actividad> &vector_actividades, const char* nombre_archivo){

    char cadena[500];

    char *fecha_inicio;
    char *fecha_fin;

    ofstream fs(nombre_archivo);

    fs<<"Tipo"<<";"<<"Fecha_inicio"<<";"<<"Fecha_fin"<<endl;

    for(int i = 0; i < vector_actividades.size() ; i++){
        fecha_inicio = ctime(&vector_actividades[i].fecha_ini);
        fecha_fin = ctime(&vector_actividades[i].fecha_fin);
        fs<<vector_actividades[i].tipo<<";"<<fecha_inicio<<";"<<fecha_fin<<endl;
    }

    fs.close();

}
