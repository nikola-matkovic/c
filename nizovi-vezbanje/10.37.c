/*10.37. Саставити програм који за унети низ целих бројева дужине n врши замену суседних
елемената низа на парним и непарним позицијама и исписује новодобијени низ. */

#include<stdio.h>
int main(){
    int i,n,t,p,j,k,a,b;
    printf("Unesite n:");
    scanf("%d",&n);
    int niz[n];
    for(i=0;i<n;i++){
        scanf("%d",&niz[i]);
    }
    for(i=0;i<n;i++){
        if(i==0){
        t=niz[i];
        niz[i]=niz[i+1];
        niz[i+1]=t;
        }
        if(i==n-1){
            p=niz[n-1];
            niz[n-1]=niz[n-2];
            niz[n-2]=t;
        }
        else {
            for(j=i+1;j<n-2;j++){
                if(j+1 % 2 == 0 && j+2 % 2==1){
                    a=j+1;
                    b=j+2;
                    k=a;
                    a=b;
                    b=k;
                }

            }

        }
    }
    for(i=0;i<n;i++){
        printf("%d",niz[i]);
    }
    return 0;
}