#include<stdio.h>
#include<stdlib.h>
main(){
     
    int op, alc=0, gas=0, die=0;
     
    // laco para executar as operacoes ate digitar 4 e sair do programa
    while(op!=4){
        scanf("%d",&op);
         
        // somar os valores de acordo com a opcao escolhida
        if (op==1)
            alc++;
        else if (op==2)
            gas++;
        else if (op==3)
            die++;
        else if (op==4){ // encerrar o programa 
            printf("MUITO OBRIGADO\n");
            printf("Alcool: %d\n", alc);
            printf("Gasolina: %d\n", gas);
            printf("Diesel: %d\n", die);
      }
    }
 
    return 0;
}
