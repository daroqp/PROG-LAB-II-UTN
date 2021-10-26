/*
 Definir una función INVERSA que evalúe dos conjuntos de caracteres separados
 por un punto y retorne True si los conjuntos son inversos (ej: ABcDe.eDcBA)
 o False si no lo son. Los conjuntos deben ingresarse por teclado. 
 (Definir parámetros y codificar).
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct nodo {
    char letra;
    struct nodo *sgt;
}ST_NODO;

void push(ST_NODO **head, char dato){
    ST_NODO *nodo = (ST_NODO *)malloc(sizeof(ST_NODO));
    nodo->letra = dato;
    nodo->sgt = NULL;

    nodo->sgt = *head;
    *head = nodo;
}

char pop(ST_NODO **head){
    int valor = (*head)->letra;
    ST_NODO *aux = *head;
    *head = (*head)->sgt;
    free(aux);
    return valor;
}


int main(){

    ST_NODO *pila = NULL;

    char letra;
    printf("Ingresar letra:\n");
    scanf("%c", &letra);

    while(letra != '.'){
        push(&pila, letra);
        
        printf("Ingresar letra:\n");
        scanf("%c", &letra);
    }

    printf("Ingresar otra letra:\n");
    scanf("%c", &letra);

    char elemento;
    elemento = pop(&pila);

    while(pila != NULL && letra == elemento){
        printf("Ingresar otra letra:\n");
        scanf("%c", &letra);
        elemento = pop(&pila);
    }

    printf("%s", letra == elemento ? "isTrue" : "isFalse");

    return 0;
}