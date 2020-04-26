#include <stdio.h>

int main(int argc, char *argv[],char *envp[]){
    char parametro;
    int suma1,suma2;
    for(int i=0;i<argc;i++){
        printf("argumento [%d]: %s\n",i,argv[i]);
        parametro = *argv[i];
    }
    //suma1=parametro+3;
    int comoEntero = parametro - '0';
    //suma2=comoEntero+3;
    //printf("parametro=%i\n",parametro);
    //printf("suma1 = %d\n",suma1);
    //printf("suma2 =%d\n",suma2);
    return 0;
}