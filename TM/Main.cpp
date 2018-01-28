#include "FileHandler.h"
#include <iostream>
using namespace std;


int main(){

    cout<<"Probando la funcionalidad de FileHandler."<<endl;

    FileHandler *FH = new FileHandler();

    time_t fecha_fin;
    time_t fecha_ini;

    //para convertir los segundos desde 1970 a una fecha legible

    fecha_ini = 150000;
    fecha_fin = 250000000;

    //Las fechas se deben MANIPULAR en distintas sentencias porque puede dar error o0
    std::cout<<"La fecha de inicio es: "<<ctime(&fecha_ini);
    std::cout<<" y la de fin "<<ctime(&fecha_fin)<<endl;

    //Creamos una actividad guardando los parametros de la estructura
    actividad act1;
    act1.fecha_ini = fecha_ini;
    act1.fecha_fin = fecha_fin;
    act1.tipo = PROCRASTINACION;

    vector <actividad> actividades_salida;
    vector <actividad> actividades;

    //Añadimos la primera actividad de prueba al vector.
    actividades.push_back(act1);

    FH->EscribirFichero(actividades, "nombre_de_prueba.dat");
    FH->LeerFichero(actividades_salida,"nombre_de_prueba.dat");

    // Hay que convertir las fechas en formato time_t
    // en fechas locales con la función localtime(time_t fecha) vista anteriormente
    std::cout<<"Fechas y tipo sin formatear: "<<actividades_salida.front().fecha_ini<<" "<<actividades_salida.front().fecha_fin<<" "<<actividades_salida.front().tipo<<endl;

}
