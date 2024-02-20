/******************************************************************************
Renan Cáceres Anselmo
29/09/2022
EC31A - C11
*******************************************************************************/
#include <stdio.h>

int main()
{
    int tabuada = 0;
    int cont = 0;
    
    scanf("%d", &tabuada);
    
    while(cont < 10) {
        cont++;
        
         printf("%d x %d = %d\n", cont, tabuada, cont * tabuada);
    }

    return 0;
}
