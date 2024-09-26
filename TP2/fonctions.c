#include <assert.h>
#include "fonctions.h"


long int factorielle(int n) {
    if(n<=1) 
        return 1;
    return n*factorielle(n-1);
}

long int coefficient(int n, int m) {
    return factorielle(n) / (factorielle(m) * factorielle(n-m));
}

