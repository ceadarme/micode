#include <iostream> 
#include <stdlib.h> 
using namespace std; 
typedef enum respuesta{si, no}; 
respuesta preguntaSiNo()
{ 
	cout<<"Desea continuar? Teclee si, para continuar o no para salir "; 
	char resp[3]; 
	cin>>resp; 
	if((resp[0]=='s'||resp[0]=='S')&&(resp[1]=='i'||resp[1]=='I')) return si; 
	else return no; 
} 
	int main() 
	{ 
	do 
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
			cout<<"promedio :" <<promedio;

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
		} 
			while(preguntaSiNo()==si); 
			system("pause"); 
			return 0; 
	} 
