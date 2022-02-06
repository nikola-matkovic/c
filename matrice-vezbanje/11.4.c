/*11.4. Саставити програм који учита две матрице целих бројева, a и b, обе димензија mхn, а затим
врши сабирање ове две матрице и исписује нову матрицу с. Матрице се сабирају тако што се
сабирају елементи матрица са истим индексима. */

#include<stdio.h>
int main(){
    int i,j,m,n,sabirac=0;
    printf("Unesite m:");
    scanf("%d",&m);
    printf("Unesite n:");
    scanf("%d",&n);
    int A[i][j],B[i][j],C[i][j];
    printf("Uensite elemente A:");
    for (i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&A[i][j]);
        }
    }
    printf("Uensite elemente B:");
    for (i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&B[i][j]);
        }
    }
    printf("Matrica C=\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            C[i][j]=A[i][j]+B[i][j];
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }
    return 0;
}