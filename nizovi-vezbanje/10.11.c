/*10.11. Sastaviti program od dva niza A i B koja se spajaju u jedan niz C.*/

#include <stdio.h>
#define MAX 100
int main(){
    int n,m,i,niz1[MAX],niz2[MAX],niz3[MAX];
    printf("Unesite m i n:");
    scanf("%d %d",&m,&n);
    for(i=0;i<m;i++){
        scanf("%d",&niz1[i]);
    }
    for(i=0;i<n;i++){
        scanf("%d",&niz2[i]);
    }
    for(i=0;i<(n+m);i++){
        if(i<n){
            niz3[i]=niz1[i];
        }
        else if(i<m){
            niz3[i]=niz2[i];
        }
    }
    printf("Spoj dva niza je=%d",niz3[i]);
    return 0;
}