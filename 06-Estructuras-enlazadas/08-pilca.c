/*
    Definir una función INVERSA que evalúe dos conjuntos
    de caracteres separados por un punto y retorne True
    si los conjuntos son inversos (ej: ABcDe.eDcBA) o 
    False si no lo son. Los conjuntos deben ingresarse
    por teclado. (Definir parámetros y codificar).
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef struct{
    char nombre[20];
    char apellido[20];
}ST_PERSONA;

typedef struct nodo{
    ST_PERSONA persona;
    struct nodo *sgt;
}ST_NODO;

void push(ST_NODO **head, ST_PERSONA persona){
    ST_NODO *nodo = (ST_NODO *)malloc(sizeof(ST_NODO));
    strcpy(nodo->persona.nombre, persona.nombre);
    strcpy(nodo->persona.apellido, persona.apellido);
    nodo->sgt = NULL;

    nodo->sgt = *head;
    *head = nodo;
}

ST_PERSONA pop(ST_NODO **head){
    ST_PERSONA valor = (*head)->persona;
    ST_NODO *aux = *head;
    *head = (*head)->sgt;
    free(aux);
    return valor;
}

bool isEmpty(ST_NODO **pila){
    return pila == NULL;
}

int main(){

    ST_NODO *pila = NULL;
    ST_PERSONA persona;

    printf("Ingrese el nombre:\n");
    scanf("%s", persona.nombre);
    fflush(stdin);
    printf("Ingrese el apellido:\n");
    gets(persona.apellido);

    while(strcmp(persona.nombre,"c") != 0){
        push(&pila, persona);
        printf("Ingrese el nombre:\n");
        scanf("%s", persona.nombre);
        fflush(stdin);
        printf("Ingrese el apellido:\n");
        scanf("%s", persona.apellido);
    }

    // while(!isEmpty(pila)){
    // }

        ST_PERSONA p = pop(&pila);
        printf("%s %s", p.nombre, p.apellido);
    return 0;
}