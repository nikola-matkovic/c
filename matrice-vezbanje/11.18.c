// 11.18. Саставити програм који учита матрицу целих бројева димензија mxn, а затим врши
// уређивање колона матрице по неопадајућем редоследу збирова елемената по колонама. Исписати
// новодобијену матрицу. 

#include<stdio.h>

int main(){
    int i,j,m,n;
    printf("Uneiste m:");
    scanf("%d",&m);
    printf("Uneiste n:");
    scanf("%d",&n);
    int matrix[m][n];
    int zbir[n];
    //Unos matrice
    printf("Unesite matricu:");
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    //Ispis matrice
    printf("Zadata matrica je:\n");
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    //Zbir elemenata po kolni
    printf("Zbir elemenata po kolni:\n");
    for(i = 0; i < n; i++){
        zbir[i] = 0;
        for(j = 0; j < m; j++){
            zbir[i] += matrix[j][i];
        }
        
        printf("%d ", zbir[i]);
    }
   

    return 0;
}