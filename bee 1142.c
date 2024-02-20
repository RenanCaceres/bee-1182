/******************************************************************************
Renan Cáceres Anselmo
EC31A - C11
09/10/2022
*******************************************************************************/
#include <stdio.h>

int main()
{
   int n, cont;
       
    scanf("%d", &n);
    
    for(cont = 1; cont <= n * 4; cont++) {
        if(cont % 4 == 0) {
            printf("PUM\n");
        } else {
            printf("%d ", cont);
        }
    }
  
  
    return 0;
}
