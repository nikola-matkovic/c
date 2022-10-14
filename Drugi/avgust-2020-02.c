// 2. Na programskom jeziku C napisati funkciju rotirajudesno koja vrši rotiranje prosledenog
// iza dužine N za jedno mesto udesno. U glavnom programu umeti kvadratnu matricu i dimenzija
// M&M i izvršiti rotiranje njenog oboda za jedno mesto u smeru kazaljke na satu (kao što je prikazano na primeru).
// Primer

#include<stdio.h>
#include<stdlib.h>

int main(){
    int m,i = 0,j = 0;
    int temp = 0;
    printf("Unesite m:");
    scanf("%d",&m);
    int matrica[m][m];
    for(i = 0;i < m;i++){
        for(j = 0;j < m;j++){
            scanf("%d",&matrica[i][j]);
        }
    }

    // for(i = 0;i < m;i++){
    //     for(j = i;j < m;j++){
    //         if(i != j){
    //             temp = matrica[i][j];
    //             matrica[i][j] = matrica[j][i];
    //             matrica[j][i] = temp;
    //         }
    //     }
    // }
    //1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16
    // for(i = 0;i < m;i++){
    //     for(j = i;j < m / 2;j++){
    //         if(i != j){
    //             temp = matrica[i][j];
    //             matrica[i][j] = matrica[i][m-j-2];
    //             matrica[i][m-j-2] = temp;
    //         }
    //     }
    // }
    // printf("Rotiranje matrice:\n");
    // for(i = 0;i < m;i++){
    //     for(j = 0;j < m;j++){
    //         printf("%d ",matrica[i][j]);
    //     }
    //     printf("\n");
    // }
    temp = matrica[0][0];
    for(i = 0;i < m;i++){
        for(j = 0;j < m;j++){
            if(i == 0){
                matrica[i][j] = matrica[i][j+1];
            }
        }
    }
    for(i = 0;i < m;i++){
        for(j = 0;j < m;j++){
            if(j == m-1){
                matrica[i][j] = matrica[i + 1][j];
            }
        }
    }
     for(i = 0;i < m;i++){
        for(j = m-1;j >= 0;j--){
            if(i == m-1){
                matrica[i][j] = matrica[i][j-1];
            }
        }
    }
    for(i = m-1;i >= 0;i--){
        for(j = 0;j < m;j++){
            if(j == 0){
                matrica[i][j] = matrica[i-1][j];
            }
        }
    }


       printf("Rotiranje matrice:\n");
      
    for(i = 0;i < m;i++){
        for(j = 0;j < m;j++){
            // if(matrica[i][j] == 0){
            //     printf("%d",temp);
            // }
            printf("%d ",matrica[i][j]);
        }
        printf("\n");
    }
 
    return 0;
}