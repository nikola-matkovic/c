/*11.6. Саставити програм који учита матрицу димензија nxn, а затим је исписује у облику таблице и
израчунава и исписује суму елемената у свакој врсти. Елементи матрице су цели бројеви.*/ 

#include<stdio.h>
int main(){
    int n,i,j,s=0;
    printf("Unesite n:");
    scanf("%d",&n);
    int matrix[n][n];
    printf("Uneste matricu:");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("Normalan ispis matrice:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ",matrix[i][j]);

        }
        printf("\n");
    }
    printf("Ispis u obliku tablice:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf(" elemen[%d][%d]=%d \n",i,j,matrix[i][j]);
        }
    }
    printf("\nIzracunavanje sume vrsta:\n");
    for(i=0;i<n;i++){

        for(j=0;j<n;j++){
            printf("%d",matrix[i][j]);
            s+=matrix[i][j];
             printf("%d ",s);
        }
    }
   
    return 0;
    
}