/****************************************************************************
Renan Caceres Anselmo
*******************************************************************************/
#include <stdio.h>
#include <limits.h>


int main()
{
   int valor, i, menor = INT_MAX, p;
   scanf("%d", &valor);
   
   int vet[valor];
   
   for(i = 0; i < valor; i++){
       scanf("%d", &vet[i]);
    }
       
    for(i = 0; i < valor; i++){
        if(menor > vet[i]){
            menor = vet[i];
            p = i;
        }
    }
        printf("Menor valor: %d\nPosicao: %d\n", menor, p);

    return 0;
}
