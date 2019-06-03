/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#include <iostream> // le indica a c++ que utilice la libreria iostream
using namespace std; // usa  un namespace std (standard) el cual contine las palabras reserva cout y cin
int main() //se inicia la funcion principal de main de c++
{ // se apertura el bloque de codigo entre corchetes
 float a, vf, vi, t; // declaracion de valiables a utilizar enteras a, vf, vi, t
 cout << "Ingresa velocidad final"<<endl; /* se solicita por consola que ingrese el primer numero y se lo asigna a la palabra reservada cout*/
 cin >> vf; // ese valor capturado se le asigna a la variable a y realiza un salto de linea
 cout << "Ingresa velocidad inicial"<<endl; // solicita un segundo numero y ejecuta salto de linea
 cin >> vi;  // se asigna valor capturado a la variable b
 cout << "Ingresa el tiempo en minutos"<<endl; /* se solicita por consola que ingrese el primer numero y se lo asigna a la palabra reservada cout*/
 cin >> t; // ese valor capturado se le asigna a la variable a y realiza un salto de linea
 cout <<"La aceleracion debe ser de : "<< (vf-vi)/t <<endl; //resta los dos numeros y realiza salto de linea
 system("pause"); // muestra un mensaje de pausa para que el usuario teclee enter
 return 0; //termina la ejecución del programa, se cambio esta linea  EXIT_SUCCESS; (mostraba error) se cocolo 0
}  //Termina el bloque de codigo de funcion main y termina el programa
