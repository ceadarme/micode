#include <iostream>
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char * argv[]) 
{  
	double nota1, nota2, nota3, promedio;
	int t=3;
	char salir;
	  	 do
    {
      printf("Desea salir del programa (s/n)?:");
      scanf("%c", &salir);
	cout << "Ingrese primera nota 1: "<<endl;
	cin>> nota1;
	cout << "Ingrese primera nota 2: "<<endl;
	cin>> nota2;
	cout << "Ingrese primera nota 3: "<<endl;
	cin>> nota3;
	promedio=(nota1+nota2+nota3)/t;
	//cout << "Su promedio de notas es : "<<(nota1+nota2+nota3)/t <<endl;
	cout<<"promedio :" <<promedio;
	//cin>> promedio;
	if(promedio>3 && promedio <=5)
	{
		cout << " aprobo materia"<<endl;
	}
	else if (promedio<3)
	{
		cout << "no aprobo materia: "<<endl;
	}
	else 
	{
		cout << "ingreso mal los valores de notas";
	}
	system("pause");
  	getchar();
	 } while((salir != 's') || (salir != 'S'));
	return 0;
}
