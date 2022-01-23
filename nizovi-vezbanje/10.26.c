/*10.26. Саставити рекурзивну функцију која исписује све пермутације скупа {1, 2, …, n}. Затим
тестирати функцију у главном програму за унету дужину пермуатција n. */

#include<stdio.h>
#define MAX 100

int ispis_niza(int niz[],int n){
    int i;
    for(i=0;i<n;i++){
        return niz[i];
        
    }
    
}
int koriscen(int niz[],int n,int x){
    int i;
    for(i=0;i<=n;i++){
        if(niz[i]==x){
            return 1;
        }
        return 0;
    }
}
int permutacija(int niz[],int n,int m){
    int i;
    if(m>n){
        ispis_niza(niz,n);
    }
    for(i=0;i<n;i++){
        if(! koriscen(niz,n,m+1)){
            niz[m]=i;
            permutacija(niz,m+1,n);
        }
    }
}
int main(){
    int n,niz[MAX];
    printf("Unesite broj permutacija:");
    scanf("%d",&n);
    if(n < 0 || n >= MAX){
        printf("Duzina permutacije moze biti broj od 0 do %d",MAX);
    }
    printf("Permutcije:%d",permutacija(niz,n,1));
    return 0;
}