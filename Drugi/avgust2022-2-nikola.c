#include <stdio.h>
#include<stdlib.h>

#define SIZE 100

int main(){
    int matrica[SIZE][SIZE];
    int m, n;
    printf("Unesite m: ");
    scanf("%d", &m);
    printf("Unesite n: ");
    scanf("%d", &n);
    int t1, t2;
    int broj = 1;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            matrica[i][j] = broj;
            broj++;
        }
    }
    t1 = matrica[0][0];
    t2 = matrica[0][1];
    for(int i = 0; i < n; i++){
        matrica[0][i+1] = t1;
        matrica[0][i+1] = t2;
        t1 = t2;
    }


    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", matrica[i][j]);
        }
        printf("\n");
    }

    return 0;
}