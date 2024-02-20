/******************************************************************************

Renan Cáceres Anselmo
EC31A - C11
24/10/2022

*******************************************************************************/
#include <stdio.h>

int main()
{
  int vet[10],
      i,
      posicao;
      
      for(i = 0; i < 10; i++){
          scanf("%d", &vet[i]);
         
          if(vet[i] <= 0 ){
              vet[i] = 1;
          }
      }
        for(i = 0; i < 10; i++){
             posicao = +i;
            printf("X[%d] = %d\n", posicao, vet[i]);
        }
          
    return 0;
}
