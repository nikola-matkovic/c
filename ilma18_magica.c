/* Napraviti prgram koji sipisuje sve magicne brojeve do n,
savrsen broj je broj koji se dobija zbirom svojih delitelja,
primer takvog br:6 je primervtakvog br jer je 6=3+2+1,28=14+7+4+2+1.*/
#include <stdio.h>
int main(){
    int n, s, i, j;
    printf("unesite granicu n");
    scanf("%i", &n);
    for(i=1; i<n; i++){
        s=0;
        for(j=1; j<i; j++){
            if(i%j==0){
                s+=j;
            }
        }
        if(s==i){
            printf("%i ",i);
        }
    }
    return 0;
}