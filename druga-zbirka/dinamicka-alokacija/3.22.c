// 3.22. Саставити програм који формира матрицу реалних бројева димензија mxn. Програм треба да
// израчуна колико постоји елемената матрице који су једнаки аритметичкој средини својих суседа и
// испише њихове позиције у матрици. Матрицу сместити у динамичку зону меморије. Програм треба
// да обради произвољан број улазних матрица. 

#include<stdio.h>
#include<stdlib.h>

int main(){
    system("clear");
    int i,j,m,n;
    printf("Unesite m:");
    scanf("%d",&m);
    printf("Unesite n:");
    scanf("%d",&n);
    int **matrix = (int**)malloc(m*sizeof(int));

    for(i = 0; i < n; i++){
        matrix[i] = (int*)malloc(n*sizeof(int));
        for(j = 0; j < m; j++){
        }
    }
    printf("Uneiste matricu:\n");
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Ispis zadate matice je:\n");
     for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}