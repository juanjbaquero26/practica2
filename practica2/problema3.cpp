/*
#include <iostream>}
#include <math.h>

using namespace std;
int convertir(char [],int);
int suma=0;

int main()
{
    char cadena[20];int tamano;int num;
    cout << "ingrese el tamaño de la cadena de caracteres" << endl;
    cin>>tamano;
    cout << "ingrese cadena de caracteres" << endl;
    cin>>cadena;
    num=convertir(cadena,tamano);
    cout<<"la cadena ahora es de tipo int con valor "<<suma<<endl;


    return 0;
}

int convertir(char cadena[],int tamano){
    int multi=1;
    for(int i=0;i<tamano;i++){
        for(int j=tamano-1-i;j>0;j--){
            multi=multi*10;
        }
        if(cadena[i]==48){
            suma=suma+0;
        }
        else if(cadena[i]==49){
            suma=suma+(1*multi);
        }
        else if(cadena[i]==50){
            suma=suma+(2*multi);
        }
        else if(cadena[i]==51){
            suma=suma+(3*multi);
        }
        else if(cadena[i]==52){
            suma=suma+(4*multi);
        }
        else if(cadena[i]==53){
            suma=suma+(5*multi);
        }
        else if(cadena[i]==54){
            suma=suma+(6*multi);
        }
        else if(cadena[i]==55){
            suma=suma+(7*multi);
        }
        else if(cadena[i]==56){
            suma=suma+(8*multi);
        }
        else if(cadena[i]==57){
            suma=suma+(9*multi);
        }
        cout<<cadena[i]<<"  "<<multi<<endl;
        multi=1;
    }
    return suma;

}
*/
