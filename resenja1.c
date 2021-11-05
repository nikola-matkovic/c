//1. Sa tastature se učitava prirodan broj ni zatim n prirodnih brojeva među kojima su bar dva različita. 
//Napisati program koji jednim prolaskom kroz niz određuje drugu po veličini vrednost.
// Na primer za pet brojeva 6, 6, 7, 6, 2 ispisuje: Druga po veličini vrednost je 6
#include <stdio.h>
int main(){
    int n, i, prethodni, najveci, t, prvi=0, drugi=0, dva_razlicita;
    do{
    printf("unesite broj n=");
    scanf("%d",&n);
    }
    while(n<2);
    int niz[n];
    do{
        printf("Unosite broj jedan po 1:\n");
        najveci=0;
        prethodni=0;
        for(i=0;i<n; i++){
            scanf("%d",&niz[i]);
            //proveriti  da li postoje 2 različita broja, ako ne, ponvoiti do  petlju.



            t=najveci; //najveći pre if naredbe
            if(niz[i]>najveci){
                najveci=niz[i];
            }
            //provera da li se najveći promenio:
            if(najveci!=t){
                prethodni=t;
            }
        }
    }
    while(dva_razlicita==0);
    printf("Resenje: %d %d", prethodni);
    return 0;
}