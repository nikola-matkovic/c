#include <stdio.h>

void main(){
    int a = 20;
    int *pa = &a;
    int **ppa = &pa;
    printf("%d %d %d", a, *pa, **ppa);
}