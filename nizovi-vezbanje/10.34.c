/*10.34. Саставити програм који од унетог низа А целих бројева дужине n формира и исписује низ В
са обрнутим распоредом елемената.*/
#include <stdio.h>

void main(){
    int n, i, j=0;
    printf("unesite n");
    scanf("%d", &n);
    int A[n], B[n];
    printf("Unesite niz: ");
    for(i=0; i<n; i++){
        scanf("%d", &A[i]);
    }
    for(i=n-1; i>=0; i--){
        B[j] = A[i];
        printf("%d", B[j]);
        j++;
    }
}