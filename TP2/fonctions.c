# include "fonction.h"
// Implémentation de la fonction factorielle
int factorielle(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorielle(n - 1);
    }
}

// Implémentation de la fonction coefficient
int coefficient(int n, int p) {
    if (p == 0 || p == n) {
        return 1;
    } else {
        return coefficient(n - 1, p - 1) + coefficient(n - 1, p);
    }
}

int catalan (int n){
	return coefficient(2*n,n)/(n+1);
}

void pascal(int n){
	for (int i =0; i<=n;i++){
		for(int j=0;j<=i;j++){
			printf("%d ",coefficient(i,j));
		 }
	printf("\n");
	}
}
