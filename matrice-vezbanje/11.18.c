// 11.18. Саставити програм који учита матрицу целих бројева димензија mxn, а затим врши
// уређивање колона матрице по неопадајућем редоследу збирова елемената по колонама. Исписати
// новодобијену матрицу. 

#include<stdio.h>

int main(){
    int i,j,m,n,temp;
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
    //Uredjivanje matrice po neopadajucem redosledu sumama kolona
    printf("\nIspis matrice u uredjenom poretku:\n");

    for(j = 0; j < n-1; i++){
        for(i = 0; i < n-1; i++){
           
          if(zbir[i] > zbir[i + 1]){
            for(int k = 0; k < n; k++){
                matrix[k][i] = matrix[k][i] ^ matrix[k][i + 1];
                matrix[k][i + 1] = matrix[k][i] ^ matrix[k][i + 1];
                matrix[k][i] = matrix[k][i] ^ matrix[k][i + 1];
            }
            zbir[i] = zbir[i] ^ zbir[i + 1];
            zbir[i + 1] = zbir[i] ^ zbir[i + 1];
            zbir[i] = zbir[i] ^ zbir[i + 1];
        }
          
        }
        printf("\n");
    }
   

    return 0;
}