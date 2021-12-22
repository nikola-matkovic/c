#include <stdio.h>

int main(){
    int a, b, c, najveci;
    printf("Unesite 3 vrednosti");
    scanf("%i %i %i", &a, &b, &c);
    if(a>b && a>c){
        najveci=a;
    }
    else if(b>a && b>c){
        najveci=b;
    }
    else{
        najveci=c;
    }
    printf("%i", najveci);
    return 0;
}