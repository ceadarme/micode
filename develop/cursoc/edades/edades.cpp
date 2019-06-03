#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main()
{
    int a = 0; //inicializo variable que almacena la edad que digitara el usuario
    cout << "Ingrese la edad: "; // se solicita a usuario por consola que digite la edad
    cin >> a;  // almacena la edad en variable a
    if(a > 0 && a <= 6) // condicional doble se evalua si la edad esta en rango mayor que 0 y menor que 6
    {
        cout << "El chaval pertenece a la primera infancia";  // envia mensaje que el niño esta en primera infancia
    }
    else if(a > 6 && a<= 12)  // condicional doble se evalua si la edad esta en rango mayor que 6 y menor que 12
    {
        cout << "El chaval pertenece a la segunda infancia."; // envia mensaje indicando que el niño esta en segunda infancia
    }
 	else if(a > 12 && a<= 18)   // condicional doble se evalua si la edad esta en rango mayor que 12 y menor que 18
    {
        cout << "se trata de un joven adolescente."; // envia mensaje indicando que la edad es de un joven adolescente
    }
    system("PAUSE");
     return 0; //termina la ejecución del programa, se cambio esta linea  EXIT_SUCCESS; (mostraba error) se cocolo 0
}  //Termina el bloque de codigo de funcion main y termina el programa
