#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#define MAX 40
#define N 20        //definisco la lunghezza di un array

typedef struct{
    char mese[N];
    int giorno;
    int id_post;
    int like;
}Post;

void Memorizzazione(Post* immagine, FILE* fp);
void Stampa(Post* immagine,int nrighe);

int main(){
    FILE* fp;
    int nrighe,c;
    fp=fopen("instagram.csv", "r");   //conteggio righe del file
    for (c = getc(fp); c != EOF; c = getc(fp)){
          if (c == '\n')
         nrighe = nrighe + 1;
    }

    Post *immagine ;  // array che contiene tutte le struct dei post

    immagine= (Post *)malloc(nrighe*sizeof(Post)); //utilizzo la malloc per creare un array dinamico
    printf("Apro il file...\n");
    printf("\n");
    
    fp=fopen("instagram.csv", "r");     //apertura file
     if( fp==NULL ) {
         perror("Errore in apertura del file\n");
         exit(1);
        } 
         else{
             Memorizzazione(immagine,fp);       //esecuzio
             Stampa( immagine, nrighe);
            }
   fclose(fp);
   free(immagine);

  return 0;
}

void Memorizzazione(Post* immagine, FILE* fp){
    char riga[MAX];
    char* field;
    int counter=0;
    while(fgets(riga, MAX, fp)) {              //finchè ci sono righe da leggere (ovvero finchè non sono arrivato alla fine del file) 

     field=strtok(riga,",");
     strcpy((immagine+counter)->mese,field);

     field=strtok(NULL,",");
     (immagine+counter)->giorno =atoi(field);       // lo leggo prendendolo come decimale (atoi converte da stringa a decimale)
                                                    //salvo la variabile nella parte apposita all'interno della struct

     field=strtok(NULL,",");
     (immagine+counter)->id_post =atoi(field);

     field=strtok(NULL,",");
     (immagine+counter)->like =atoi(field);

     counter++;
    }
}

void Stampa(Post* immagine,int nrighe){
    char smese[N];
    int k,numpost=0,numlike=0;

    printf("inserire un mese: ");
    scanf("%s",&smese);
    
    for(k=0;k<(nrighe-1);k++){
        if(strcmp((immagine+k)->mese,smese)==0){
            numpost++;
            numlike=numlike+(immagine+k)->like;
        }
    }
    printf("npost: %d\n", numpost);
    printf("nlike: %d", numlike);
}