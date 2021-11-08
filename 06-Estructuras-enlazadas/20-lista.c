/*
    Dadas dos listas LISTA y LISTB (nodo = registro + puntero), 
    desarrollar y codificar un procedimiento que genere una única 
    lista LISTC a partir de ellas. (Primero los nodos de LISTA y 
    luego los de LISTB).
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct nodo {
    int dato;
    struct nodo *ste;
}ST_NODO;

ST_NODO *insertInFront(ST_NODO **list, int dato){
    ST_NODO *nodo = (ST_NODO *)malloc(sizeof(ST_NODO));
    nodo->dato = dato;
    nodo->ste = NULL;

    nodo->ste = *list;
    *list = nodo;
    return nodo;
}

ST_NODO *insertAtEnd(ST_NODO **list, int dato){
    ST_NODO *nodo = (ST_NODO *)malloc(sizeof(ST_NODO));
    nodo->dato = dato;
    nodo->ste = NULL;

    ST_NODO *listAux = *list;
    while(listAux != NULL && listAux->ste != NULL){
        listAux = listAux->ste;
    }
    if(listAux == NULL){
        *list = nodo;
    } else {
        listAux->ste = nodo;
    }
}



int main(){

    ST_NODO *list = NULL; //Se inicializa como una pila

    


    return 0;
}