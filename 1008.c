#include <stdio.h>
  
int main() {
    int numero, hora;
    float valor, salario;
 
    scanf("%d",&numero);
    scanf("%d",&hora);
    scanf("%f",&valor);
 
    salario = valor * hora;
 
    printf("NUMBER = %d\n",numero);
    printf("SALARY = U$ %.2f\n",salario);
 
    return 0;
}
