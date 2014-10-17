#include "Evaluador.h"
#include <iostream>
using namespace std;

//Devuelve la suma de a (dado) y b (dado)
int sumar(int a, int b)
{
    return a+b;
    // sumamos las variables
}

//Devuelve la resta de a (dado) y b (dado)
int restar(int a, int b)
{
    return a-b ;
    //restamos las variables
}

//Devuelve la multiplicacion de a (dado) y b (dado)
int multiplicar(int a, int b)
{
    return a*b;
    //multiplicamos las variables
}

//Devuelve la division de a (dado) y b (dado)
int dividir(int a, int b)
{
    return a/b;
    //dividimos las variables
}

//Devuelve el numero mayor entre a (dado) y b (dado)
int getMayor(int a, int b)
{
            //creamos un ciclo con if else
            //donde si a es mayor que b devolvemos a
    if (a > b)
    {
    return a;
    }
            //de lo contrario devolvemos a
    else
    {
    return b;
    }

}

//Devuelve el numero mayor entre a (dado) y b (dado)
int getMenor(int a, int b)
{
        //basicamente es lo mismo que el anterior, pero en esta ocacion
        // camiamos el signo > por el <
    if (a< b)
    {return a ;}
    else{return b;}
}

//Devuelve el numero mayor entre a (dado), b (dado) y c (dado)
int getMayor(int a, int b, int c)
{
    //creamos un ciclo con 2 if(idanidado) y agregamos la variable c
    //el primer if pone la condicion de que a debe ser mayor que b "&" que es un and mayor que c
    if ( a > b & a>c )
    {return a;}
    //hacemos lo mismo el la variable b comparandola con las otras 2 variables
    if (b>a & b>c)
    {return b;}
    //si no se cumplen ningunas de las anteriores condiciones devolvemos C
    else
    {return c;}
    // para recordarme de el and lei de la pagina stacksoverflow
}

//Establece el valor (dado) en el arreglo (dado) en el indice posicion (dado)
void setValor(int arreglo[], int valor, int posicion)
{
    //solo ordenamos lo que se nos pide, asignar el valor a la posicion dada del arreglo
arreglo[posicion]=valor;
}

//Obtiene y devuelve el valor del arreglo (dado) en el indice posicion (dado)
int getValor(int arreglo[], int posicion)
{
    //asignamos a el arreglo la variable posicion para que devuelva en este sitio
    return arreglo[posicion];
}

//Devuelve el numero mayor del arreglo (dado) que contiene tamano (dado) elementos
int getMayor(int arreglo[], int tamano)
{
//inicialmente cree 2 variables una de contador y otra que luego nos
//servira para devolver el numero mayor
    int numayor =0;
    int contador;
//con un for indicamos que el contador comienze en 0 y si el contador es menor que la variable pasamos a el siguiente
    for (contador=0; contador<tamano; contador++)
    {
    /*en esta se podria decir que esta todo aqui asignamos a el arreglo que se compare
    con la variable que habiamos creado y como la iniciamos en 0 automaticamente si el numero
    que esta en la posicion de ese arreglo es mayor que 0 lo sustituye*/
    if (arreglo[contador]>numayor)
    {
    numayor=arreglo[contador];
    }
    }
    //al final a el recorrer todo el arreglo va a devolver el numero mayor
    return numayor;
}

//Devuelve el numero menor del arreglo (dado) que contiene tamano (dado) elementos
int getMenor(int arreglo[], int tamano)
{
/* aqui hicimos lo mismo que en el anterior con la excepcion que
cambiamos unos signoas para esta ves ir obteniendo el numero menor
y de que iniciamos la variable "numenor" en 99, depende el numero mayor que creemos
que tengamos podemos darle un valor de inicio a esta variable
yo lo comence en 99 para dar un ejemplo*/
    int numenor=99;
    int contador;
    for (contador=0; contador<tamano; contador++)
    {
    if (arreglo[contador]<numenor)
    {
    numenor = arreglo[contador];
    }
    }
    return numenor;
}

//Devuelve el promedio de los numeros del arreglo (dado) que contiene tamano (dado) elementos
int getPromedio(int arreglo[], int tamano)
{
//creamos 3 variables el contador la suma para ir sumando los elementos de el arreglo
//y el promedio para el nombre lo dice calcular el promedio
   int suma=0;
   int promedio;
   int contador;
//practicamente aqui hacemos lo que en los anteriores, creamos una condicion para ir aumentando
//el contador que luego asgnaremos a el arreglo
   for (contador=0;contador<tamano;contador++)
   {
   //aqui ya vamos sumando los numeros que contiene el arreglo
   suma+=arreglo[contador];
   //para buscar el promedio solo dividimos la suma de lo que hemos obtenido con el anterior proceso
   promedio= suma/tamano;
   }
   //como nos lo pide el programa aqui devolvemos el promedio
return promedio;
}


int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
