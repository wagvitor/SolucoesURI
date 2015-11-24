#include<stdio.h>
#include<math.h>
 
int main()
{
      int a,b,c,raiz,num,cont=0;
 
      while(scanf("%d",&c)==1){
                        for(a=1; a<=c; a++){
                            scanf("%d",&num);
 
                              if(num==1 || num==0)
                                printf("%d nao eh primo\n",num);
 
                                else {
                                    cont = 0;
                                    raiz = sqrt(num);
                                    for (b=2; b <= raiz; b++){
                                        if (num % b == 0){
                                            cont = 1;
                                            break;
                                        }
                                    }
                                if(cont==1)
                                    printf("%d nao eh primo\n",num);
 
                                    else
                                        printf("%d eh primo\n",num);
                                        cont=0;
                                }
 
                        }
 
      }
    return 0;
}
