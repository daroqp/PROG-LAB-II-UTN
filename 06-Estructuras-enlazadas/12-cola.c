/*
    Dadas dos colas COLA y COLB (nodo = registro + puntero), 
    desarrollar y codificar un procedimiento que genere una 
    única cola COLAB a partir de ellas. (Primero los nodos de 
    COLA y luego los de COLB).
*/

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

int remover(ST_QUEUE *queue){
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

ST_QUEUE juntarColas(ST_QUEUE *cola, ST_QUEUE *colb){
    ST_QUEUE combiCompleta = create();

    while(!isEmpty(cola)){
        add(&combiCompleta, remove(cola));
    }

    while(!isEmpty(colb)){
        add(&combiCompleta, remove(colb));
    }

    return combiCompleta;
}

int main(){

    ST_QUEUE COLA = create();
    ST_QUEUE COLB = create();

    add(&COLA, 1);
    add(&COLA, 2);
    add(&COLA, 3);
    add(&COLA, 4);

    add(&COLB, 5);
    add(&COLB, 6);
    add(&COLB, 7);
    add(&COLB, 8);


    ST_QUEUE COLAB = juntarColas(COLA, COLB);

    while(!isEmpty(&COLB)){
        printf("numeros %d", remove(&COLB));
    }

    return 0;
}


