// 11.12. Саставити програм који учита матрицу целих бројева А димензија nxn, а затим исписује
// матрицу у облику таблице и врши њено транспоновање. Танспонована матрица је матрица која се
// добија када се врсте почетне матрице поређају по колонама.
// а) без употребе функција;
// б) употребом функција за учитавања, исписивање и транспоновање матрице.
// Исписати транспоновану матрицу.


#include<stdio.h>
#define SIZE 10

void transponovanaMatrica(int matrix[SIZE][SIZE],int n){
    int i,j;
    for(i = 0;i < n;i++){
        for(j = i + 1;j < n;j++){
            matrix[i][j] = matrix[i][j] ^ matrix[j][i];
            matrix[j][i] = matrix[i][j] ^ matrix[j][i];
            matrix[i][j] = matrix[i][j] ^ matrix[j][i];
        }
    }
}


int main(){
    int n,i,j;
    printf("Uensite n:");
    scanf("%d",&n);
    int matrix[n][n];
    printf("Unesite matricu:\n");
    for(i = 0;i < n;i++){
        for(j = 0;j < n;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    for(i = 0;i < n;i++){
        for(j = i + 1;j < n;j++){
            matrix[i][j] = matrix[i][j] ^ matrix[j][i];
            matrix[j][i] = matrix[i][j] ^ matrix[j][i];
            matrix[i][j] = matrix[i][j] ^ matrix[j][i];
        }
    }
    printf("Transponovana matrica je:\n");
    for(i = 0;i < n;i++){
        for(j = 0;j < n;j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    


    return 0;
}