#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() 
{
int a, i; // declaracion de valiables a utilizar enteras a y i
 cout << "Ingresa un número entre 1 y 10 "<<endl; /* se solicita por consola que ingrese el primer numero y se lo asigna gna
                                            a la palabra reservada cout*/
 cin >> a; // ese valor capturado se le asigna a la variable a y realiza un salto de linea
 for(int i=0;i <= 10; i++) // reliza un ciclo de i que sera el multiplicador de a para formar las tablas
{//Notemos que escribir a++ es similar a escribir a = a + 1
    cout << a << endl;
     cout <<"La multiplicacion de los numeros es: "<< a*i <<endl; /*nos muestra la multiplicacion de
                                              los dos numeros y salta de linea*/
}
  system("pause"); // muestra un mensaje de pausa para que el usuario teclee enter
 return 0; //termina la ejecución del programa, se cambio esta linea  EXIT_SUCCESS; (mostraba error) se cocolo 0
}  //Termina el bloque de codigo de funcion main y termina el programa	return 0;

