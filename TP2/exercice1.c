#include<stdio.h>
#include<stdbool.h>

bool premier_bool(int n){
	if (n<= 1 ) {
		return false;
	}
	for (int i=2 ; i<=n/2 ; i++){
		if (n%i == 0){
			return false;
		}
	}
	return true;
}

void premier(int n){
	if (premier_bool (n)){
		printf("%d est Premier .\n", n);
	}else{
		printf("%d non Premier. \n", n);
	}
}

int fibonacci(int n){

	if (n==0 ){
		return 0;
	}
	if (n==1){
		return 1;
	}
	return fibonacci (n-1) + fibonacci(n-2);
}

int main(){
        int nombre;

        printf("Entrez un nombre: ");
        scanf("%d", &nombre);
        premier (nombre);
	printf("Le %d-ième terme de Fibonacci est : %d\n", nombre, fibonacci(nombre));
        return 0;
}

