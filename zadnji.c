/*11.18. Саставити програм који учита матрицу целих бројева димензија mxn, а затим врши
уређивање колона матрице по неопадајућем редоследу збирова елемената по колонама. Исписати
новодобијену матрицу. 
1 2 3 5
1 8 2 0
2 3 1 6

1 3 5 2 
1 2 0 8
2 1 6 3

*/

#include <stdio.h>
int main(){
    int m, n, i, j, k ;
    printf("unesite m  i n");
    scanf("%d %d", &m, &n);
    int matrica[m][n],  uredjena_matrica[m][n], zbirovi[n];
    printf("Unesite elemente matrice \n");
    // unos 
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            scanf("%d", &matrica[i][j]);
        }
    }
    // traženje zbira
    for(i=0; i<n; i++){            
        zbirovi[i]=0;
        for(j=0; j<m; j++){
            zbirovi[i]+=matrica[j][i];
        }
    }
    //ispis prve matrice
    printf("matrica koju ste uneli je: \n");
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            printf("%d ", matrica[i][j]);
        }
        printf("\n");
    }
    // pravljenje nove matrice
    for(j=0; j<n-1; j++){
        for(i=0; i<n-1; i++){
            if(zbirovi[i]>zbirovi[i+1]){
                for(k=0; k<m; k++){
                    matrica[k][i]=matrica[k][i+1]^matrica[k][i];
                    matrica[k][i+1]=matrica[k][i+1]^matrica[k][i];
                    matrica[k][i]=matrica[k][i+1]^matrica[k][i];
                }
                zbirovi[i]=zbirovi[i]^zbirovi[i+1];
                zbirovi[i+1]=zbirovi[i]^zbirovi[i+1];
                zbirovi[i]=zbirovi[i]^zbirovi[i+1];
            }
        }
    }
    printf("Redukovana matrica je: \n");
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            printf("%d ", matrica[i][j]);
        }
        printf("\n");
    }
    printf("Zbirovi \n");
    for(i=0; i<n; i++){
        printf("%d, ", zbirovi[i]);
    }
    
    return 0;
}