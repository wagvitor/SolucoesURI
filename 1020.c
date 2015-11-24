#include <stdio.h>
  
int main() {
  
int tempo=0, aux, anos, meses;
 
scanf("%d", &tempo);
 
anos = tempo / 365;
aux = tempo % 365;
 
meses = aux / 30;
aux = aux % 30;
 
printf("%d ano(s)\n",anos);
printf("%d mes(es)\n",meses);
printf("%d dia(s)\n",aux);
  
    return 0;
}
