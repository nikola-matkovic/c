// 2. Napisati program kojim se vrši zamena mesta najvećeg i najmanjeg elemenata
// ispod sporedne dijagonale matrice X. Učitavanje matrice I tralenu obradu realizovati
// pomoću odvojenih funkcija

#include<stdio.h>
#include<stdlib.h>

#define SIZE 100

void unos(int matrix[SIZE][SIZE],int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
}

void ispis(int matrix[SIZE][SIZE],int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int X[SIZE][SIZE];
    int n;
    printf("Unsite n:");
    scanf("%d", &n);
    printf("Unsite matrucu:");
    unos(X,n);
    printf("Uneta matrica:\n");
    ispis(X,n);
    

    return 0;
}