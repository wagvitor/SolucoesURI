#include <stdlib.h>
#include <stdio.h>
 
int main(){
int num, coluna, linha;
char t;
 
double N[12][12];
double soma = 0.0;
 
scanf("%d ", &num);
scanf("%c", &t);
 
 
//armazenar dados na matriz 
for(linha = 0; linha < 12; linha++){
    for(coluna = 0; coluna < 12; coluna++){
        scanf("%lf", &N[linha][coluna]);
 
 
// condicao para executar o calculo somente na linha escolhida        
        if(coluna == num){
            soma += N[linha][coluna];
        }
    }
}
 
 
// condicao para executar o calculo de acordo com a operacao escolhida
if(t == 'S')
    printf("%.1f\n", soma);
else
    printf("%.1f\n", soma/12.0);
  
    return 0;
}
