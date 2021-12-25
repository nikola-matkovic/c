#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char brojevi[] = "123456";
    int broj = 1234;
    int brojevi_pretvoreno_int = atoi(brojevi);
    float brojevi_pretvoreno_float = atof(brojevi);
    long brojevi_pretvoreno_long = atol(brojevi);
    printf("pre konverzije : int : %d  string : %s \n", broj, brojevi );
    printf("posle pretvaranja: int: %d float: %f long: %ld ", brojevi_pretvoreno_int, brojevi_pretvoreno_float, brojevi_pretvoreno_long);
    return 0;
}