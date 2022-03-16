/*11.7. Саставити програм који учита матрицу димензија mxn, а затим је исписује у облику таблице
и на основу унетог редног броја врсте врши сабирање елемената у тој врсти. Елементи матрице су
цели бројеви.  */

#include<stdio.h>
int main(){
    
    int m,n,i,j,redni_broj,s=0;
    printf("Unsite m:");
    scanf("%d",&m);
    printf("Unesite n:");
    scanf("%d",&n);
    int A[m][n];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&A[i][j]);
        }
    }
    printf("Obican ispis:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    printf("Ispis u obliku tablice:\n\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("A[%d][%d] = %d   ",i,j,A[i][j]);
        }
        printf("\t\n\n");
    }
    printf("Unesite redni broj:");
    do{
          scanf("%d",&redni_broj);

    }
    while(redni_broj >= i);
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
        if(i == redni_broj){
        s+=A[i][j];
        }    
    }
}
printf("Zbir elemenata u vrsti koju smo zadali je:%d",s);
    return 0;
}

