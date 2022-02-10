/*10.8. Саставити програм који за унети низ (дужине n) целих бројева израчунава и исписуеј
аритметичку средину оних елемената низа који су дељиви са 3. */


#include<stdio.h>
#define MAX 100

int main(){
    int n,i,niz[MAX],t,s=0;
    printf("Unesite n:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&niz[i]);
        if(niz[i] % 3==0){
            s+=niz[i];
            t=s/n;
        }
        
    }
    printf("Aritmeticka sredina je=%d",t);
    return 0;
}