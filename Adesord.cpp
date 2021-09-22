#include <iostream>
using namespace std;
#define MAX 20

void inserta_d(int A[], int &tope, int dato); //prototipo
void imprime(int A[], int tope);

int main(){
    int tope = -1;
    int A[MAX], dato, op;

    do{
        system("cls");
        cout<<"OPERACIONES CON ARREGLOS DESORDENADOS -----------"<<endl;
        cout<<"1. Insertar un elemento"<<endl;
        cout<<"2. Eliminar un elemento"<<endl;
        cout<<"3. Modificar un elemento"<<endl;
        cout<<"4. Lista los elementos"<<endl;
        cout<<"0. Salir"<<endl;
        cout<<"Elija una opcion: "; cin>>op; cout<<endl;
        switch(op){
            case 1:
                cout<<"Ingrese de dato a insertar: "; cin>>dato;
                inserta_d(A, tope, dato);
            break;
            case 4:
                imprime(A, tope);
            break;
            default:
                cout<<"Opcion no valida";
            break;
        }
        system("pause");
    }while(op != 0);
    return 0;
}

void inserta_d(int A[], int &tope, int dato){
    if (tope == MAX - 1){
        cout<<"Arreglo lleno";
    }
    else{
        tope = tope + 1;
        A[tope] = dato;
    }
}

void imprime(int A[], int tope){
    for(int i = 0; i <= tope; i++)
        cout<<A[i]<<endl;
}
