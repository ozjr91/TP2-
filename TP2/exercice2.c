#include <stdio.h>

/* int factorielle(int n) {
	if (n==0) {
		return 1 ;
	}else {
		return n * factorielle (n-1);
	}
}


int fibonacci(int n){
	if(n==0){
		return 0;
	}
	if (n ==1){
		return 1;
	}
	else {
		return fibonacci(n-1)+fibonacci(n-2);
	}

}

int syracuse(int n){
	printf("%d \n",n);
	if(n==1){
		return 1;
	}
	if(n%2==0){
		return (syracuse(n/2));
	}
	else{
		return 3*(syracuse(n+1));
	}
}
*/

int coefficient(int n, int p) {
		if (p==0||p==n){
			return 1;
		}
		else{
			return coefficient(n-1,p-1)+coefficient(n-1,p);
		}
}
int main() {
	int nombre;
	int nombre1;
	printf("Entrer un nombre :");
	scanf(" %d" ,&nombre);
	printf("Entrer un nombre :");
	scanf("%d",&nombre1);
	printf("coefficient : %d\n",coefficient(nombre,nombre1));
	return 0;
}

