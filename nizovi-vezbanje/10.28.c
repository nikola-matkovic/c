/*10.28. Саставити програм који учита низ реалних бројева, дужине n, налази најмањи и највећи члан
низа, xmin и xmax, и исписује све елементе низа који су мањи од xmax/2 и већи од xmin*2.*/

#include<stdio.h>
int main(){
    int n,i,niz[n],max,min;
    printf("Unesite n:");
    scanf("%d",&n);
    for (i=0;i<n;i++){
        scanf("%d",&niz[i]);
        niz[0]=max;
        for(i=1;i<n;i++){
            if(niz[i]>max){
                max=niz[i];
            }
            min=niz[0];
            if(niz[i]<=min){
                min=niz[i];

            }
        }
    }
    for (i=0;i<n;i++){
        if((max/2)<niz[i] && niz[i]>min*2){
            printf("Elementi koji su manji od m/2 su=%d",niz[i]);
         
        }
    }
}