#include <stdio.h>
int main(){
    int n, i, j, k=0; 
    scanf("%d", &n);
    for(j=0; j<n; j++){
        for(i=0; i<n; i++){
            if((i+j)>(n-2)){
                k++;
                printf("%d ", k);
            }
            else{
                printf("%d ", 0);
            }
        }
        printf("\n");
    }
    return 0;
}