#include "../fonctions.h"

int main(){
    
    int trie[5]={1,2,2,4,8};
    size_t taille = sizeof(trie)/sizeof(trie[0]);
    est_trie(trie,taille);

    if (est_trie){
        printf("youuuuuuuuuu! \n");
    }
    else{
        printf("nuuuuuuuul! \n");
    }
    
    return 0;
}