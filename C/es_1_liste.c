#include <stdio.h>
#include <stdlib.h>
struct El
{
    int valore;
    struct El* next;
};

int main()
{
    int n;
    struct El* lista;
    struct El* l;
    lista=NULL; //impostiamo lista uguale a null

    do
    {  
        printf("Inserisci un naturale o -1 per terminare\n");
        scanf("%d",&n);
        if (n>=0)
        {
            if (lista==NULL) //verifichiamo quando lista e uguale a null
            {
                //allochiamo dinamicamende l head
                lista = (struct El*) malloc(sizeof(struct El));

                l = lista;
            }
            else //se abbiamo almeno un elemento
            {
                //mette il numero intero ad un nuovo nodo e lo fa puntare da quello precedente

                l->next = (struct El*) malloc(sizeof(struct El));

                l = l->next;
            }
            l->valore = n; //imposta il valore del nodo a n
            l->next = NULL; //imposta next a null
        }
    } while (n>=0);

    l=lista; //torna all head
    printf("numeri inseriti: ");

    while (l!=NULL)
    {
        printf("%d - %p \n",l->valore, l->next);
        l=l->next; //l prende il valore al prossimo elemento
    }

    printf("\n");
    return 0;
}