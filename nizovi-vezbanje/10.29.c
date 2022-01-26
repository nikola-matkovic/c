/*10.29. Саставити програм који за унети низ целих бројева, дужине n, исписује елемент најмање
вредности међу парним бројевима. */

#include<stdio.h>
int main(){
    int i,n,m,niz1[m],min;
    printf("Unesite n:");
    scanf("%d",&n);
    int niz[n];
    for(i=0;i<n;i++){
        scanf("%d",&niz[i]);
        for(i=0;i<n;i++){
            if(niz[i]%2){
                niz[i]=niz[m];
            }
            for(i=0;i<m;i++){
                niz[0]=min;
                if(niz[i]<min){
                    min=niz[i];
                }
            }
        }
    }
    return 0;
}