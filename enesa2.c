//sabiranje 2 broja

#include <stdio.h>

int main(){
    int a, b, c;
    // umesto %d može %i
    // %c - char
    // %f - float
    // %i - int
    printf("Molimo vas unesite prvi broj : ");
    scanf("%i", &a);
    printf("Molimo vas unesite drugi broj : ");
    scanf("%i", &b);
    c= a+b;
    printf("Zbir brojeva %d i %d je %d", a,b,c);
    return 0;
}