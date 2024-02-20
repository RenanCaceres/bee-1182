/******************************************************************************

Renan Cáceres Anselmo
05/11/2022
EC31A - C11

*******************************************************************************/
#include <stdio.h>

int main()
{
    int par[5], impar[5], valor, ia, i, P = 0, I = 0;
    
    for (i = 0; i < 15; i++) {
        scanf("%d", &valor);
        if (valor % 2 == 0) {
            par[P] = valor;
            P++;
            if (P == 5) {
                for (ia = 0; ia < 5; ia++) {
                    printf("par[%d] = %d\n", ia, par[ia]);
                }
                P = 0;
            }
        } else {
            impar[I] = valor;
            I++;
            if (I == 5) {
                for (ia = 0; ia < 5; ia++) {
                    printf("impar[%d] = %d\n", ia, impar[ia]);
                }
                I = 0;
            }
        }
    }
    for (ia = 0; ia < I; ia++) {
        printf("impar[%d] = %d\n", ia, impar[ia]);
    }
    for (ia = 0; ia < P; ia++) {
        printf("par[%d] = %d\n", ia, par[ia]);
    }
 return 0;
}