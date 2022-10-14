/*2. Sastaviti program koji formira matricu realnih brojeva dienzija mxn. 
Program treba da izračuna koliko postoji elemenata matrice koji su jednaki 
aritmetičkoj sredini svojih
suseda i ispiše njihove pozicije u matrici. Unos matrice i izračunavanje odraditi
pomoću funkcija.

*/

#include<stdio.h>
#include<stdlib.h>

 #define SIZE 100

void unesiMatricu(int matrix[SIZE][SIZE],int m,int n){
    int i,j;
     for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            scanf("%d",&matrix[i][j]);
        }
    }
}

void ispisiMatricu(int matrix[SIZE][SIZE],int m,int n){
    int i,j;
     for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
}

void izracunaj(int matrix[SIZE][SIZE],int m,int n){
    int i,j;
    int brojSuseda = 0;
    int suma = 0;
    int brojTrazenihEl = 0;
    float as;
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            if(i - 1 >= 0 ){
                suma += matrix[i - 1][j];
                brojSuseda++;
            }
            if(j - 1 >= 0){
                suma += matrix[i - 1][j - 1];
                brojSuseda++;
            }
            if(j + 1 < n){
                suma += matrix[i - 1][j + 1];
                brojSuseda++;
            }
            if(i + 1 < m){
                suma += matrix[i + 1][j];
                brojSuseda++;
            }
            if(j - 1 >= 0){
                suma += matrix[i + 1][j - 1];
                brojSuseda++;
            }
            if(j + 1 < n){
                suma += matrix[i + 1][j + 1];
                brojSuseda++;
            }
            if(j - 1 >= 0){
                suma += matrix[i][j - 1];
                brojSuseda++;
            }
            if(j + 1 < n){
                suma += matrix[i][j + 1];
                brojSuseda++;
            }
             as = (float) suma / (float) brojSuseda;
        if(matrix[i][j] == as){
            brojTrazenihEl++;
            printf("%d %d\n",i,j);
        }
        }
       
    }
    printf("Postoji %d polja koji su jednaki zbiru arimetickih srednina",brojTrazenihEl);
}

int main(){
    int i,j,m,n;
    int matrix[SIZE][SIZE];
    printf("Unesite m:");
    scanf("%d",&m);
    printf("Unesite n:");
    scanf("%d",&n);
    unesiMatricu(matrix,m,n);
    ispisiMatricu(matrix,m,n);


    
return 0;
}