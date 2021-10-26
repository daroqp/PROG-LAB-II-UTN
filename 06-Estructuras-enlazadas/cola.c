#include <stdbool.h>

ST_NODO create(){
    ST_NODO *frente;
}

typedef struct{
    ST_NODO *fin;
    ST_NODO *fte;
}ST_QUEUE;


bool remove(ST_QUEUE queue, int cantidad){
    for(int i =0 ; i < cantidad; i++){
        if(isEmpty(queue)){
            return false;
        }
    }
}

int contarNodos(ST_QUEUE *queue){
    int i=0;
    ST_QUEUE aux = create();
    while(!isEmpty(*queue)){
        add(&aux, remove(*queue, 1));
        i++;
    }
    // while(!isEmpty(aux)){
    //     add(queue, remove(&aux));

    // }

    *queue = aux;
    return i;
}