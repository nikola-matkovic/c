/*11.5. Саставити програм који ће учитати матрицу димензија nxn, а затим исписати матрицу у
облику таблице, исписати све елементе на главној и споредној дијагонали, као и суме елемената на
главној и споредној дијагонали. Елементи матрице су цели бројеви. */

#include<stdio.h>
int main(){
    int n,i,j,a,b,c,d,e,f,s=0,k=0;
    printf("Unesite n:");
    scanf("%d",&n);
    int matrix[n][n];
    printf("Uneti elemente matrice:");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&matrix[i][j]);
            printf("element[%d][%d]=%d\n",i,j,matrix[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==0 && j==0){
                a=matrix[i][j];
            }
            if(i==1 && j==1){
                b=matrix[i][j];
            }
            if(i==2 && j==2){
                c=matrix[i][j];
                }
            if(i==0 && j==2){
                d=matrix[i][j];
            }
            if(i==1 && j==1){
                e=matrix[i][j];
            }
            if(i==2 && j==0){
                f=matrix[i][j];
            }
        }
    }
    s=a+b+c;
    k=d+e+f;
    printf("Na glavnoj dijagonali su brojevi=%d,%d,%d\n",a,b,c);
    printf("Suma brojeva na glavnoj dijagonali je=%d\n",s);
    printf("Na sporednoj dijagonali su brojevi=%d,%d,%d\n",d,e,f);
    printf("Suma brojeva na sporednoj dijagonali je=%d",k);
    return 0;
}