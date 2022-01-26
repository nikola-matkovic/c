/*10.27. Саставити програм који за унети низ реалних бројева, дужине n, исписује елемент највеће
вредности, као и његове позиције у низу */

#include<stdio.h>
int main(){
    int i,n,j,max,imax;
    printf("Unesite n:");
    scanf("%d",&n);
    int niz[n];
    for(i=0;i<n;i++){
<<<<<<< HEAD
        scanf("%d",&niz[i]);
        if(i==0){
        max=niz[0];
=======
        scanf("%d", &niz[i]);
        if(i==0){
            max = niz[i];
        }
        if(max<niz[i]){
            printf("true");
            max = niz[i];
            imax = i;
>>>>>>> a076e9e528e9e5236afbcdd449f5651d7605370e
        }
        if(niz[i]>  max){           
        max=niz[i];
        imax=i;
    }

    }
<<<<<<< HEAD
    printf("Najveci broj je=%d",max);
    printf("Inedks tog broja je=%d",imax);
=======
    printf("Najveci broj je %d \n",max);
    printf("Inedks tog broja je %d",imax);
>>>>>>> a076e9e528e9e5236afbcdd449f5651d7605370e
    return 0;
}