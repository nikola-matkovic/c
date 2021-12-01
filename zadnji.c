#include <stdio.h>
void zamena(int* a, int* b){
    *a = *a^*b;
    *b = *a^*b;
    *a = *a^*b;
}
int main(){
    int m, n, i, j, k ;
    printf("unesite m  i n");
    scanf("%d %d", &m, &n);
    int matrica[m][n],   zbirovi[n];
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
                    zamena(&matrica[k][i+1],&matrica[k][i]);
                }
                zamena(&zbirovi[i],&zbirovi[i+1]);
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