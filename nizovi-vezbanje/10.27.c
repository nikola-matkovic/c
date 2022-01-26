/*10.27. Саставити програм који за унети низ реалних бројева, дужине n, исписује елемент највеће
вредности, као и његове позиције у низу */

#include<stdio.h>
int main(){
    int i,n,niz[n],j,max,imax;
    printf("Unesite n:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&niz[i]);
        max=niz[0];
        for(i=1;i<n;i++){
            if(niz[i]>max){
                max=niz[i];
                imax=i;
            }
        }
    }
    printf("Najveci broj je=%d",max);
    printf("Inedks tog broja je=%d",imax+1);
    return 0;
}