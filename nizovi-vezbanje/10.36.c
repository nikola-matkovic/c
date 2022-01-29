/*10.36. Саставити програм који за унети низ целих бројева дужине n врши ротирање чланова низа за
x места у лево и исписује новодбијени низ. */

#include<stdio.h>
int main(){
    int i,n,t,k,j;
    printf("Unesite n:");
    scanf("%d",&n);
    int niz[n];
    printf("Unesite niz:");
    for(i=0;i<n;i++){
        scanf("%d",&niz[i]);
        }
        printf("Unesite k:");
        scanf("%d",&k);
        for(j=1;j<=k;j++){
        t=niz[0];
        for(i=0;i<n-1;i++){
        niz[i]=niz[i+1];
        }
        niz[n-1]=t;
    }
    
    for(i=0;i<n;i++){
        printf("%d",niz[i]);
    }
    return 0;

}