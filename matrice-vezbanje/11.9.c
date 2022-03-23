/*11.9. Саставити програм који учита матрицу реалних бројева А димензија nxn, а затим формира
нову матрицу тако што све чланове врсте (укључујући и дијагонални) дели са дијагоналним чланом.
Уколико је дијагонални члан једнак нули, све чланове у том реду поставља на нулу, осим
дијагоналног који поставља на 1. Исписати добијену матрицу.*/

#include<stdio.h>

int main(){
    int i,j,n,temp;
    printf("Unesite n:");
    scanf("%d",&n);
    int matrix[n][n];
    for(i = 0;i < n;i++){
        for(j = 0;j < n;j++){
             scanf("%d",&matrix[i][j]);
        }
    }
    for(i = 0;i < n;i++){
        if(matrix[i][i] != 0){
            temp = matrix[i][i];
            for(j = 0;j < n;j++){
                matrix[i][j] = matrix[i][j]/temp;
            }
        }
        else{
            for (j = 0;j < n;j++){
                matrix[i][j] = 0;
                matrix[i][i] = 1;
            }
        }
    }
    printf("Nova matrica:\n");
    for(i = 0;i < n;i++){
        for(j = 0;j < n;j++){
            printf("%d",matrix[i][j]);
        }
        printf("\n");
    }

}