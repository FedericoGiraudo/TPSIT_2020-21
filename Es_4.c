#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE* fp;
    int a,c,g,t;
    char lett=0;
    if(!(fp = fopen("rna.txt", "r")))
        {
            printf("\nFile Error on %s.\n\n", "rna.txt");

            return -1;
        }
        while((lett=fgetc(fp))!=EOF)
        {
             switch (lett)     
                {
                case 'a':
                    a++;
                    break;
                case 'c':
                    c++;
                    break;
                case 'g':
                    g++;
                    break;
                default:
                    break;
                 case 't':
                    t++;
                    break;
                }
        }
        
    
        printf("a: %d \n c: %d \n g: %d \n t: %d\n", a, c, g, t ); 


    fclose(fp);
    return 0;
}