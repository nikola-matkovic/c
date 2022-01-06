#include <stdio.h>

int main(){
    int i, n;
    printf("Unesite broj za proveru");
    scanf("%d", &n);
    for(i=2; i<n; i++){
        if(n % i == 0){
            printf("%d ", i);
        }
    }

    return 0;
}