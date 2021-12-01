#include <stdio.h>

int main(){
    int a, b, s=0, i;
    printf("unesite dva broja");
    scanf("%d %d", &a, &b);
    s=0;
    for(i=1; i<=b; i++){
        s=s+a;
        printf("I= %d, \t S= %d \n", i , s);
    }
    return 0;
}