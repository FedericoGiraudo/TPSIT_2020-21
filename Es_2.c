#include <stdio.h>
#include <stdlib.h>


int main ()
{
int vet[10];

for (int i = 0; i < 10; i++)
{
    printf("inserisci un numero");
    scanf("%d",vet+i);
    
}
for (int i = 0; i < 10; i++)
    printf("%d",* (vet+i));
}
