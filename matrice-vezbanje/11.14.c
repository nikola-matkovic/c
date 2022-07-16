// 11.17. Саставити програм који учита матрицу реалних бројева A димензија nxn и, а затим дату
// матрицу своди на горњу десну троугласту. Исписати новодобијену матрицу.

#include<stdio.h>

int main(){
    int n,i,j;
    printf("Unesite n:");
    scanf("%d",&n);
    int matix[n][n];
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            scanf("%d",&matix[i][j]);
        }    
    }
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            printf("%d ",matix[i][j]);
        }
        printf("\n");    
    }
    printf("Gornja trougaona matrica je:\n");
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
           
                if(i < j){
                    printf("%d ",matix[i][j]);
                }
                else{
                    printf(" *");
                }
               
            
            
        } 
        printf("\n");   
    }
    


    return 0;
}