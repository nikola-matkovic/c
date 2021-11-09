//1. Sa tastature se učitava prirodan broj "n" i zatim n prirodnih brojeva među kojima su bar dva različita. 
//Napisati program koji jednim prolaskom kroz niz određuje drugu po veličini vrednost.
// Na primer za pet brojeva 6, 6, 7, 6, 2 ispisuje: Druga po veličini vrednost je 6
#include <stdio.h>
int main(){
    int n, i, prethodni, najveci, najmanji;

    do{
    printf("unesite broj n=");
    scanf("%d",&n);
    printf("N je jedanko : %d \n", n);
    }
    while(n<2); 


    int niz[n];
    do{
        printf("Unosite broj jedan po jedan:\n");
        for(i=0;i<n; i++){
            scanf("%d",&niz[i]);
            if(i==0){
                najveci=niz[i];
                najmanji=niz[i];
            }
            else{
                if(niz[i]<najmanji){
                    najmanji=niz[i];
                }
                if(niz[i]>najveci){
                    prethodni=najveci;
                    najveci=niz[i];
                }
                if(i==1){
                    prethodni=najmanji;
                }
            }
            printf("najveći broj je %d a najmanji je %d. Prethodni od najvećeg je %d \n", najveci, najmanji, prethodni);
        }
    }
    while(najmanji==najveci);
    return 0;
}