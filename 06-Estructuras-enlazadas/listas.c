#include <stdlib.h>

typedef struct nodo {
    int dato;
    struct nodo *ste;
}ST_NODO;

ST_NODO *list = NULL; // Inicia la lista (castear en el main)

ST_NODO *insertInFront(ST_NODO **list, int dato){
    //creacion del nodo
    ST_NODO *nodo = (ST_NODO *) malloc(sizeof(ST_NODO));
    nodo->dato = dato;
    nodo->ste = NULL;

    //insertamos el nuevo nodo a la lista
    nodo->ste = *list;
    *list = nodo;
    return nodo;
}

ST_NODO *insertAtEnd(ST_NODO **list, int dato){
    //creacion del nodo
    ST_NODO *nodo = (ST_NODO *) malloc(sizeof(ST_NODO));
    nodo->dato = dato;
    nodo->ste = NULL;

    //avanza hasta encontrar el ultimo nodo de la lista
    ST_NODO *listAux = *list;
    while(listAux != NULL && listAux->ste != NULL){
        listAux = listAux->ste;
    }

    //contemplamos el caso de que la lista este vacia
    if(listAux == NULL){
        *list = nodo;
    } else {
        //insertamos el nuevo nodo al final de la lista
        listAux->ste = nodo;
    }

    return nodo;
}

ST_NODO *insertOrdered(ST_NODO **list, int dato){
    //creacion del nodo
    ST_NODO *nodo = (ST_NODO *) malloc(sizeof(ST_NODO));
    nodo->dato = dato;
    nodo->ste = NULL;

    ST_NODO *listAux = *list;
    ST_NODO *nodoAnt = NULL;
    while (listAux != NULL && listAux->dato){
        nodoAnt = listAux;
        listAux = listAux->ste;
    }

    if(nodoAnt == NULL){
        *list = nodo;
    } else {
        nodoAnt->ste = nodo;
    }
    
    nodo->ste = listAux;
    return nodo;    
}

ST_NODO * search(ST_NODO *list, int dato){
    ST_NODO *listAux = list;
    while(listAux != NULL && listAux->dato != dato){
        listAux = listAux->ste;
    }
    return listAux;
}

int deleteFirst(ST_NODO **list){
    ST_NODO *nodoAux = *list;
    *list = (*list)->ste;
    int dato = nodoAux->dato;
    free(nodoAux);
    return dato;
}


int delete(ST_NODO **list, int dato){
    ST_NODO *listAux = *list;
    ST_NODO *nodoAnt = NULL;
    while(listAux && listAux->dato != dato){
        nodoAnt = listAux;
        listAux = listAux->ste;
    }

    if(nodoAnt == NULL){
        *list = (*list)->ste;
    } else {
        nodoAnt->ste = listAux->ste;
    }

    int dato = listAux->dato;
    free(listAux);
    return dato;
}

void clearList(ST_NODO **list){
    ST_NODO *nodoAux;
    while(*list != NULL){
        nodoAux = *list;
        *list = (*list)->ste;
        free(nodoAux);
    }
    return;
}


void sortList(ST_NODO **list){
    int dato;
    ST_NODO *newList;
    while(*list != NULL){
        dato = deleteFirst(list);
        insertOrdered(&newList, dato);
    }
    *list = newList;
    return;
}


ST_NODO * insertWithoutDuplicates(ST_NODO **list, int dato){
    ST_NODO *nodo = search(*list, dato);
    if(nodo == NULL){
        nodo = insertOrdered(list, dato);
    }
    return nodo;
}

void printList(ST_NODO *list){
    while(list != NULL){
        printf("Dato: %d\n", list->dato);
        list = list->ste;
    }
    return;
}

//MEDIO PELIGROSO DE USAR
ST_NODO *insertAt(ST_NODO **list, int dato, int pos){
    //creacion del nodo
    ST_NODO *nodo = (ST_NODO *) malloc(sizeof(ST_NODO));
    nodo->dato = dato;
    nodo->ste = NULL;

    ST_NODO *listAux = *list;
    ST_NODO *nodoAnt = NULL;

    for(int i=0; i < pos && listAux != NULL; i++){
        nodoAnt = listAux;
        listAux = listAux->ste;
    }

    if(nodoAnt == NULL){
        *list = nodo;
    } else {
        nodoAnt->ste = nodo;
    }

    nodo->ste = listAux;
    return nodo;
}

ST_NODO * readAt(ST_NODO **list, int pos){
    ST_NODO *listAux = *list;
    ST_NODO *nodo = NULL;
    int i = 0;

    while(i<pos && listAux != NULL){
        nodo = listAux;
        listAux = listAux->ste;
        i++;
    }

    if(i < pos && listAux == NULL){
        return NULL;
    }

    return nodo;
}