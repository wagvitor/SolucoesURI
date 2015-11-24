#include <stdio.h>
  
int main() {
  
int N=0, aux, n1, n2, n5, n10, n20, n50, n100;
 
    scanf("%d",&N);
    printf("%d\n",N);
 
    n100=N/100;
    aux=N%100;
    printf("%d nota(s) de R$ 100,00\n", n100);
 
    n50=aux/50;
    aux=aux%50;
    printf("%d nota(s) de R$ 50,00\n", n50);
 
    n20=aux/20;
    aux=aux%20;
    printf("%d nota(s) de R$ 20,00\n", n20);
 
    n10=aux/10;
    aux=aux%10;
    printf("%d nota(s) de R$ 10,00\n", n10);
 
    n5=aux/5;
    aux=aux%5;
    printf("%d nota(s) de R$ 5,00\n", n5);
 
    n2=aux/2;
    aux=aux%2;
    printf("%d nota(s) de R$ 2,00\n", n2);
 
    printf("%d nota(s) de R$ 1,00\n", aux);
  
    return 0;
}
