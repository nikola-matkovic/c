// 5.19. Саставити програм који формира матрицу целих бројева диманзија mxn и уписује у датотеку
// matrica.txt. Уписивање се врши тако што се у први ред упишу m и n, а после тога елементи матрице
// у сваком реду по једна врста. Исписати матрицу у облику таблице на екрану. Име датотеке се уноси
// са главног улаза. 

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    FILE *matrica;
    int i,j,m,n;
    matrica = fopen("matrica.txt","r");
    if(matrica == NULL){
        printf("Greska");
    }
    printf("Unesite m:");
    scanf("%d",&m);
    printf("Unesite n:");
    scanf("%d",&n);
    int matrix[m][n];
     while(!feof(matrica)){
        for(i = 0;i < m;i++){
            for(j = 0;j < n;j++){
                fscanf(matrica,"%d",&matrix[i][j]);
            }
        }
    }
    while(!feof(matrica)){
        for(i = 0;i < m;i++){
            for(j = 0;j < n;j++){
                fprintf(matrica,"%d",matrix[i][j]);
            }
        }
    }
    fclose(matrica);


    return 0;
}