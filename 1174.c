#include <stdio.h>
 
int main(){
 
    int A;
    float B;
 
    // ARMAZENAR VALORES
    for(A = 0; A < 100; A++){
        scanf("%f",&B);
 
 
        // CONDICAO PARA MOSTRAR VALORES DENTRO DO INTERVALO ESCOLHIDO
        if(B <= 10)
            printf("A[%d] = %.1f\n",A, B);
    }
 
  
    return 0;
}
