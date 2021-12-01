/*Саставити програм којим се за унети природан број n израчунава суму: S n = + + + + 1! 2! 3! ... !. */

#include<stdio.h>
int main(){
    int n,i,f=1,s=0;
    printf("Unesite n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){ // 2 nacin for(i=1;i<=n;i++)
        f*=i;
        s+=f;
     }
     printf("Ispisati sumu faktorijala:%d",s);
     return 0;
    

    
}