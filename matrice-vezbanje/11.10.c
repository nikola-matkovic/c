/*11.10. Саставити програм који учита један цео број х и матрицу целих бројева А димензија nxn, а
затим формира нову матрицу тако што све елементе испод главне дијагонала увећа за вредност х, а
елементе изнад главне дијагонале увећава за 2х. Елементи на главној дијагонали се не мењају.
Исписати добијену матрицу. 
*/

#include<stdio.h>

int main(){
    int x,i,j,n;
    printf("Unsite ceo broj:");
    scanf("%d",&x);
    printf("Uensite n:");
    scanf("%d",&n);
    int matrix[n][n];
    printf("Unesite elemente matrice:");
    for(i = 0;i < n;i++){
        for(j = 0;j < n;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("Matrica je:\n");
    for(i = 0;i < n;i++){
        for(j = 0;j < n;j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    for(i = 0;i < n;i++){
        for(j = 0;j < n;j++){
            if(i > j){
                matrix[i][j] += x;
            }
            if(i < j){
                matrix[i][j] += 2*x;
            }
        }
    }
    printf("Nova matrica je:\n");
    for(i = 0;i < n;i++){
        for(j = 0;j < n;j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    return 0;


}