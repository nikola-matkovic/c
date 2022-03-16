#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, j,n, t;

    do{
        printf("Unesite n");
        scanf("%d", &n);
    }while(n<2 || n>12);

    for(int i = 1; i<=6; i++){
        for(j=1; j<=6; j++){
            t = j + i;
            if(t == n){
                printf("Moguća kombinacija  je: %d %d \n", i, j);
            }
        }
    }    
    return 0;
}