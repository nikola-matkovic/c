//izračunaj sumu s = 1*2 + 2*3 + 3*4 ----- n-1*n
#include <stdio.h>
int main(){
    int s, n, i;
    printf("unesite n: \n");
    s=0;
    scanf("%d", &n);
    for(i=1; i<n; i++){
        s+=i*(i+1);
    }
    printf("rezultat je %d", s);
    return 0;
}