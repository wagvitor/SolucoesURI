#include <stdio.h>
  
int main() {
  
double valor;
int N=0, decimal, aux, n1, n2, n5, n10, n20, n50, n100, m001, m005, m010, m025, m050, m1;
 
    scanf("%lf",&valor);
 
    N=valor;
    decimal=(valor-N)*100;
 
    printf("NOTAS:\n");
 
    n100=N/100;
    aux=N%100;
    printf("%d nota(s) de R$ 100.00\n", n100);
 
    n50=aux/50;
    aux=aux%50;
    printf("%d nota(s) de R$ 50.00\n", n50);
 
    n20=aux/20;
    aux=aux%20;
    printf("%d nota(s) de R$ 20.00\n", n20);
 
    n10=aux/10;
    aux=aux%10;
    printf("%d nota(s) de R$ 10.00\n", n10);
 
    n5=aux/5;
    aux=aux%5;
    printf("%d nota(s) de R$ 5.00\n", n5);
 
    n2=aux/2;
    aux=aux%2;
    printf("%d nota(s) de R$ 2.00\n", n2);
 
 
 
    printf("MOEDAS:\n");
 
    m1=aux;
    printf("%d moeda(s) de R$ 1.00\n", m1);
 
    m050=decimal/50;
    aux=decimal%50;
    printf("%d moeda(s) de R$ 0.50\n", m050);
 
    m025=aux/25;
    aux=aux%25;
    printf("%d moeda(s) de R$ 0.25\n", m025);
 
    m010=aux/10;
    aux=aux%10;
    printf("%d moeda(s) de R$ 0.10\n", m010);
 
    m005=aux/5;
    aux=aux%5;
    printf("%d moeda(s) de R$ 0.05\n", m005);
 
    printf("%d moeda(s) de R$ 0.01\n", aux);
  
    return 0;
}
