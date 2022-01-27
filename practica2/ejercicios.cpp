
#include <iostream>
using namespace std;
void fun_a(int *px, int *py);
void fun_b(int a[], int tam);
int main()
{
int array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
int *ptr=array;
cout<<ptr<<endl;
fun_b(array, 10);
}
void fun_a(int *px, int *py){
int tmp = *px;
*px = *py;
*py = tmp;
}
void fun_b(int a[], int tam){
int f, l;
int *b = a;
for (f = 0, l = tam -1; f < l; f++, l--) {
fun_a(&b[f], &b[l]);
}
}
 //solucion teoricos
 //ejercicio 1
// 1.1 es la direccion del primer elemento que tiene el arreglo, en posicion[0]
