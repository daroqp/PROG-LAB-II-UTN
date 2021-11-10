/*
    Dada una lista (nodo = registro + puntero), desarrollar y 
    codificar una función que devuelva la cantidad de nodos que tiene.
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct nodo {
    int dato;
    struct nodo *ste;
}ST_NODO;



ST_NODO *insertInFront(ST_NODO **list, int dato){
    //creacion del nodo
    ST_NODO *nodo = (ST_NODO *) malloc(sizeof(ST_NODO));
    nodo->dato = dato;
    nodo->ste = NULL;

    //insertamos el nuevo nodo a la lista
    nodo->ste = *list;
    *list = nodo;
    return nodo;
}

int main(){

    ST_NODO *list = NULL;
    
    

    return 0;
}