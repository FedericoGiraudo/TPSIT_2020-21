#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <stdbool.h>
#include<time.h>
#define max 200
#define N 10


typedef struct canzone{
 int numero;
 char titolo[max];
 char artista[max]; 
 bool rip;
 struct canzone* next;  
} Canzone;

void Memorizzazione(Canzone* head, FILE* file1);
void Casuale(Canzone* head);

int main() {
  FILE *file1;
  int nrighe,c,valore;
  file1=fopen("esercizio.csv", "r");   // conta righe
  for (c = getc(file1); c != EOF; c = getc(file1)){
      if (c == '\n')
        nrighe = nrighe + 1;
  }

  Canzone *head ;
  head= (Canzone *)malloc(nrighe*sizeof(Canzone));
  
  printf("Apro il file...\n");
  printf("\n");
    
  file1=fopen("esercizio.csv", "r");
    if( file1==NULL ) {
      perror("Errore in apertura del file\n");
      exit(1);
    } 
      else{
        Memorizzazione(head,file1);
        printf("\n................................................\n");
        Casuale(head);
      }
   fclose(file1);
   free(head);

  return 0;
}

void push(Canzone* head, int valore, char *str1, char *str2){
    //Aggiungere un elemento in fondo alla lista contenente il valopre
    Canzone *puntatore_appoggio=head;
    while (puntatore_appoggio->next!=NULL) {
        puntatore_appoggio = puntatore_appoggio->next;
    }
    //Siamo arrivati all'ultimo elemento
    puntatore_appoggio->next=(Canzone*)malloc(sizeof(Canzone));
    puntatore_appoggio->next->numero=valore;
    strcpy(puntatore_appoggio->next->titolo,str1);
    strcpy(puntatore_appoggio->next->artista,str2);
    puntatore_appoggio->next->artista[strlen(puntatore_appoggio->next->artista)-1] = '\0';
    puntatore_appoggio->next->next=NULL;
}

void Memorizzazione(Canzone* head, FILE* file1){
 char riga[max];
 char* field;
 int counter=0;

 while(fgets(riga, max, file1)) {
   int i=0;
   int x=0;
   char puntatore_appoggio[max];
   char str1[max];
   char str2[max];
   const char *c = ",";
   char *field;
 
    while (fgets(puntatore_appoggio,max,file1)){
      if (i==0){
        field = strtok(puntatore_appoggio, c);
        head->numero = atoi(field);

        field = strtok(NULL, c);
        strcpy(head->titolo,field);

        field = strtok(NULL, c);
        strcpy(head->artista,field);
        head->artista[strlen(head->artista)-1] = '\0';

       i=1;
      }
      else {
        field = strtok(puntatore_appoggio, c);
        x=atoi(field);

        field = strtok(NULL, c);
        strcpy(str1, field);

        field = strtok(NULL, c);
        strcpy(str2,field);

        push(head, x, str1, str2);

      }
    }
  }
}


void Casuale(Canzone* head){

 int k,n,w=0;
 Canzone* puntatore_appoggio;
 srand(time(NULL));
 printf("\n");
 printf("riproduzione\n");
 puntatore_appoggio=head;
 while(puntatore_appoggio!=NULL){
    puntatore_appoggio->rip=false;
    puntatore_appoggio=puntatore_appoggio->next;
  }
  for (k=0;k<10;k++){
    do {
      w=0;
      puntatore_appoggio=head;
      n = rand() % 10;
      while(w<n){
      puntatore_appoggio=puntatore_appoggio->next;
      w++;
    }
  }
  while(puntatore_appoggio->rip==true);
    printf("titolo: %s, autore: %s\n", puntatore_appoggio->titolo, puntatore_appoggio->artista);
    puntatore_appoggio->rip=true;
  }
}  	   