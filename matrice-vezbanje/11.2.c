/*11.3. Саставити програм који учита матрицу димензија mхn, а затим врши сабирање елемената
који су парни бројеви. На крају исписати суму парних бројева и број елемената који су једнаки нули.
Елементи матрице су цели бројеви од 0 до 9. */

#include<stdio.h>
#include<stdlib.h>
int main(){
    int m,n,i,j;
    printf("Unesite m:");
    scanf("%d",&m);
    printf("Unesite n:");
    scanf("%d",&n);
    int matrix[m][n];
    printf("Uneste matricu:");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&matrix[i][j]);
        }
    } 




    
    // // // // // // // for(i=0;i<m;i++){
    // // // // // // //     for(j=0;j<n;j++){
    // // // // // // //         printf("%d ",matrix[i][j]);
    // // // // // // //     }
    // // // // // // //     printf("\n");
    // // // // // // // }
    return 0;
}