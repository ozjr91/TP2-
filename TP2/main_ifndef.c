#include "pascal.h"

/* Pour compiler, il faut générer le fichier objet (.o) pascal 
 * et les lier au main_ifndef.o pour obtenir un exécutable 
 * gcc -std=c99 -Wall -Wextra -pedantic -ggdb -Wno-abi -o pascal.o -c pascal.c
 * gcc -std=c99 -Wall -Wextra -pedantic -ggdb -Wno-abi -o main_ifndef.o -c main_ifndef.c
 * gcc -std=c99 -Wall -Wextra -pedantic -ggdb -Wno-abi -o executable pascal.o main_ifndef.o fonctions.o
 */

int main() {

    pascal(6);
    return EXIT_SUCCESS;

}
