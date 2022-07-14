#include <stdio.h>

int main(){
    int i, j, n, number=0;
    printf("Unesite n: ");
    scanf("%d", &n);
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if(n-1-i > j){
                printf("0");
            }
            else{
                printf("%d", ++number);
            }
        }
        printf("\n");
    }
}