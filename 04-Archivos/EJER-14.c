#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    int codigo;
    char autor[20];
    char stock;
    char titulo[30];
    char editorial[20];
    char genero[10];
}ST_LOCAL;

typedef struct {
    int codigo;
    unsigned char stock;
}ST_DEPOSITO;


int main(){

    ST_LOCAL local;
    ST_DEPOSITO deposito;

    FILE * ptrStockEnLocal = fopen("StockEnLocal.dat", "rb");
    FILE * ptrStockEnDeposito = fopen("StockEnDeposito.dat", "rb");
    FILE * listado = fopen("ListadoOrdenado.dat", "wb");

    fread(&local, sizeof(local), 1, ptrStockEnLocal);
    fread(&deposito, sizeof(deposito), 1, ptrStockEnDeposito);

    while(!feof(ptrStockEnLocal) && !feof(ptrStockEnDeposito)){
        
    }

    return 0;
}

//atoi para pasar de char a int