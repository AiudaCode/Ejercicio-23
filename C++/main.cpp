#include <iostream>
#include "Convertir.h"

using namespace std;

int main()
{
    //Se crea un objeto de la clase Convertir (Instanciaciación)
    Convertir* obj = new Convertir();
    //se define "n" de tipo entero
    int n;
    //Se pide que se digite el numero decimal
    cout << "Digite numero decimal" << endl;
    cout << ">> ";
    //se guarda el digito en la variable "n"
    cin >> n;
    obj->setNum(n);//se encapsula la variable n
    obj->contarDatos();//se llama al metodo contarDatos()
    obj->crearVector();//se llama al metodo crearVector()
    obj->toBinary();//se llama al metodo toBinary()

    //se muestra el numero decimal
    cout << "DEC " << obj->getNum() << endl;
    //se muestra el texto "BIN" (BINARIO)
    cout << "BIN ";
    //se recorre el vector desde la posicion ultima hasta la primera
    for(int i = obj->getTam(); i >= 0; i--)
    {
        //se muestra el valor en binario que haya en cada posicion (0 ó 1)
        cout << obj->getDatos(i);
    }
    return 0;
}
