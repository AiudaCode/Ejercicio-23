#include "Convertir.h"

Convertir::Convertir()
{
    //se definen los valores de 0 por defecto en el constructor de la clase
    // a "num" y "tam"
    num = 0;
    tam = 0;
}

Convertir::~Convertir()
{
    //dtor
}

//Implementacion del metoodo crearVector
void Convertir::crearVector()
{
    //se crea una nueva instancia al vector "datos" y tendra un tamaño de "tam"
    datos = new int[tam];
}

//Implementacion del metodo contarDatos
void Convertir::contarDatos()
{
    //definimos una variable "aux" de tipo entero y se inicializa en "num"
    int aux = num;
    //se definen "pos" de tipo entero y se inicializa en 0, y "res"
    int pos = 0, res;

    //si el "num" que se digito es igual a 1 entonces:
    if(num == 1)
    {
        //al setTam se le asignara 0 (sera la primera posicion del vector datos)
        setTam(0);
    }
    else if(num == 0)//sino, si num es igual a 0 entonces:
    {
        //al setTam se le asignara 0 (sera la primera posicion del vector datos)
        setTam(0);
    }
    else//sino
    {
        //haga esto:
        do
        {
            //se le asigna el residuo de "aux" entre "2" a la variable "res"
            res = aux%2;
            //se incrementa pos
            pos++;
            //se le asigna la division de "aux" entre 2 a la variable "aux"
            aux = aux / 2;
        }
        while(aux != 1);//mientras aux sea diferente de 1, dejara de hacer eso...
        setTam(pos);//se le asigna a setTam, el valor de pos (sera la posicion del vector)
    }
}

//Implementacion del metodo toBinary
void Convertir::toBinary()
{
    //definimos una variable "aux" de tipo entero y se inicializa en "num"
    int aux = num;
    //se definen "pos" de tipo entero y se inicializa en 0, y "res"
    int pos = 0, res;

    //si el "num" que se digito es igual a 1 entonces:
    if(aux == 1)
    {
        //se le asigna 1 en la posicion 0 del vector "datos"
        datos[0] = 1;
    }
    else if(aux == 0)//sino, si num es igual a 0 entonces:
    {
        //se le asigna 1 en la posicion 0 del vector "datos"
        datos[0] = 0;
    }
    else//sino
    {
        //haga esto:
        do
        {
            //se le asigna el residuo de "aux" entre "2" a la variable "res"
            res = aux%2;
            //se le asigna el residuo "res" en la posicion "pos" del vector "datos"
            datos[pos] = res;
            //se incrementa pos
            pos++;
            //se le asigna la division de "aux" entre 2 a la variable "aux"
            aux = aux / 2;
            if(aux == 1)//si aux es igual a 1 entonces
            {
                //se le asigna 1, en la posicion "pos" del vector "datos"
                datos[pos] = 1;
            }
        }
        while(aux != 1);//mientras aux sea diferente de 1, dejara de hacer eso...
    }
}

//Implementacion de los metodos Setters y Getters de los atributos de la clase....
void Convertir::setNum(int n)
{
    num = n;
}

int Convertir::getNum()
{
    return num;
}

void Convertir::setDatos(int p, int n)
{
    datos[p] = n;
}

int Convertir::getDatos(int p)
{
    return datos[p];
}

void Convertir::setTam(int n)
{
    tam = n;
}

int Convertir::getTam()
{
    return tam;
}
