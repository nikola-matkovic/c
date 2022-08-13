// 2. Na programskom jeziku C napisati funkciju rotirajudesno koja vrši rotiranje prosledenog
// iza dužine N za jedno mesto udesno. U glavnom programu umeti kvadratnu matricu i dimenzija
// M&M i izvršiti rotiranje njenog oboda za jedno mesto u smeru kazaljke na satu (kao što je prikazano na primeru).
// Primer

#include<stdio.h>
#include<stdlib.h>

int main(){
    int m,i,j;
    int temp = 0;
    printf("Unesite m:");
    scanf("%d",&m);
    int matrica[i][j];
    for(i = 0;i < m;i++){
        for(j = 0;j < m;j++){
            scanf("%d",&matrica[i][j]);
        }
    }
    printf("Rotiranje matrice:\n");
    for(i = 0;i < m;i++){
        for(j = i;j < m;j++){
            if(i != j){
                temp = matrica[i][j];
                matrica[i][j] = temp;
                matrica[j][i] = temp;
            }
        }
    }
    return 0;
}