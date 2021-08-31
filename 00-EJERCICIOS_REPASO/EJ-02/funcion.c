#include <stdio.h>

int calculoMasAlto(int num, int masAlto){
    if(num > masAlto){
        masAlto = num;
    }
    return masAlto;
}

int calculoMasBajo(int num, int masBajo){
    if(num < masBajo){
        masBajo = num;
    }
    return masBajo;
}

float calculoPromedio(int cant, int sumatoria){
    return sumatoria / cant;
}