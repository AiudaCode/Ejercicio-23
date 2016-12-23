
import javax.swing.JOptionPane;

public class Main
{
    public static void main(String[] args)
    {
        //Se crea un objeto de la clase Convertir (Instanciaciación)
        Convertir obj = new Convertir();
        //se define "n" de tipo entero
        int n;
        //Se pide que se digite el numero decimal y se guarda el digito en la variable "n"
        n = Integer.parseInt(JOptionPane.showInputDialog(null, "Digite numero decimal"));
        obj.setNum(n);//se encapsula la variable n
        obj.contarDatos();//se llama al metodo contarDatos()
        obj.toBinary();//se llama al metodo toBinary()

        String datosVector = " ";
        //se recorre el vector desde la posicion ultima hasta la primera
        for(int i = obj.getTam(); i >= 0; i--)
        {
            //se acumula en datosVector los valores en binario que hayan en el vector....
            datosVector = datosVector + String.valueOf(obj.getDatos(i));
        }
        JOptionPane.showMessageDialog(null, "DEC " + obj.getNum() + "\n BIN " + datosVector);
    }
}