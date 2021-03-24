#include <stdio.h>
#include <stdlib.h>
typedef struct el
{
    int valore;
    struct el* next;
}El;

void push(El* head,  int n);
void stampaLista(El* head);

void push(El* head,  int n){
    head->next = (El*) malloc(sizeof(El));
    head=head->next;
    head->valore=n;
    head ->next = NULL;
}

void stampaLista(El* head)
{
    while (head!= NULL)
    {
    printf("%d - %p\n",head->valore, head->next);
    head = head->next;
    }
    printf("\n");
}
    
int main()
{
    El* head;
    head= NULL;
    int n;
    do
    {  
        printf("Inserisci un naturale o -1 per terminare\n");
        scanf("%d",&n);
        if (n>=0)
        {
            if (head==NULL) //verifichiamo quando lista e uguale a null
            {
                //allochiamo dinamicamende l head
                head = (El*) malloc(sizeof(El));
                head->valore=n;
                head->next=NULL;
                
            }
            else //se abbiamo almeno un elemento
            push(head,n);
        }
    } while (n>=0);  

    stampaLista(head);

    return 0;
}

