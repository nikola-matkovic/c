#include <stdio.h>

#define MAX 100

int main(){
    int n, i, j, s, as=0;
    int matrica[MAX][MAX]; 
    do{
        printf("Unesite n: ");
        scanf("%d", &n);
    }
    while(n<2);
    printf("unesite matricu:");
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            scanf("%d", &matrica[i][j]);
        }   
    }
    int  minIndex=0, maxIndex=0, min=0, max=0;
    for(j=0; j<n; j++){
        s=0;
        for(i=0; i<n; i++){
            s+= matrica[i][j];
        }
        as = (float) s / (float)n;
        if(as < max){
            max =  as;
            maxIndex = j;
        }
        if(as > min){
            min =  as;
            maxIndex = j;
        }
        if(j==0){
            max=as;
            min=as;
        }
    }
    for(i=0; i<n; i++){
        matrica[i][maxIndex] = matrica[i][maxIndex] ^ matrica[i][minIndex];
        matrica[i][minIndex] = matrica[i][maxIndex] ^ matrica[i][minIndex];
        matrica[i][maxIndex] = matrica[i][maxIndex] ^ matrica[i][minIndex];
    }
    printf("Matrica nakon transofrmacije: \n");
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            printf("%d ", matrica[i][j]);
        }   
        printf("\n");
    }
}