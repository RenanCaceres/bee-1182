#include <stdio.h>

int main()
{
   double N[100], 
   valor = 0,
   metade = 0;
   
   int i;

    scanf("%lf", &valor);
    N[i] = valor;
    
    for(i = 0; i < 100; i++){
       printf("N[%d] = %.4lf\n", i, N[i]);
       
       metade = N[i] / 2;
       N[i + 1] = metade;
       
    }
    
       return 0;
}
