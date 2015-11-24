#include <stdio.h>
  
int main() {
   int codp1,codp2,np1,np2;
   float vu1,vu2,vt1,vt2,vtt;
 
   scanf("%d%d%f",&codp1,&np1,&vu1);
   scanf("%d%d%f",&codp2,&np2,&vu2);
   vt1 = np1 * vu1;
   vt2 = np2 * vu2;
   vtt = vt1 + vt2;
   printf("VALOR A PAGAR: R$ %.2f\n",vtt);
   return 0;
}
