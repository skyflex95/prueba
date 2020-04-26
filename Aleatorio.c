#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int n;
    
    srand(time(NULL));
    n=rand()%30+0;
    printf("%d\n",n);
    return 0;
}