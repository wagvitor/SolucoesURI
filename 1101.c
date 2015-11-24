#include<stdio.h>
#include<stdlib.h>
 
main(){
    int a,b,aux, cont, soma=0;
 
    scanf("%d%d", &a,&b);
     
     
    // LAÇO PARA EXECUTAR OS COMANDOS
    while((a>0) && (b>0)){
      if (b<a){ // ORDENAR NUMEROS EM ORDEM CRESCENTE
        aux=a;
        a=b;
        b=aux;
    }
 
    // ARMAZENAR, MOSTRAR E SOMAR OS VALORES
    for(cont=a; cont<=b; cont++){
        printf("%d ", cont);
        soma+=cont;
    }
    printf("Sum=%d\n", soma);// MOSTRAR OS RESULTADOS
    soma=0;
    scanf("%d%d", &a,&b); // LER E ARMAZENAR NOVAMENTE OS VALORES PARA ENTRAR NO LAÇO WHILE
}
 
    return 0;
}
