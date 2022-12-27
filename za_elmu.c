#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int main(){
    int m, n;
    int matrix[MAX][MAX];
    printf("Unesite dimenzije matrice");
    scanf("%d %d", &m, &n);
    int imin, jmin, imax, jmax, min, max;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            int br;
            scanf("%d", &br);
            matrix[i][j] = br;
            //  prvi put kad se pokrene restartuje min i max
            if(i == 0 &&  j == 0){
                min = br;
                max = br;
            }
            if(br < min) {
                min = br;
                imin = i;
                jmin = j;
            }
            if(br > max){
                max = br; 
                imax = i;
                jmax = j;
            }
        }
    }
    
    printf("Min: %d, %d, Max: %d, %d", imin, jmin, imax, jmax);
    // replace min and max values
    matrix[imin][jmin] = max;
    matrix[imax][jmax] = min;
    printf("\n");
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}