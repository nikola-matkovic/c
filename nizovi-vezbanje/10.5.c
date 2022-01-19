/*10.5. Саставити програм који ће учитати низ од n елемената и исписати их обрнутим редоследом.*/

#include<stdio.h>
#define MAX 100

int main(){
    int i,n,niz[MAX];
    printf("Unesite n:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&niz[i]);
    }
    printf("Obrnuti niz je=");
    for(i=n-1;i>=0;i--){
        printf("%d ",niz[i]);
    }
    return 0;


}