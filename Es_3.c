#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max_rlen 100

int main()
{
int scelta;
char str[max_rlen];//creiamo un array di dimensione max_rlen

printf("scegliere 1 per codificare 2 per decodificare \n");
scanf("%d", &scelta);

switch (scelta)
{
case 1 :
    {
int count=1;
                        

printf("inserire un serie di lettere ");
scanf("%s",str);

int n =strlen(str);                          //contiamo quanti elementi sono stati inseriti nell array

for ( int i = 0; i < n; i++)
{
   while (i<n-1 && str[i]== str[i+1])
   {
       count = count + 1;
       i++;

   }

printf("%d", count);
count = 1;

printf("%c", str[i]);

}
    }
    break;

case 2:

{
    printf("inserire un serie di lettere e numeri ");
    scanf("%s",str);

    int  n, k, num; 
    char lett;

    n = strlen(str) ;

    for ( int i = 0; i < n; i++)
    {
        if (atoi(&str[i]) > 0 && atoi(&str[i]) <= 9)
        {
            num= atoi(&str[i]);
        }
        else
        {
           for (int k = 0; k < num; k++)
           {
               printf("%c", str[i]);
           } 
        }      
    }   
}
    break;
}

}
