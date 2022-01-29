/*10.35. Саставити програм за циклично премештање елемената задатог низа целих бројева дужине n
за једно место у лево и исписивање новодобијеног низа. */

#include <stdio.h>

void main(){
    int n, i, t;
    printf("unesite n");
    scanf("%d", &n);
    int niz[n];
    printf("Unesite niz: ");
    for(i=0; i<n; i++){
        scanf("%d", &niz[i]);
    }
    for(i=0; i<n; i++){
        if(i==0){
            t = niz[n-1];
            niz[n-1] = niz[i];
        }
        else{
            niz[i-1] = niz[i];    
        }
    }
    niz[n-2] = t;
    for(i=0; i<n; i++){
        printf("%d", niz[i]);
    }
}