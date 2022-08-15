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

int suma(int matrix[SIZE][SIZE],int n){
    int suma = 0;
    int maks = 0;
    int min = matrix[n-1][n-1];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i + j >= n){
                if(matrix[i][j] > maks){
                    maks = matrix[i][j];
                }
                if(matrix[i][j] < min){
                    min = matrix[i][j];
                }
            }
        }
    }
    printf("maks: %d\n",maks);
    printf("min: %d\n",min);
    suma = maks + min;
    return suma;
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
    printf("Suma najmanjeg i najveceg ispod sporedne dijagonale je:%d",suma(X,n));

    
    

    return 0;
}