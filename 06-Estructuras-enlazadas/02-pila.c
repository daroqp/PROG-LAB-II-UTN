/*
    Dada una pila y un valor I, desarrollar un procedimiento 
    que inserte I como tercer valor de la pila. 
    (Definir parámetros y codificar).
*/

#include <stdio.h>
#include <string.h>

typedef struct nodo{
    int dato;
    struct nodo *sgt;   
}ST_NODO;

void push(ST_NODO **head, int dato){
    ST_NODO *nodo = (ST_NODO *) malloc(sizeof(ST_NODO));
    nodo->dato = dato;
    nodo->sgt = NULL;

    nodo->sgt = *head;
    *head = nodo;
}

int main(){

    FILE *pila = NULL;

    push(&pila, 1);
    push(&pila, 2);

    int I = 3;
    push(&pila, I);

    return 0;
}