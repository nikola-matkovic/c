/*10.2. Шта се исписује на екрану након извршавања следећег програма: */

#include<stdio.h>
#define MAX 10

int main(){
    int i,n,niz[MAX];
    printf("Unesite n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("%d.element niza \n",i+1);
        scanf("%d",&niz[i]);
    }
    for(i=0;i<n;i++){
        printf("%d. element niza je:%d \n",i+1,niz[i]);
    }
    return 0;
}


