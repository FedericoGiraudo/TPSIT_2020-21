#include <stdio.h>
#include <stdlib.h>

typedef struct carte{
    struct carte *next;
    int val;
    char seme;
}Carte;

int isEmpty(struct carte *head){
    if(head == NULL)
        return 1;
    else
        return 0;   
}

void enqueue(struct carte **head, struct carte **tail, struct carte *element){//inserire nella coda una carta
    if(isEmpty(*head))
        *head = element;
    else
        (*tail)->next = element;

    *tail = element;
    element->next = NULL;
}

struct carte *dequeue(struct carte **head, struct carte **tail){ //togliere dalla coda una carta
    struct carte *ret = *head;

    if(isEmpty(*head))
        return NULL;
    else
        *head = ret->next;

    if(*head == NULL)
        *tail = NULL;
    
    return ret;
}

void setCarte(struct carte seme,struct carte **head, struct carte **tail){

    for (int nSem=0; nSem<4; nSem++){       //asegno a ogni numero il suo corrispostivo segno
    
        if (sSem==0){
            seme='C';
        }
        if (nSem==1){
            seme='Q';
        }
        if (nSem==2){
            seme='P';
        }
        if (nSem==3){
            seme='F';
        }
        for (i=1; i<14; i++){
            Carte element = (Carte)malloc(sizeof(Carte));
            element->valore=i;
            element->seme = seme;
            enqueue(&head, &tail, element);
        }
    }

}

void main(){
    struct queue_node *head = NULL;
    struct queue_node *element = NULL;
    struct queue_node *tail = NULL;

    if(seme==C || seme==D){
        enqueue
    }
    else{
        dequeue
    }


}

