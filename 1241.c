#include <stdio.h>
#include <string.h>
 
int main(){
int num, a, b, c, contador;
 
char num1[1001], num2[1001];
scanf("%d",&num);
 
 
// FAZER A COMPARACAO E ARMAZENAR OS VALORES
    for(a = 0; a < num; a++){
        contador = 0;
        scanf("%s %s",&num1,&num2);
 
 
// FAZER A COMPARACAO E FAZER O CALCULO
            for(b = strlen(num2), c = strlen(num1) ; b >= 0; b--, c--){
                if(num1[c] == num2[b]) contador++;
 
                else break;
            }
 
 
// CONDICAO PARA FAZEER A COMPARACO E MOSTRAR O RESULTADO
            if(contador == strlen(num2)+1) printf("encaixa\n");
 
            else printf("nao encaixa\n");
    }
 
    return 0;
}
