/*10.28. Саставити програм који учита низ реалних бројева, дужине n, налази најмањи и највећи члан
низа, xmin и xmax, и исписује све елементе низа који су мањи од xmax/2 и већи од xmin*2.*/

#include <stdio.h>

void main(){
    int n, i, min, max;
    printf("Unesite n:");
    scanf("%d", &n);
    int niz[n];
    printf("Unesite elemente niza:");
    for(i=0; i<n; i++){
        scanf("%d", &niz[i]);
        if(i == 0){
            min = niz[i]; 
            max = niz[i];
        }
        if(niz[i]<min){
            min = niz[i];
        }
        if(niz[i]>max){
            max = niz[i];
        }
    }
    printf("мањи од %f и већи од %d су ", (float) max / 2, min * 2);
    for(i=0; i<n; i++){
        if(niz[i] > min * 2 && niz[i] < (float) max / 2)
            printf("%d, ", niz[i]);
    }
}