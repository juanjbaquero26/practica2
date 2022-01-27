
#include <iostream>

using namespace std;

int calcula(int *);

int main()
{
    int array[6][8] = {{0,3,4,0,0,0,6,8},{5,13,6,0,0,0,2,3},{2,6,2,7,3,0,10,0},{0,0,4,15,4,1,6,0},{0,0,7,12,6,9,10,4},{5,0,6,10,6,4,8,0} };
    int *ptr;int num;
    ptr=&array[0][0];
    num=calcula(ptr);
    cout<<"el numero de estrellas es : "<<num<<endl;

    return 0;
}
int calcula(int *array){
    int suma=0;
    int cont=0;
    for (int j=1;j<5;j++){
        for(int i=1;i<7;i++){
            suma=suma + *(array+8*j+i);
            cout<<*(array+8*j+i)<<endl;
            suma=suma + *(array+8*(j-1)+i);
            cout<<*(array+8*(j-1)+i)<<endl;
            suma=suma + *(array+(8*j)+i-1);
            cout<<*(array+(8*j)+i-1)<<endl;
            suma=suma + *(array+8*j+(i+1));
            cout<<*(array+8*j+(i+1))<<endl;
            suma=suma + *(array+(8*(j+1))+i);
            cout<<*(array+(8*(j+1))+i)<<endl;
            suma=suma/5;
            if(suma>=6){
                cont++;
                suma=0;
            }
            suma=0;
        }
    }


    return cont;





}

