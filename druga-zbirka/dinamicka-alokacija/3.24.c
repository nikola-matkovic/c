// 3.24. Саставити програм који за квадратну матрицу целих бројева димензија nxn одређује
// детерминанту преко Лапласовог развоја. Исписати матрицу и вредност детерминанте. Матрицу
// сместити у динамичку зону меморије. 

#include<stdio.h>
#include<stdlib.h>

int main(){
system("clear");
int i,j,n;
printf("Unesite n:");
scanf("%d",&n);
int **matrix = (int**)malloc(n*sizeof(int));

for(i = 0; i < n; i++){
    matrix[i] = (int*)malloc(n*sizeof(int));
    for(j = 0; j < n; j++){
    }
}
printf("Uneiste elmente matrice:\n");
for(i = 0; i < n; i++){
    for(j = 0; j < n; j++){
        scanf("%d",&matrix[i][j]);
    }
}
printf("Ispis matrice koju ste uneli je:\n");
for(i = 0; i < n; i++){
    for(j = 0; j < n; j++){
        printf("%d ",matrix[i][j]);
    }
    printf("\n");
}


    return 0;
}

