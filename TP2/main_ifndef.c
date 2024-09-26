#include "fonction.h"



int main() {
    int n = 10, p = 3;

    // Calcul et affichage du coefficient binomial pour n = 10 et p = 3
    printf("Le coefficient binomial C(%d, %d) est : %d\n", n, p, coefficient(n, p));

    // Calcul et affichage du 6ème nombre de Catalan
    int catalan_value = catalan(6);
    printf("Le 6ème nombre de Catalan est : %d\n", catalan_value);

    return 0;
}
