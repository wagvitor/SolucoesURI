#include <stdio.h>
#include <math.h>
int main() {
   int raio;
   double total;
   scanf ("%i",&raio);
   total = ((4.0/3.0) * 3.14159) * pow(raio,3);
   printf("VOLUME = %.3lf\n",total);
return 0;
}
