#include <stdio.h>
#include <math.h>

int faktorijal(int n){
    if(n==0)
        return 1;
    return n*faktorijal(n-1);
}


int main(){
    int fk, fn, fnk, n, k ;
    printf("unesite n i k");
    scanf("%d %d")
    fn= faktorijal(n);
    fk=faktorijal(k);
    fnk=faktorijal(n-k);
    int c= fb/(fk*fnk);
    printf("broj kombinacija  iznosi %d", c);
    return 0;
}