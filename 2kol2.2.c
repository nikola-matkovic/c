/*sastaviti program koji formira matricu realnih brojeva dimenzije mxn. 
Program treba da izračuna koliko postoji elemenata matrice koji su jedanki aritmetičkoj sredini svojih suseda i spiše 
njihove pozicije u matrici. Unos matrice i izračunavanje odraditi pomoću funkcija. */

#include <stdio.h>

int main(){
    int m, n, i, j, s, t, br = 0 ;
    float as;
    printf("Unesite dimenziju matrice:");
    scanf("%d %d", &m, &n);
    int matrica[m][n];
    //unos matric
        for(i=0; i<m; i++){
            for(j=0; j<n; j++){
                scanf("%d", &matrica[i][j]);
            }
        }
    //ispis matrice
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            as = 0;
            s = 0;
            t=0;
            if(i<m-1){
                s += matrica[i+1][j];
                t++;
            }
            if(i>0){
                s += matrica[i-1][j];
                t++;
            }
            if(j<n-1){
                s += matrica[i][j+1];
                t++;
            }
            if(j>0){
                s += matrica[i][j-1];
                t++;
            }
            as = (float) s / (float) t;
            if(matrica[i][j] == as){
                br++;
                printf("%d %d \n", i, j );
            }
        }
        printf("\n");
    }
    printf("Postoji %d polja koji su jednaki zbirku aritmetičkih sredina", br);
    return 0;
}