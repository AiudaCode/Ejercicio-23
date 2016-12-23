#ifndef CONVERTIR_H
#define CONVERTIR_H


class Convertir
{
    public:
        Convertir();
        virtual ~Convertir();
        //se definen los metodos publicos:
        void contarDatos();//contarDatos() tendra la funcion de contar el tamaño del vector
        void crearVector();//crearVector() se le asigna el tamaño que haya contado el metodo contarDatos()
        void toBinary();//convertira a binario

        //se definen los metodos Setters y Getters de la clase
        void setNum(int n);
        int getNum();
        void setTam(int n);
        int getTam();
        void setDatos(int p, int n);
        int getDatos(int p);
    protected:

    private:
        //se definen los atributos privados de la clase
        int num;//"num" de tipo entero
        int tam;//"tam" de tipo entero
        int *datos;//el vector *datos de tipo entero
};

#endif // CONVERTIR_H
