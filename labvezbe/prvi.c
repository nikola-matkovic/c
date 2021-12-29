#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int main(){
    int i, j, max, max_index;

    int niz[MAX] = {1, 2, 3, 4 , 5 ,6 ,7, 8, 9 , 10};
    max = niz[0];
    for(i=0; niz[i]; i++){
        if(niz[i]>max){
            max = niz[i];
            max_index = i;
        }
    }
    printf("%d %d", max, max_index);
    //brisanje niza : 
    for(j = max_index; j<i; j++){
        niz[j] = niz [j] ^  niz [j+1];
        niz[j+1] = niz [j] ^  niz [j+1];
        niz[j] = niz [j] ^  niz [j+1];
    }
    for(i=0; niz[i]; i++){
        printf("%d",niz[i]);
    }
}