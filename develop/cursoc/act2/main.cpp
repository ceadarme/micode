/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//este es un ejemplo de comentario
/*
este es otro ejemplo de comentario
*/
#include <iostream> // le indica a c++ que utilice la libreria iostream
using namespace std; // usa  un namespace std (standard) el cual contine las palabras reserva cout y cin
int main() //se inicia la funcion principal de main de c++
{ // se apertura el bloque de codigo entre corchetes
 int a, b; // declaracion de valiables a utilizar enteras a y b
 cout << "Ingresa el primer numero"<<endl; /* se solicita por consola que ingrese el primer numero y se lo asigna gna
                                            a la palabra reservada cout*/
 cin >> a; // ese valor capturado se le asigna a la variable a y realiza un salto de linea
 cout << "Ingresa el segundo numero"<<endl; // solicita un segundo numero y ejecuta salto de linea
 cin >> b;  // se asigna valor capturado a la variable b
 cout <<"La suma de los numeros es: "<< a+b <<endl; // muestra la suma de los dos numeros recibidos por tecleado y salta de linea
 cout <<"La resta de los numeros es: "<< a-b <<endl; //resta los dos numeros y realiza salto de linea
 cout <<"La multiplicacion de los numeros es: "<< a*b <<endl; /*nos muestra la multiplicacion de
                                              los dos numeros y salta de linea*/
 cout <<"La division de los numeros es: "<< a/b <<endl; /*nos muestra la division de los dos numeros ingresados 
                                                         y realiza un salto de linea*/
 cout <<"El residuo es: "<< a%b <<endl;    //nos muestra el residuo de los dos numeros ingresados y realiza salto de linea
 system("pause"); // muestra un mensaje de pausa para que el usuario teclee enter
 return 0; //termina la ejecución del programa, se cambio esta linea  EXIT_SUCCESS; (mostraba error) se cocolo 0
}  //Termina el bloque de codigo de funcion main y termina el programa


