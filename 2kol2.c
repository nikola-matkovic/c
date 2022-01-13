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
            //Izračunavanje  Koliko ima susednih polja;
            if( (i==0 && j==0)  || (i==0 && j == n-1) || (i==m-1 && j==0) ||  (i==m-1 && j==n-1)){
                t = 2;
            }
            else if(i==0 || i==m-1 || j==0 || j==n-1){
                t = 3;
            }
            else{
                t = 4;
            }
            //
            if(i==0 && j==0){
                s += matrica[i][j+1];
                s += matrica[i+1][j];
                //printf("s1: %d    ", s);
            }
            else if(i==0 && j==n-1){
                s += matrica[i][j-1];
                s += matrica[i+1][j];
                //printf("s2: %d    ", s);
            }
            else if(i==m-1 && j==0){
                s += matrica[i][j+1];
                s += matrica[i-1][j];
                //printf("s3: %d    ", s);
            }
            else if(i==m-1 && j==n-1){
                s += matrica[i][j-1];
                s += matrica[i-1][j];
                //printf("s4: %d    ", s);
            }
            else if(i==0){
                s += matrica[i][j+1];
                s += matrica[i][j-1];
                s += matrica[i+1][j];
                //printf("s5: %d    ", s);
            }
            else if(i==m-1){
                s += matrica[i][j+1];
                s += matrica[i][j-1];
                s += matrica[i-1][j];
                //printf("s6: %d    ", s);
            }
            else if(j==0){
                s += matrica[i][j+1];
                s += matrica[i+1][j];
                s += matrica[i-1][j];
                //printf("s7: %d    ", s);
            }
            else if(j==n-1){
                s += matrica[i][j-1];
                s += matrica[i+1][j];
                s += matrica[i-1][j];
                //printf("s8: %d    ", s);
            }
            else{
                s += matrica[i][j+1];
                s += matrica[i][j-1];
                s += matrica[i+1][j];
                s += matrica[i-1][j];
                //printf("s9: %d    ", s);
            }
            as = (float) s / (float) t;
            printf("%d %d \n", i, j);
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