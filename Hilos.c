#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <time.h>

int proceso(void){
    //obtenciion del numero aleatorio
    int Vtime;
    srand(getpid());
    Vtime=(rand()%30);
   // printf("time: %d\n",Vtime); //imprime el valor del tiempo
    sleep(Vtime);
    return Vtime;
}

int main (int argc, char *argv[]){
    pid_t pidName;
    int hijos;
    char aux;
    int estado;

    aux=*argv[1];
    hijos=aux-'0';

    for(int i=0;i<hijos;i++){
        pidName=fork(); esta es una prueba
        if(pidName>0)
            continue;
        else if(pidName==0){
            exit(proceso());
        }
        
    }
    
    for(int i=0;i<hijos;i++){
        pidName= wait(&estado);
        printf("PADRE (%d):\t Hijo PID =%d con tiempo de:%d\n",getpid(),pidName,WEXITSTATUS(estado));
    }


    return 0;
}