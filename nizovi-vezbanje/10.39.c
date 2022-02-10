/*10.39. Саставити програм за сортирање унетог низа целих бројева дужине n у неопадајући поредак
методом избора (Selection Sort). Исписати сортирани низ.
Selection Sort подразумева да минимални елемент низа размени са a[0], минимални елемент
одсечка a[1], a[2], …, a[n-1] разменити са a[1], минимални елемент одсечка a[2], a[3], …, a[n-1]
разменити са a[2]; исти поступак применити на преостале елементе осим последњег који се налази на
свом месту. */

#include <stdio.h>
int main(){
    int i,n,j,min,t;
    printf("Unesite n:");
    scanf("%d",&n);
    int niz[n];
    printf("Unesite niz:");
    for(i=0;i<n;i++){
        scanf("%d",&niz[i]);
    }
    for(i=0;i<n-1;i++){
        min=i;
        for(j=i+1;j<n;j++){
            if(niz[j]<niz[min]){
                min=j;
            }
        }
        if(min != i){
            t=niz[i];
            niz[i]=niz[min];
            niz[min]=t;

        }
    }
    for(i=0;i<n;i++){
        printf("%d ",niz[i]);
    }
    return 0;
}