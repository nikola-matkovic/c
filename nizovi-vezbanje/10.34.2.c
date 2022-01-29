/*10.34. Саставити програм који од унетог низа А целих бројева дужине n формира и исписује низ В
са обрнутим распоредом елемената.*/
#include <stdio.h>

int main(){
    int n, i;
    printf("unesite n");
    scanf("%d", &n);
    int A[n], B[n];
    printf("Unesite niz: ");
    for(i=0; i<n; i++){
        scanf("%d", &A[i]);
    }
    for(i=n-1; i>=0; i--){
        B[n-1-i] = A[i];
        printf("%d", B[n-1-i]);
    }
    return 0;
}