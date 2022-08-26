// 2. Na programskom jeziku C napisati funkciju rotirajudesno koja vrši rotiranje prosledenog
// iza dužine N za jedno mesto udesno. U glavnom programu umeti kvadratnu matricu i dimenzija
// M&M i izvršiti rotiranje njenog oboda za jedno mesto u smeru kazaljke na satu (kao što je prikazano na primeru).
// P


#include<stdio.h>
#include<string.h>
#include<stdbool.h>

#define SIZE 100

#define SIZE 100
void unos(int m,int n,int matrica[SIZE][SIZE]){
    int br = 1;
    for(int i = 0;i < m;i++){
        for(int j = 0;j < n;j++){
            matrica[i][j] = br;
            br++;
        }
    }
}

void ispis(int m,int n,int matrica[SIZE][SIZE]){
    for(int i = 0;i < m;i++){
        for(int j = 0;j < n;j++){
            printf("%d ",matrica[i][j]);
        }
        printf("\n");
    }
}

void rotiranjeMatrice(int m,int n,int matrica[SIZE][SIZE]){
    int trenutni = 0;
    int prethodni = 0;
    int red = 0,kolona = 0;
    prethodni = matrica[red + 1][kolona];
    for(int i = kolona;i < n;i++){
        trenutni = matrica[red][i];
        matrica[red][i] = prethodni;
        prethodni = trenutni;
        }
        red++;
        for(int i = red;i < m;i++){
            trenutni = matrica[i][n-1];
            matrica[i][n-1] = prethodni;
            prethodni = trenutni;   
        }
        n--;
        if(red < m){
            for(int i = n-1;i >= 0;i--){
                trenutni = matrica[m-1][i];
                matrica[m-1][i] = prethodni;
                prethodni = trenutni;
            }
        }
        m--;
        if(kolona < n){
            for(int i = m-1;i >= 0;i--){
                trenutni = matrica[i][kolona];
                matrica[i][kolona] = prethodni;
                prethodni = trenutni;
            }
        }
        kolona++;
    }


int main(){
    int matrica[SIZE][SIZE];
    int m = 4,n = 4;
    unos(m,n,matrica);
    ispis(m,n,matrica);
    printf("Rotiranje matrice:\n");
    rotiranjeMatrice(m,n,matrica);
    ispis(m,n,matrica);
    

    return 0;
}
