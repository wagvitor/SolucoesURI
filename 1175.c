#include <stdio.h>
 
int main(){
    int N[20];
    int a, i, j, aux;
 
    a= 0;
 
    // CONTANDO AS POSICOES E ARMAZENANDO OS VALORES
    while(a<20){
        scanf("%d", &N[a]);
        a++;
    }
 
    a = 0;
 
    // INVERTENDO OS VALORES
    for (i = 19; i >= 10; i--){
        aux = N[i];
        N[i] = N[a];
        N[a] = aux;
        a++;
    }
 
    // MOSTRANDO OS RESULTADOS
    for(j = 0; j < 20; j++){
        printf("N[%d] = %d\n", j, N[j]);
    }
 
    return 0;
 
}
