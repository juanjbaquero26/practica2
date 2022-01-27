/*
#include <iostream>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>


using namespace std;
const char* filas[15] = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O"};
int asientos[20];
int SalaCine[15][20];
bool Reservar(int fila, int asiento);
int generaAleatorio(int LimInferior, int LimSuperior);
void MostrarMenu();
void MostrarSala();
int opcionElegida = 0;

int main()
{
    srand(time(NULL));
    do{
        MostrarMenu();
        cout << "dame una opcion\n";
        cin >> opcionElegida;
        switch(opcionElegida){
        case 0:
            //cout << "hola mundo" << endl;
            MostrarSala();
            break;
        case 1:
            cout << "saliendo del sistema" << endl;
            break;
        case 2:
            int fila=0;
            int asiento=0;
            do{
                cout << "ingrese la fila en forma de número (por ejemplo A = 1; B = 2: ";
                cin >> fila;
                cout << "ingrese el asiento: ";
                cin >> asiento;
                fila = fila - 1 ;
                asiento = asiento - 1;
            }while(Reservar(fila, asiento)==false);
            break;


    }}
    while(opcionElegida != 1);

    return 0;}

void MostrarMenu(){
    cout << "------menu 1-------" << endl;
    cout << "0 = mostrar pantalla de ocupacion" << endl;
    cout << "1 = salir de la aplicacion" << endl;
    cout << "2 = reservar asiento"<< endl ;}
void MostrarSala(){
    cout << "<<<<<<<<<<<<<<<<<<<<<<<<<<<<< P A N T A L L A >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl;
    cout << "   (1) (2) (3) (4) (5) (6) (7) (8) (9) (10)(11)(12)(13)(14)(15)(16)(17)(18)(19)(20)"<<endl;

    for (int i=0 ; i<15; i++){
        cout << "(" <<filas[i]<< ")";
        for(int j=0; j<20 ;j++){
            cout << "[ "<< SalaCine[i][j]<<"]";
        }
        cout << endl ;
    }}

bool Reservar(int fila, int asiento){
    if (SalaCine[fila][asiento] == 0){
        SalaCine[fila][asiento] = 1;
        cout << " el asiento ha sido asignado" <<endl;
        return true;
    }
    else {
        cout << " el asiento se encuentra ocupado"<<endl;
    }
    return false;
}

*/
