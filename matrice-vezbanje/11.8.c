/*11.8. Саставити програм који учита матрицу целих бројева А димензија mxn, а затим исписује
њене елементе у редоследу као што је приказано на следећој слици: */

#include<stdio.h>

int main(){
    int i,j,m,n,brojac = 0,k;
    printf("Unesite m:");
    scanf("%d",&m);
    printf("Uneiste n:");
    scanf("%d",&n);
    int matrix[m][n];
    for(i = 0;i < m;i++){
        for(j = 0; j < n;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("Matrica je 2:\n");
    for(i = 0;i < m;i++){
        for(j = 0; j < n;j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    printf("Elementi kao sa slike su:\n");
    for(j = 0;j < n;j++){
            if(j % 2 == 0){
                for(i = 0;i < m;i++){
                    printf("%d",matrix[i][j]);
                }
            }
            else{
                for(i = m-1;i >= 0;i--){
                    printf("%d",matrix[i][j]);
                }
            }
        }
        printf("\n\n");
    printf("Matrica je 2:\n");
    for(i = 0;i < m;i++){
        for(j = 0; j < n;j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
        return 0;
}
