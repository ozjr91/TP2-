#include <assert.h>
#include "fonctions.h"

/* Pré-condition : on suppose n >= 0*/
 int factorielle(int n) {
    if(n<=1) 
        return 1;
    return n*factorielle(n-1);
}

/* Pré-condition : on suppose n > 0, m >= 0 et n >= m */
 int coefficient(int n, int m) {
    return factorielle(n) / (factorielle(m) * factorielle(n-m));
}

void pascal(int n){
    for(int i=0;i<n;i++){
        for (int j = 0; j <=i; j++){
            printf("%d ",coefficient(i,j)); 
        }
        printf("\n");
    }
}