#include <stdio.h>
int main(){
    int n, i, s, j;
    printf("Unesite n \n");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        s=0;
        for(j=1; j<i; j++){
            if(i%j==0){
                s+=j;
            }
        }
        if(s==i){
            printf("%d\n", i);
        }
    }

    return 0;
}