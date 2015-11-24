#include <stdio.h>
 
int main(){
int a, b, c;
int N[1000];
 
 
scanf("%d", &c);
 
a = 0;
 
// ARMAZENAR OS VALORES E MOSTRAR OS RESULTADOS
for(b = 0; b < 1000; b++){
    printf("N[%d] = %d\n", b, a);
    a++;
    if(a == c) a = 0;
}
 
return 0;
 
}
