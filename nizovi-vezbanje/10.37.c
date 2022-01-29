/*10.37. Саставити програм који за унети низ целих бројева дужине n врши замену суседних
елемената низа на парним и непарним позицијама и исписује новодобијени низ. */

#include<stdio.h>

void main(){
    int i,n,p;
    //unos niza
    printf("Unesite n:");
    scanf("%d",&n);
    int niz[n];
    for(i=0;i<n;i++){
        scanf("%d",&niz[i]);
    }
    //zamena
    for(i=0;i<n;i++){
        if(i % 2 == 1){
            p=niz[i];
            niz[i]=niz[i-1];
            niz[i-1]=p;
        }
    }
    //ispis
    for(i=0;i<n;i++){
        printf("%d ",niz[i]);
    }
}