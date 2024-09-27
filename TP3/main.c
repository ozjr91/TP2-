#include "fonctions.h"
int main(){
    int trie[5]={1,2,2,4,8};
    for (int i=0;i<size(trie);i++){
        if (trie[i]>trie[i+1]){
            return false;
        }
    }
    return false;
}