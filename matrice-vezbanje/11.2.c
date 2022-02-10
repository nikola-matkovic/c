/*11.2. Саставити програм који за унету матрицу димензија nxn врши сабирање њених елеменета и
исписује добијени резултат. Елементи су цели бројеви. */

#include<stdio.h>
int main(){
    int i,j,n,s=0;
    printf("Unesite n:");
    scanf("%d",&n);
    int matrix[n][n];
    printf("Elementti matruce su:");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ",matrix[i][j]);
            s+=matrix[i][j];
        }
        printf("\n");   
    }
    printf("Suma elemenata matrice je=%d",s);
}