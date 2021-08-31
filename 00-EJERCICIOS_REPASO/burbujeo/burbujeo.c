#include <stdio.h>
#include<stdbool.h>

void burbujeoMejorado(int arr[], int n){
    int aux;
    int i = 0;
    bool ordenado = false;
    while (i < n && !ordenado){
        ordenado = true;
        
        for (int j = 0; j < n - i - 1; j++){
            if (arr[j] > arr[j + 1]){
                aux = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = aux;
                ordenado = false; 
            }
        }
        i++;
    }
}


// 10 num al usuario
// ordenarlos y mostrarlos ordenados
// mostras pedir datos por consola.h
// burbuja mejorada