# include "../fonctions.h"

bool est_trie(int tableau[],size_t taille){
    
    for(size_t i=0;i<taille;i++){
        if(tableau[i]>tableau[i+1]){
            return false;
        }
    }
    return true;
}