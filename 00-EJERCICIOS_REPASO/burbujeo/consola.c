#include <stdio.h>

void pedirDatos(int arr[], int n){
    for(int i = 0; i < n; i++){
        printf("Ingrese un numero: \n");
        scanf("%i", &arr[i]);
    }
}


void imprimirDatos(int arr[], int n){
    printf("Los numeros ordenados:\n");
    for(int i = 0; i < n; i++){
        printf("%i\n", arr[i]);
    }
}