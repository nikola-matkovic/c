#include <stdio.h>
int main()
{
    int a, b, c, max;
    printf("Unesite tri cela broja: ");
    scanf("%d%d%d", &a, &b, &c);
    if(a>=b && a>=c ){
        max=a;
    }
    else if(b>=a && b>=c){
        max=b;
    }
    else{
        max=c;
    }
    printf("Najveci je %d\n", max);
    return 0;
}