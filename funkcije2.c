#include <stdio.h>

void sabiranje(int a, int b){
    int c = a + b;
    printf("Ja sam  naučio funkcije u c-u \n");
    printf("Ja umem preko funkcije da izračunam koliko je %d + %d \n ", a, b);
    printf("Rezultat je %d \n", c);
}

int  main(){
    sabiranje(5, 4);
    sabiranje(7, 3);
    sabiranje(1, 3);
    return 0;
}