#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max_num_contatti 1024

typedef struct 
{
    int id;
    char nome[64];
    char numero[16];
}Contatto;

typedef struct 
{
    int num_inseriti;
    Contatto db[max_num_contatti];
    
}Rubrica;


/* crea un contatto nella rubrica puntata da r  al primo posto disponibile
 con nome e numero specificati. Ritorna zero in caso di successo,-1 altrimenti.
 Non controlla la lunghezza delle stringhe */

void Inserisci(Rubrica *r,char *nome, char *numero)
{
    Contatto *p;
    if (r->num_inseriti == max_num_contatti){
        printf("rubrica piena");
        return -1;
    }
    p=&r->db[r->num_inseriti];      //punta la rima area di memoria disponibile
    strcpy(p->nome, nome );         //copia il nome
    strcpy(p->numero, numero);      //copia il numero
    p->id = r->num_inseriti;        //assegno l'indice
    r->num_inseriti++;              //aumenta numero contatti
    return 0;                       //tutto ok
}

void *trova_numero_da_nome(Rubrica *r,char *nome){
    int i;
    Contatto *p;
    for ( i = 0; i < max_num_contatti; i++){
      if (i== r->num_inseriti)  
          break;                            //stop se abbiamo ragiiunto l'ultimo

          p=&r->db[i];                      //punto l'i-esimo contatto

          if (strcmp(p->nome, nome)==0)
              return p->numero;             //ritorno il num se i nomi coincidono
    }
    return NULL;
}

void stampa_rubrica(Rubrica *r){
    int i;
    Contatto *p;

    printf("\n stampa rubrica: %d contatti \n",r->num_inseriti);
    for ( i = 0; i < max_num_contatti; i++)
    {
        if (i== r->num_inseriti)
        break;

        p=&r->db[i];

        printf("%s,%s\n",p->nome, p->numero);
        
    }
}


int main(){
    int input;
    char* nome;
    char* numero;
    Rubrica rubrica;
    Contatto *p;
   // rubrica->num_inseriti = 0;

    printf("inserire\n 1)per inserire numero\n 2)trovare numero\n 3)stampare rubrica\n ");
    scanf("%d",input);

    switch (input )
    {
    case 1:
            printf("\nInserimento dati.\n");
			printf("\nInserisci nome... ");
			scanf("%s", nome);
			printf("\nInserisci numero di telefono... ");
			scanf("%s", numero);
			Inserisci(&rubrica, nome, numero);
			printf("\nInserito.");

            main();
        
        break;

    case 2:
        printf("\nTrova contatto.\n");
		printf("Inserisci il nome... ");
		scanf("%s", nome);
		trova_numero_da_nome(&rubrica, nome);
		printf("\nNumero telefonico di %s:", nome);
		printf("%s", p->numero);

        main();
        break;

    case 3:
        printf("\n");
		stampa_rubrica(&rubrica);

        break; 
        default:
         printf("Error! operator is not correct");
         main();
    }
   
}