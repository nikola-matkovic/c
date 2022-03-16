#include <stdio.h>

int main() {
    int n, i, j,  s;
    printf("unesite n: ");
    scanf("%d", &n);
    for(j=2; j<n; j++){
        s=0;
        for (i=1; i<j; i++){
            if(j % i == 0){
                s += i;
            }
        }
        if(s == j){
            printf("%d broj je maginač \n", j);
        }
    }
    return 0;
}