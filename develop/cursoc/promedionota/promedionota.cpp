#include <iostream> 
#include <stdlib.h> 
using namespace std; 
	int main() 
		{	 
			double nota1, nota2, nota3, promedio;
			int t=3;
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
			if(promedio>=3 && promedio <=5)
			{
				cout << " aprobo materia"<<endl;
			}
			else if (promedio<3)
			{		
				cout << " no aprobo materia: "<<endl;
			}
			else 
			{	
				cout << " ingreso mal los valores de notas";
			}
			system("pause"); 
			return 0; 
		} 
