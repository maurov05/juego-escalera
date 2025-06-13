#include <iostream>

using namespace std;
//funciones.h
    int mostrarOpciones();
    void juegoUnJugador();
    void juegoDosJugadores();
    void puntajeMaximo();

//desarrollo de funciones.cpp

int mostrarOpciones()
{
    int opcion;

    //system("cls");

cout<<"------JUEGO DE ESCALERA------"<<endl;
cout<<"1. JUEGO NUEVO PARA UN JUGADOR"<<endl;
cout<<"2. JUEGO NUEVO PARA DOS JUGADORES"<<endl;
cout<<"3. PUNTUACION MAS ALTA"<<endl;
cout<<"0. SALIR"<<endl;
cout<<"-----------------------------"<<endl;
cout<<"INGRESE UNA OPCION: "<<endl;
cin>> opcion;
cout<<"-----------------------------"<<endl;
cout<<endl<<endl;

return opcion;
}

void juegoUnJugador(){
    string nombre;
    int ronda = 1;
    int puntaje = 0;
    const int objetivo = 100;

    cout<<"INGRESE SU NOMBRE: ";
    cin>>nombre;

    while (puntaje < objetivo) {

        cout<<"-------------------"<<endl;
        cout<< "RONDA:" << ronda <<" " << "JUGADOR: " << nombre << endl;
        cout<< "PUNTAJE ACTUAL:"<< puntaje << " "<<"PUNTOS" << endl;
        cout<<"-------------------"<<endl;

//aca guardo los puntajes de los 3 lanzamientos
        int vLanzamientos [3];
//3 lanzamientos
        for( int lanzamiento = 0 ; lanzamiento < 3; lanzamiento++){

// guardo valores de los dados y sumo los dados lanzados
            int vDados[6];
            int sumaD = 0;

            cout<< "LANZAMIENTO: "<< lanzamiento+1 << ": ";

            for (int i = 0; i < 6; i++){
                vDados[i] = rand() % 6 + 1;

                cout<< vDados[i] <<" ";
                sumaD += vDados[i];
            }
            cout<< "PUNTAJE: "<<sumaD<<endl;
 //guardo el puntaje de este lanzamiento
            vLanzamientos[lanzamiento]=sumaD;

        }
 //comparo los 3 lanzamientos y me quedo con el mayor
        int puntuacionMayorDeRonda = vLanzamientos[0];
        for (int i = 1; i < 3; i++){
            if(vLanzamientos[i]>puntuacionMayorDeRonda){
                puntuacionMayorDeRonda = vLanzamientos[i];
            }
        }
//muestro y sumo el puntaje de la ronda
        puntaje+= puntuacionMayorDeRonda;
        cout<<"puntaje maximo de la ronda: "<< puntuacionMayorDeRonda<<endl;
        cout<<"puntaje total: "<<puntaje<<endl;
        ronda++;



    }
}
void juegoDosJugadores(){
}
void puntajeMaximo(){
}

//main.cpp
int main(){
int opcion;
do{

    opcion = mostrarOpciones();
switch(opcion){
case 1:
    juegoUnJugador();
    break;
case 2:
    juegoDosJugadores();
    break;
case 3:
    puntajeMaximo();
    break;
    case 0:
    cout<<"GRACIAS POR JUGAR!"<<endl;
    break;
    default:
        cout<<"OPCION INCORRECTA! VUELVA A INTENTARLO. "<<endl;
        break;
    }
} while(opcion!=0);
    return 0;
}
