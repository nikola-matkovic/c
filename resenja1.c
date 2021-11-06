//1. Sa tastature se učitava prirodan broj "n" i zatim n prirodnih brojeva među kojima su bar dva različita. 
//Napisati program koji jednim prolaskom kroz niz određuje drugu po veličini vrednost.
// Na primer za pet brojeva 6, 6, 7, 6, 2 ispisuje: Druga po veličini vrednost je 6
#include <stdio.h>
int main(){
    int n, i, prethodni, najveci, t, prvi=0, drugi=0, dva_razlicita;
    do{
    printf("unesite broj n=");
    scanf("%d",&n);
    printf("N je jedanko : %d \n", n);
    }
    while(n<2); 
    int niz[n];
    //do{
        printf("Unosite broj jedan po jedan:\n");
        najveci=0;
        prethodni=0;
        for(i=0;i<n; i++){
            scanf("%d",&niz[i]);
            if(n==2)
                najveci==niz[i];
            if(najveci<niz[i]){
                prethodni=najveci;
                najveci=niz[i];
            }
        }
    //}
    //while(dva_razlicita==0);
    printf("Resenje: %d", prethodni);
    return 0;
}
//Program nije gotov!!! radi za 1-2 ne za 2-1