/*
    Dada una pila desarrollar un procedimiento que 
    ordene la misma de acuerdo al valor de sus nodos
    y la retorne. Solo se deben usar pilas. 
    (Definir parámetros y codificar).
*/

#include <stdio.h>
#include <stdbool.h>

typedef struct nodo {
    int dato;
    struct nodo *ste;
}ST_NODO;

void push(ST_NODO **head, int dato){
    ST_NODO *nodo = (ST_NODO *) malloc(sizeof(ST_NODO));
    nodo->dato = dato;
    nodo->ste = NULL;

    nodo->ste = *head;
    *head = nodo;
}

int pop(ST_NODO **head){
    int valor = (*head)->dato;
    ST_NODO *aux = *head;
    *head = (*head)->ste;
    free(aux);
    return valor;
}

bool isEmpty(ST_NODO *pila){
    return pila == NULL;
}

int main() {

    ST_NODO *pila = NULL;

    push(&pila, 33);
    push(&pila, 2);
    push(&pila, 9);
    push(&pila, 26);
    push(&pila, 13);
    push(&pila, 3);

    ST_NODO *aux = NULL;
    ST_NODO *ordenado = NULL;  

    while(!isEmpty(head)){
        if(ordenado == NULL){
            push(&ordenado, pop(*head));
        }
        int ant = pop(*head);
        int ord = pop(&ordenado);

        if(ant <= ord){
            push(&aux, ant);
            push(&ordenado, ord);
        } else {
            push(&aux, ord);
            push(&ordenado, ant);
        }
        while(!isEmpty(aux)){
            push(&ordenado, pop(&aux));
        }

    }

    return 0;
}