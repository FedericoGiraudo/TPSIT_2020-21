#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max 2000

int main() {
  FILE *file1;
  char buf[200], stringa[max];
  char *res;

    printf("Apro il file...\n");
    printf("\n");
    
    file1=fopen("esercizio.csv", "r");
     if( file1==NULL ) {
        perror("Errore in apertura del file\n");
        exit(1);
  }

  while(1) {
    res=fgets(buf, 200, file1);

    for (int i = 0; i < max; i++)
    {
        fscanf("%s",stinga[i])
    }
    
    if( res==NULL )
      break;
    printf("%s", buf);
  }

    printf("\n");
    fclose(file1);

  return 0;
}
