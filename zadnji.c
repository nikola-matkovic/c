#include <stdio.h>
=======
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
<<<<<<< HEAD
    int matrica[m][n],  uredjena_matrica[m][n], zbirovi[n];
=======
    int matrica[m][n],   zbirovi[n];
>>>>>>> e4c2006c3b591788f04fd812dcaa89dd2cfb75d7
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
<<<<<<< HEAD
                    matrica[k][i]=matrica[k][i+1]^matrica[k][i];
                    matrica[k][i+1]=matrica[k][i+1]^matrica[k][i];
                    matrica[k][i]=matrica[k][i+1]^matrica[k][i];
                }
                zbirovi[i]=zbirovi[i]^zbirovi[i+1];
                zbirovi[i+1]=zbirovi[i]^zbirovi[i+1];
                zbirovi[i]=zbirovi[i]^zbirovi[i+1];
=======
                    zamena(&matrica[k][i+1],&matrica[k][i]);
                }
                zamena(&zbirovi[i],&zbirovi[i+1]);
>>>>>>> e4c2006c3b591788f04fd812dcaa89dd2cfb75d7
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
<<<<<<< HEAD
    
=======
>>>>>>> e4c2006c3b591788f04fd812dcaa89dd2cfb75d7
    return 0;
}