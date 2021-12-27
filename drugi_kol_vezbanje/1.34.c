/*1.34. Саставити програм за сортирање задатог низа списка по абецедном реду.
Исписати новокреирани списак. */
#include <stdio.h>  
#include <ctype.h> 
#include <string.h>
#include <stdlib.h>
#define MAX  100

void zamena(char * a, char * b){
    *a = *a^*b;
    *b = *a^*b;
    *a = *a^*b;
}

int main(){
    int n, i, j;
    char spisak[MAX][MAX] = {"Marko", "Nikola", "Bahir", "tarik", "Ermin"};
    //int brojevi[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    n  = 5;
    for(j=0; j<n-1; j++){
        for(i=0; i<n-1; i++){
            if(tolower(spisak[i][0])<tolower(spisak[i+1][0])){
                zamena(&spisak[i], &spisak[i+1]);
            }
        }
    }
    for(i=0; i<n; i++){
        printf("%s", spisak[i]);
    }
    return 0;  
}