/*
 * Dada una cola (nodo = registro + puntero), desarrollar y codificar una 
 * función que devuelva la cantidad de nodos que tiene.
 * 10 y 11
 */

#include <stdio.h>
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
    int valor = aux->ste;
    queue->frente = aux;
}

bool isEmpty(ST_QUEUE *queue){
    return queue->frente == NULL && queue->fin == NULL;
}

int main(){

    ST_QUEUE queue = create();

    add(&queue, 1);
    add(&queue, 2);
    add(&queue, 3);
    add(&queue, 4);

    printf("cantidad en la cola: ", cantidadDeNodos(&queue));

    return 0;
}

int cantidadDeNodos(ST_QUEUE *queue){
    int contador = 0;
    ST_QUEUE aux = create();
    while(!isEmpty(queue)){
        contador++;
        add(&aux, remove(queue));
    } 

    return contador;
}