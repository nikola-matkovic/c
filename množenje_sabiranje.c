#include <stdio.h>

int main(){
    int a,b,i, rezultat=0;
    printf("unesite dva  broja za množenje: ");
    scanf("%d %d", &a, &b);
    for(i=1; i<=b; i++)
        rezultat+=a;
    printf("%d", rezultat);
}