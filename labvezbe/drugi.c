#include <stdio.h>
int main(){
    int n, i, j, k=0; 
    scanf("%d", &n);
    int A[n][n];
    for(j=0; j<n; j++){
        for(i=0; i<n; i++){
            if((i+j)>(n-2)){
                k++;
                A[i][j]=k;
            }
            else{
                A[i][j] =0;
            }
        }
    }
    for(j=0; j<n; j++){
        for(i=0; i<n; i++){
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }


    return 0;
}