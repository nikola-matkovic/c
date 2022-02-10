/*10.28. Саставити програм који учита низ реалних бројева, дужине n, налази најмањи и највећи члан
низа, xmin и xmax, и исписује све елементе низа који су мањи од xmax/2 и већи од xmin*2.*/

#include<stdio.h>
int main(){
    int n,i,max,min;
    printf("Unesite n:");
    scanf("%d",&n);
    int niz[n];
    for (i=0;i<n;i++){
        scanf("%d",&niz[i]);
        if(i == 0){
            max = niz[i];
            min = niz[i];
        }
        if(niz[i]>max){
            max=niz[i];
        }
        if(niz[i]<min){
            min=niz[i];
        }
    }
    printf("ELementi koji su manji od %.2f i veći od %d su: ", (float) max / 2, min * 2);
    for(i = 0;i < n; i++){
        if(niz[i] < (float) max / 2 && niz[i] > min * 2){
            printf("%d ", niz[i]);
        }
    }
    return 0;
}