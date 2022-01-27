
#include <iostream>

using namespace std;



int main()
{
    char cadena[20];int tamano;int n;int suma=0;int sumaTotal=0;
    cout << "ingrese el tamaño de la cadena de caracteres" << endl;
    cin>>tamano;
    cout << "ingrese cadena de caracteres" << endl;
    cin>>cadena;
    cout<<"ingrese el numero de particiones"<<endl;
    cin>>n;
    int multi=1;
    int aux=tamano-n;
    int conta=0;
    if(n>tamano){
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

            multi=1;
        }
        cout<<"la suma cogiendo de a "<<n<<" particiones es: "<<suma<<endl;
    }
    else{

        for(int k=tamano;k>0;k--){
            while(multi!=1 || conta>0){
                multi*=10;
                break;
            }

            if(cadena[k-1]==48){
                suma=suma+0;
            }
            else if(cadena[k-1]==49){
                suma=suma+(1*multi);
            }
            else if(cadena[k-1]==50){
                suma=suma+(2*multi);
            }
            else if(cadena[k-1]==51){
                suma=suma+(3*multi);
            }
            else if(cadena[k-1]==52){
                suma=suma+(4*multi);
            }
            else if(cadena[k-1]==53){
                suma=suma+(5*multi);
            }
            else if(cadena[k-1]==54){
                suma=suma+(6*multi);
            }
            else if(cadena[k-1]==55){
                suma=suma+(7*multi);
            }
            else if(cadena[k-1]==56){
                suma=suma+(8*multi);
            }
            else if(cadena[k-1]==57){
                suma=suma+(9*multi);
            }
            conta++;
            if(conta==n){
                sumaTotal=sumaTotal+suma;
                suma=0;
                multi=1;
                conta=0;
            }
         }
         sumaTotal=sumaTotal+suma;
         cout<<"la suma cogiendo de a "<<n<<" particiones es: "<<sumaTotal<<endl;
         cout<<"/n original :"<<cadena<<endl;
    }




    return 0;
}

