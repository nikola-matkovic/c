// 3.19. Саставити програм који формира матрицу реланих бројева од m врста и n колона у
// динамичкој зони меморије помоћу показивача на показивач. Исписати елементе матрице и одредити
// и исписати траг матрице (сума елемената на главној дијагонали), еуклидску норму матрице (корен
// суме квадрата свих елемената) и горњу вандијагоналну норму (сума апсолутних вредности
// елемената изнад главне дијагонале). 

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    system("clear");
    int m,n,i,j;
    int trag,norma,vdnorma;
    printf("Unesite m:");
    scanf("%d",&m);
    printf("Unesite n:");
    scanf("%d",&n);
    int **matrix = (int**)malloc(m*sizeof(int));
    for(i = 0; i < m; i++){
        matrix[i] = (int*)malloc(n*sizeof(int));
        for(j = 0; j < n; j++){
            // free(matrix[j]);
        }
        // free(matrix);
    }

    for(i = 0;i < m;i++){
        for(j = 0;j < n;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("Zadata matrica je:\n");
      for(i = 0;i < m;i++){
        for(j = 0;j < n;j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    trag = 0;
      for(i = 0;i < m;i++){
        for(j = 0;j < n;j++){
        }
         trag += matrix[i][i];
        
    }
    printf("Trag matrice je:%d",trag);
   
    norma = 0;
       for(i = 0;i < m;i++){
        for(j = 0;j < n;j++){
            norma += matrix[i][j];
        }
    }
    norma = sqrt(pow(norma,2));

    printf("\nNorma je:%d",norma);
    vdnorma = 0;
    for(i = 0;i < m;i++){
        for(j = 0;j < n;j++){
            if(i < j && matrix[i][j] > 0){
                vdnorma += matrix[i][j];
            }
        }
    }
    printf("\nVdnorma je:%d",vdnorma);


    

    
    return 0;
}