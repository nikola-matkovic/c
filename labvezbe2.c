/* 2.Napistaii program na programskom jeziku c koji generise kvadratnu
matricu A reda n oblika:

        
        |  [1]  n=1 |
        | [0 1]     |
    A=  | [2 3] n=2 |
        | 0 0 1     |  
        | 0 2 3 n=3 |
*/                      
#include <stdlib.h>
#include<stdio.h>
void formiranje(int A[10] [10],int n)
{
    int i,j,br=1;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            if(i+j < n-1)
            A[i][j] = 0;
            else
            A[i][j] = br++;
}
int main(){
    int i,j,n,a[10] [10];
    printf("Unesite n"); scanf("%d",&n);
    formiranje(a,n);
    printf("matrica je\n");
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        printf("%d",a[i][j]);
        printf("\n");
        
        return 0;

    

    }