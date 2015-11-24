#include <stdio.h>
  
int main() {
  
    int tempo, veloc;
    float dist, litros;
 
    scanf("%d", &tempo);
 
    scanf("%d", &veloc);
 
    dist = tempo * veloc;
    litros = dist / 12;
 
    printf("%.3f\n", litros);
    return 0;
}
