/******************************************************************************
RENAN CÁCERES ANSELMO
06/11/2022
EC31A - C11

*******************************************************************************/

#include <stdio.h>

int main(){
    double M[12][12],PF = 0.0, s, m;
    int i,c,L;
    char op[2];
    
    scanf("%d", &L);
    scanf("%s", op);
    for(i = 0; i < 12; i++){
        for(c = 0; c < 12; c++){
            scanf("%lf", &M[i][c]);
        }
    }
    for(i = 0; i < 12; i++){
        s = s + M[L][i];
    }
    if(op[0] == 'S'){
        printf("%.1lf\n", s);
    }else if(op[0] == 'M'){
        printf("%.1lf\n", s/12.0);
    }
    return 0;
}