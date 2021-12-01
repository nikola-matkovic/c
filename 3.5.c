#include <stdio.h>
int zamena_mesta(float* a, float* b){
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b; }
void main(){
    float x, y, z;
    printf("Unesit tri realna broja: ");
    scanf("%f %f %f", &x, &y, &z);
    (x>y) && zamena_mesta(&x, &y);
    (x>z) && zamena_mesta(&x, &z);
    (y>z) && zamena_mesta(&y, &z);
    printf("%.2f %.2f %.2f", x, y, z); }