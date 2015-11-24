#include <stdio.h>
  
int main() {
  
int tempo=0, aux, horas, minutos;
 
scanf("%d", &tempo);
 
horas=tempo/3600;
aux=tempo%3600;
 
minutos=aux/60;
aux=aux%60;
 
printf("%d:%d:%d\n",horas,minutos,aux);
  
    return 0;
}
