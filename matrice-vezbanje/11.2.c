/*11.3. Саставити програм који учита матрицу димензија mхn, а затим врши сабирање елемената
који су парни бројеви. На крају исписати суму парних бројева и број елемената који су једнаки нули.
Елементи матрице су цели бројеви од 0 до 9. */

#include<stdio.h>
#include<stdlib.h>
int main(){
    int m,n,i,j,paran_1,paran_2,paran_3,paran_4,paran_5,paran_6,paran_7,paran_8,paran_9;
    int obican_1, obican_2, obican_3, obican_4, obican_5, obican_6, obican_7, obican_8, obican_9,k,z,semafor=0;
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
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            while(i==0 && j==0){
                if(matrix[i][j] % 2 == 0){
                    paran_1=matrix[i][j];
                }
                else {
                obican_1=matrix[i][j];
                }   
            }
            while(i==0 && j==1){
                if(matrix[i][j] % 2 == 0){
                    paran_2=matrix[i][j];
                }
                else{
                    obican_2=matrix[i][j];
                    }
            }
            while(i==0 && j==2){
                if(matrix[i][j] % 2 == 0){
                    paran_3=matrix[i][j];
                }
                else{
                    obican_3=matrix[i][j];
                }
                while(i==0 && j==2){
                if(matrix[i][j] % 2 == 0){
                    paran_4=matrix[i][j];
                }
                else{
                    obican_4=matrix[i][j];
                }
            }
            while(i==0 && j==2){
                if(matrix[i][j] % 2 == 0){
                    paran_5=matrix[i][j];
                }
                else{
                    obican_5=matrix[i][j];
                }
                while(i==0 && j==2){
                if(matrix[i][j] % 2 == 0){
                    paran_6=matrix[i][j];
                }
                else{
                    obican_6=matrix[i][j];
                }
                while(i==0 && j==2){
                if(matrix[i][j] % 2 == 0){
                    paran_7=matrix[i][j];
                }
                else{
                    obican_7=matrix[i][j];
                }
                while(i==0 && j==2){
                if(matrix[i][j] % 2 == 0){
                    paran_8=matrix[i][j];
                }
                else{
                    obican_8=matrix[i][j];
                }
                while(i==0 && j==2){
                if(matrix[i][j] % 2 == 0){
                    paran_9=matrix[i][j];
                }
                else{
                    obican_9=matrix[i][j];
                }
            for(k=0;k<paran_9;k++){
                for(z=0;z<obican_9;z++){
                    if(semafor=1){
                    paran_1+=paran_2;
                    paran_2+=paran_3;
                    paran_3=paran_4;
                    paran_4+=paran_5;
                    paran_5+=paran_6;
                    paran_6+=paran_7;
                    paran_7+=paran_8;
                    paran_8+=paran_9;

                    }
                  


                }
                
            }
            
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