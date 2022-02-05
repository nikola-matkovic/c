/*11.1. Саставити програм који учитава, а затим исписује елементе матрице mxn. Елементи матрице
су цели бројеви. */

#include<stdio.h>
#include<stdlib.h>
int main(){
    int m,n,i,j;
    printf("Unesite m:");
    scanf("%d",&m);
    printf("Unesite n:");
    scanf("%d",&n);
    int matrix[m][n];
    printf("Unesite matricu:");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("element[%d][%d]=",i,j);
            scanf("%d",&matrix[m][n]);
        }
    }
    printf("Uneta matrica:\n");
         for(i=0;i<m;i++){
             printf("i=%d",i);
             for(j=0;j<n;j++){
                 printf("j=%d",j);
                 printf("%d",matrix[i][j]);
             }
             printf("\n");
        }
    return 0;
}