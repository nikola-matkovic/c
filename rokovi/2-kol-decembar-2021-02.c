/*2. Sastaviti program koji formira matricu realnih brojeva dienzija mxn. 
Program treba da izračuna koliko postoji elemenata matrice koji su jednaki 
aritmetičkoj sredini svojih
suseda i ispiše njihove pozicije u matrici. Unos matrice i izračunavanje odraditi
pomoću funkcija.

*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int i,j,m,n;
    printf("Unesite m:");
    scanf("%d",&m);
    printf("Unesite n:");
    scanf("%d",&n);
    int matrix[m][n];

    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("Uneta matrica je:\n");
     for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }

    
return 0;
}