/*10.29. Саставити програм који за унети низ целих бројева, дужине n, исписује елемент најмање
вредности међу парним бројевима. */

#include<stdio.h>
void main(){
    int i,n,min, j = 0;
    printf("Unesite n:");
    scanf("%d",&n);
    int niz[n], niz_parnih[n];
    for(i=0;i<n;i++){
        scanf("%d",&niz[i]);
        if(niz[i] % 2 == 0){
            niz_parnih[j] = niz[i];
            j++;
        }
    }
    min = niz_parnih[0];
    for(i=0; i<j; i++){
        if(niz_parnih[i] < min){
            min = niz_parnih[i];
        }
    }
    printf("%d", min);
}