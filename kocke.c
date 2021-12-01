#include <stdio.h>

int main(){
    int n, i;
    printf("Unesite broj koji zbir želite");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
        printf("%d %d \n", i, n-i);

    return 0;
}