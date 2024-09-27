#include <stdlib.h>
#include <stdio.h>
#include <assert.h> 

long int factorielle(int);
void syracuse(int);
int fibonacci(int);
long int coefficient_binomial(int, int);
long int coefficient_binomial_recursif(int, int);

int main() {

    printf("%ld\n", factorielle(7));
    syracuse(10);
    printf("%ld\n",coefficient_binomial(20,8));
    printf("%ld\n",coefficient_binomial_recursif(20,8));
    printf("%ld\n", produit(1234));
    printf("%ld\n", produit_terminal(10234));
    int terme = 8;
    printf("%d neme terme de Fibonacci : %d\n", terme, fibonacci(terme));
    return EXIT_SUCCESS;
}

long int factorielle(int n) {

    if(n<=1) 
        return 1;
    /* Appel récursif sur le paramètre n-1 */
    return n*factorielle(n-1);
}


void syracuse(int n) {
    
    if(n==1)
        printf("%d\n", n);
    else {
    
        printf("%d\t", n);
 
        if (n%2==0) 
            syracuse(n/2);
        else 
            syracuse(3*n+1);
    }
}

/* Pré-condition : on suppose n >= 0*/
int fibonacci(int n) {
    if(n == 0)
        return 0;
    if(n <= 2)
        return 1;
    else
        return fibonacci(n-1)+fibonacci(n-2);
}

/* Pré-condition : on suppose n > 0, m >= 0 et n >= m */
long int coefficient_binomial_recursif(int n, int m) {
    if(m == 0 || m == n)
        return 1;
    else
        return coefficient_binomial(n-1,m-1) + coefficient_binomial(n-1,m);
}

/* Pré-condition : on suppose n > 0, m >= 0 et n >= m */
long int coefficient_binomial(int n, int m) {
    return factorielle(n) / (factorielle(m) * factorielle(n-m));
}
