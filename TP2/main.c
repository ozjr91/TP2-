#include "fonction.h"

int main() {
    int n, p;
    printf("Entrez n : ");
    scanf("%d", &n);

    printf("Entrez p : ");
    scanf("%d", &p);

    printf("Le coefficient binomial C(%d, %d) est : %d\n", n, p, coefficient(n, p));

    return 0;
}
