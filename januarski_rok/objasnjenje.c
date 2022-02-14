#include <stdio.h>

int main(){
    int broj = 0;
    do{
        printf("Unesite broj :"); 
        scanf("%d", &broj);
    }
    while(broj<0);
    return 0;
}