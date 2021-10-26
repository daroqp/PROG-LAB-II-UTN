/*
    Dada una pila y un valor I, desarrollar un procedimiento 
    que elimine los 2 primeros nodos de la pila y 
    (Definir parámetros y codificar).
    deje el valor I como primero. 
*/

#include <stdio.h>
#include <stdbool.h>

typedef struct nodo{
    int dato;
    struct nodo *ste;
}ST_NODO;

void create(ST_NODO **pila){
    *pila = NULL;
}

void push(ST_NODO **head, int dato){
    ST_NODO *nodo = (ST_NODO *)malloc(sizeof(ST_NODO));
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

int main(){

    ST_NODO *pila;      //Dos maneras de
    create(&pila);      // inicializar una pila


    push(&pila, 1);
    push(&pila, 2);
    push(&pila, 3);
    push(&pila, 4);

    int valor = 0;
    printf("ingrese el valor I: \n");
    scanf("%d", &valor);
    
    pop(&pila);
    pop(&pila);
    push(&pila, valor);

    while(isEmpty(pila)){
        printf("%d\n", pop(&pila));
    }

    return 0;
}