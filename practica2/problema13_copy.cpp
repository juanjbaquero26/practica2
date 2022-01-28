
#include <iostream>

using namespace std;

void intersec(int[],int[]);
int c[4];
int main()
{
    //int array1[4]={0,0,8,4};
    //int array2[4]={5,2,6,7};
    int array1[4]={1,6,7,4};
    int array2[4]={3,8,2,4};
    intersec(array1,array2);
      cout<<"el rectangulo de interseccion c es : [";
    for(int i=0;i<4;i++){
          cout<<c[i];
    }
    cout<<"]";
    return 0;
}
void intersec(int array1[],int array2[]){
    bool var=false;
    int x=0,y=0,conta1=0,conta2=0;
    int ancho;
    int posicion[4];
    int largo;
    if(array1[0]+array1[2]>array2[0]+array2[2])
        ancho=array1[0]+array1[2];
    if(array1[1]+array1[3]>array2[1]+array2[3])
        largo=array1[1]+array1[3];
    if(array1[1]+array1[3]<array2[1]+array2[3])
        largo=array2[1]+array2[3];
    if(array1[0]+array1[2]<array2[0]+array2[2])
        ancho=array2[0]+array2[2];
    char array3[largo][ancho];
    for(int j=array1[1];j<array1[3]+array1[1];j++){
        for(int i=array1[0];i<array1[2]+array1[0];i++){
            array3[j][i]='a';
        }
    }
    for(int k=array2[1];k<array2[3]+array2[1];k++){
        for(int l=array2[0];l<array2[2]+array2[0];l++){
            if(array3[k][l]=='a'){
                array3[k][l]='c';}
            else {
                array3[k][l]='b';
            }
        }
    }
    for(int m=0;m<largo;m++){
        conta1=x;
        if(conta1>0){
            y++;
            conta2=x;
            x=0;

        }
        for(int n=0;n<ancho;n++){
            if(array3[m][n]=='c' and var==false){
                posicion[0]=n;
                posicion[1]=m;
                var=true;
            }
            if(array3[m][n]=='c'){
                x++;
            }
        }
    }
    c[0]=posicion[0];
    c[1]=posicion[1];
    c[2]=conta2;
    c[3]=y;


    return;





}

