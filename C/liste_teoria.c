typedef struct node
{
    int valore;
    struct node *next;
}Node;

void stampaLista(Node* head)
{
    //funzione ricorsiva 
    if (head == NULL)
        printf("la lista e vuota\n");
    else
    {
        printf("il valore e: %d\n",head->valore);
        stampaLista(head->next);
    }
}


int lunghezzaLista_iterativa(Node* head)
{
    int cont = 0;
    while (head != NULL)
    {
        cont++;
        head = head->next;
    }
    return cont;
}

int lunghezzaLista_ricorsiva(Node* head)
{
    if(head == NULL)
        return 0;
    else
        return 1 +lunghezzaLista_ricorsiva(head->next);
    
}

void dealloca(Node* head)
{
    if(head != NULL)
    {
        dealloca(head->next);
        free(head);
    }
}

//------------------------------------------------------------------------//


int is_empty(Node *head)
{
    if(head == NULL)return 1;
    else return 0;
}

void push(Node **head,Node* elemento)
{
    if(is_empty(*head)){
        *head = elemento;
        elemento->next = NULL;
    }
    else{
        elemento->next = *head;
        *head = elemento;
    }
}

Node* pop(Node **head){
    Node* ret = *head;
    if(is_empty(*head)){
        return NULL;
    }
    else{
        *head = ret->next;
    }
    return ret;
}