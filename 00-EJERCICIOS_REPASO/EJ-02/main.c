#include <stdio.h>
#include "funcion.h"

//Agregado
// Que se permita arreglar despoues de un corte
// Corte al finzalizar despueds de cargar todods

int main(){

    char corte = 'a';
    int num = 0;
    int masAlto = 0;
    int masBajo = 0;
    int cant = 0;
    int sumatoria = 0;

    while(corte != 'e'){
        
        printf("Ingrese un numero: \n");
        scanf("%i", &num);

        sumatoria= sumatoria + num;
        cant++;
        
        masAlto = calculoMasAlto(num, masAlto);
        masBajo = calculoMasBajo(num, masBajo);

        
        printf("Desea salir? presione e \n");
        scanf("%c", &corte);
    }

    float prom = calculoPromedio(cant, sumatoria);

    printf("El numero mas alto es: %i\n", &masAlto);
    printf("El numero mas bajo es: %i\n", &masBajo);
    printf("El promedio es: %f\n", &prom);

    return 0;
}