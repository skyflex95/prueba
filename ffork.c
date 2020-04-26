#include <stdio.h>
#include <unistd.h>

int main(){

    fork();
    fork();
    printf("hola fork\n");

    return 0;
}