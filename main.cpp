
#include <iostream>
#include<ctime>
#include"funciones.h"
using namespace std;


int main(){
    srand(time(NULL));
int opcion;
string nombre;
int puntaje = 0;
int rondas = 0;
do{

    opcion = mostrarOpciones();
switch(opcion){
case 1:
    juegoUnJugador(nombre, puntaje, rondas);
    break;
case 2:
    puntajeMaximo(nombre, puntaje, rondas);
    break;
case 0:
    cout<<"GRACIAS POR JUGAR!"<<endl;
    break;
case 7:
    juegoSimulado();
    break;
    default:
        cout<<"OPCION INCORRECTA! VUELVA A INTENTARLO. "<<endl<<endl;
        break;
    }
} while(opcion!=0);
    return 0;
}
