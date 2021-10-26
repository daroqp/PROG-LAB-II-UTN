/*
    Dada una pila y dos valores X e I, desarrollar 
    un procedimiento que inserte el valor X en la 
    posición I de la pila si es posible. 
    (Definir parámetros y codificar).
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct nodo{
    int dato;
    struct nodo *sgte;
} ST_NODO;

void push(ST_NODO **head, int dato){
    ST_NODO *nodo = (ST_NODO *)malloc(sizeof(ST_NODO));
    nodo->dato = dato;
    nodo->sgte = NULL;

    nodo->sgte = *head;
    *head = nodo;
}

int pop(ST_NODO **head){
    int valor = (*head)->dato;
    ST_NODO *aux = *head;
    *head = (*head)->sgte;
    free(aux);
    return valor;
}

bool isEmpty(ST_NODO *pila){
    return pila == NULL;
}

int main(){

    ST_NODO *pila = NULL;

    push(&pila, 1);
    push(&pila, 2);
    push(&pila, 3);
    push(&pila, 4);
    push(&pila, 5);
    push(&pila, 6);
    
    int pilaLargo=0;
    
    while(!isEmpty(pila)){
        pilaLargo++;
        pila = pila->sgte;
    }
    
    int valor;
    int pos;

    printf("Ingrese el valor X: \n");
    scanf("%d", &valor);

    printf("Ingrese la posicion I: \n");
    scanf("%d", &pos);

    int pilaAux[pilaLargo];
    if(pos < pilaLargo){
        for(int i=0; i < pilaLargo; i++){
            pilaAux[i] = pop(&pila);
        }
    }

    for(int i=0; i<pilaLargo; i++){
        printf("VALORES ALREVEZ %d\n", pilaAux[i]);
    }

    return 0;
}