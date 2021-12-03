/* Fibonacijev niz*/

#include <stdio.h>

int main(){
    int n,i, prva, druga, sledeca; 
    prva=0;
    druga=1;
    printf("unesite n:");
    scanf("%i", &n);
    printf("%i %i", prva, druga);
    for(i=3; i<=n; i++){
        sledeca=prva+druga;
        prva= druga;
        druga=sledeca;
        printf("%i ", sledeca);
    }

    return 0;
}