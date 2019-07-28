/* 
1.  Inicio [Media con Finarchivo aprenderaprogramar.com]
2.  Mientras Finarchivo = Falso Hacer
i = i + 1
Leer Nota(i)
Suma = Suma + Nota(i)
Rpetir
3.  Media = Suma / i
4.  Mostrar “La nota media de la clase es”, Media
5.  Fin*/
#include <stdio.h>
#include <stdlib.h>
#define NUMELEMENTOS 50
// Ejercicios resueltos aprenderaprogramar.com
int main() {
    int i=0;
    double nota[NUMELEMENTOS];
    double suma=0.0;
    double media=0.0;
    FILE* fichero;
    fichero = fopen("notas.dat", "rt");
    while (!feof(fichero)) {
        fscanf (fichero, "%lf", &nota[i]);
        suma = suma + nota[i];
        i = i+1; //Valor final de i será 35
    }
    fclose(fichero);
    media = suma/i;
    printf ("La media es %lf", media);
    return 0;
}
