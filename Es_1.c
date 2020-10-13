#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int main()
{
    int N,j, numc=1, con[MAX];
    float R;
    printf("inserire il numero di alunni\n");
    scanf("%d",&N);

    printf("iserire il valore di contagio di una persona (1.4)\n");
    scanf("%f",&R);


    for(j=0;N<j;j++)
    {
       numc=j*R;
       scanf("%d/n",con[numc]);
       }

    printf("ci sono voluti giorni");
    scanf("%d",&j);

    return 0;
    
}
