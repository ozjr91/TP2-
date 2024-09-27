#include <assert.h>
#include "fonctions.h"

<<<<<<< HEAD
/* Pré-condition : on suppose n >= 0*/
 int factorielle(int n) {
=======

long int factorielle(int n) {
>>>>>>> 6bd4aa7eb0ebe64dd5a6e194d1162465cd4e5e8c
    if(n<=1) 
        return 1;
    return n*factorielle(n-1);
}

<<<<<<< HEAD
/* Pré-condition : on suppose n > 0, m >= 0 et n >= m */
 int coefficient(int n, int m) {
=======
long int coefficient(int n, int m) {
>>>>>>> 6bd4aa7eb0ebe64dd5a6e194d1162465cd4e5e8c
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