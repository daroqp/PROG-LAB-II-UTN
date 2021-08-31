#include <stdio.h>
#include "consola.h"
#include "burbujeo.h"

int main(){
    int n = 10;
    int arr[n];

    pedirDatos(arr, n);
    burbujeoMejorado(arr, n);
    imprimirDatos(arr, n);

    return 0;
}