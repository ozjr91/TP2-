#include <stdio.h>

int factorielle(int n) {
	if (n==0) {
		return 1 ;
	}else {
		return n * factorielle (n-1);
	}
}
int main() {
	int nombre;
	printf("Entrer un nombre si vous voulez faire son factorielle :");
	scanf("%d" ,&nombre);

	printf("le factorielle de %d est %d\n",nombre,factorielle(nombre));
	return 0;
}
