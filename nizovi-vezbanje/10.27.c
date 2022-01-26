/*10.27. Саставити програм који за унети низ реалних бројева, дужине n, исписује елемент највеће
вредности, као и његове позиције у низу */

#include<stdio.h>
int main(){
    int i,n,j,max,imax;
    printf("Unesite n:");
    scanf("%d",&n);
    int niz[n];
    for(i=0;i<n;i++){
        scanf("%d", &niz[i]);
        if(i==0){
            max = niz[i];
        }
        if(max<niz[i]){
            printf("true");
            max = niz[i];
            imax = i;
        }
    }
    printf("Najveci broj je %d \n",max);
    printf("Inedks tog broja je %d",imax);
    return 0;
}