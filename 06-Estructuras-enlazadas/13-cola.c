

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct nodo {
    int dato;
    struct nodo *ste;
}ST_NODO;

typedef struct queue{
    ST_NODO *frente;
    ST_NODO *fin;
}ST_QUEUE;

ST_QUEUE create(){
    ST_QUEUE queue;
    queue.frente = NULL;
    queue.fin = NULL;
    return queue;
}

void add(ST_QUEUE *queue, int dato){
    ST_NODO *nodo = (ST_NODO *) malloc(sizeof(ST_NODO));
    nodo->dato = dato;
    nodo->ste = NULL;

    if(queue->frente == NULL){
        queue->frente = nodo;
    } else {
        queue->fin = nodo;
    }

    queue->fin = nodo;
    return;
}

int remove(ST_QUEUE *queue){
    ST_NODO *aux = queue->frente;
    int valor = aux->dato;
    queue->frente = aux->ste;

    if(queue->frente == NULL){
        queue->fin = NULL;
    }
    free(aux);
    return valor;
}

bool isEmpty(ST_QUEUE *queue){
    return queue->frente == NULL && queue->fin == NULL;
}


int main(){

    

    return 0;
}