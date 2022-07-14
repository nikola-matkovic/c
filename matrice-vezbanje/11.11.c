// 11.11. Саставити програм који учита матрицу целих бројева А димензија mxn, а затим исписује
// матрицу у облику таблице и врши замену места двема колонама на основу унета два цела броја који
// представљају редне бројеве колона. 

#include<stdio.h>

int main(){
    int n,m,i,j,a,b;
    printf("Unesite m:");
    scanf("%d",&m);
    printf("Unesite n:");
    scanf("%d",&n);
    int matrix[m][n];
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("\n");
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            
            printf("%d ",matrix[i][j]);
        }
       
        printf("|\t");
    }
    int temp1,temp2;
    printf("Unesite prvu kolonu:");
    scanf("%d",&a);
    printf("Unesite drugu kolonu:");
    scanf("%d",&b);
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
         
        
        }
        matrix[i][b] = matrix[i][b] ^ matrix[i][a];
        matrix[i][a] = matrix[i][b] ^ matrix[i][a];
        matrix[i][b] = matrix[i][b] ^ matrix[i][a];
        // printf("a:%d",matrix[i][a]);
        // printf("b:%d",matrix[i][b]);
        // printf("\n");
    }
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            
            printf("%d ",matrix[i][j]);
        }
       
        printf("\n");
    }




    return 0;
}