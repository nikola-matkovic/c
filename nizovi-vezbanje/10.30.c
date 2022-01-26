/*10.30. Саставити програм који за унети низ целих бројева, дужине n, проналази и на екрану
исписује елементе на парним позицијама и међу њима проналази онај који има максималну
вредност. Минимална дужина низа је 2. */



#include <stdio.h>

void main(){
    int n, i, j = 0, max; 
    printf("Unesite n (veće ili jednako 2 ) ");
    do{
    scanf("%d", &n);
    }
    while(n<2);
    int niz[n];
    int niz_sa_parnim_pozicijama[n];
    printf("\nUnesite niz: ");
    for(i=0; i<n; i++){
        scanf("%d", &niz[i]);
        if(i % 2  == 0){
            niz_sa_parnim_pozicijama[j] = niz[i];
            j++;
        }
    }
    printf("Elementi sa parnim pozicijama : ");
    for(i=0; i<j; i++){
        printf("%d ", niz_sa_parnim_pozicijama[i]);
        if(i==0){
            max = niz_sa_parnim_pozicijama[0];
        }
        if(max<niz_sa_parnim_pozicijama[i]){
            max = niz_sa_parnim_pozicijama[i];
        }
    }
    printf("\n Najveći je %d", max);
}