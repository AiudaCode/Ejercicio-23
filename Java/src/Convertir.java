public class Convertir
{
    //se definen los atributos privados de la clase
    private int num;//"num" de tipo entero
    private int tam;//"tam" de tipo entero
    private int datos[];//el vector *datos de tipo entero
    
    public Convertir()
    {
        //se definen los valores de 0 por defecto en el constructor de la clase
        // a "num" y "tam"
        num = 0;
        tam = 0;
        datos = null;
    }

    //Implementacion del metoodo crearVector
    public void crearVector()
    {
        //se crea una nueva instancia al vector "datos" y tendra un tamaño de "tam"
        datos = new int[tam];
    }

    //Implementacion del metodo contarDatos
    public void contarDatos()
    {
        //definimos una variable "aux" de tipo entero y se inicializa en "num"
        int aux = num;
        //se definen "pos" de tipo entero y se inicializa en 0, y "res"
        int pos = 0, res;

        //si el "num" que se digito es igual a 1 entonces:
        if(num == 1 || num == 0)
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
    public void toBinary()
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
    public void setNum(int n)
    {
        num = n;
    }

    public int getNum()
    {
        return num;
    }

    void setDatos(int p, int n)
    {
        datos[p] = n;
    }

    public int getDatos(int p)
    {
        return datos[p];
    }

    public void setTam(int n)
    {
        tam = n;
    }

    public int getTam()
    {
        return tam;
    }
}