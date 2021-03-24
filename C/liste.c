//Liste autoreferenziali

#include <stdio.h>
#include <stdlib.h>

typedef struct nodo{
    int val;
    struct nodo* next;
}Nodo;

void push(Nodo* head, int valore){
    //Aggiungere un elemento in fondo alla lista contenente il valopre
    Nodo *puntatore_appoggio=head;
    while (puntatore_appoggio->next!=NULL) {
        puntatore_appoggio = puntatore_appoggio->next;
    }
    //Siamo arrivati all'ultimo elemento
    puntatore_appoggio->next=(Nodo*)malloc(sizeof(Nodo));
    puntatore_appoggio->next->val=valore;//puntatore_appoggio->next ha valenza di nome dell'ultimo elemento
    puntatore_appoggio->next->next=NULL;
}


int main() {
    struct nodo * primo_elemento;
    struct nodo* secondo_elemento;
    struct nodo* terzo_elemento;
    primo_elemento=(Nodo*)malloc(sizeof(Nodo));

    primo_elemento->val=1;
    primo_elemento->next=NULL;
    push(primo_elemento,2);

    Nodo *puntatore_appoggio;
    puntatore_appoggio=primo_elemento;
    while (puntatore_appoggio!=NULL){
        printf("Il valore e': %d", puntatore_appoggio->val);
        puntatore_appoggio=puntatore_appoggio->next;
    }

    return 0;
}
