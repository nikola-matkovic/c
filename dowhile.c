#include <stdio.h>
int main(){
    int a;
    do{
        printf("molimo unesite broj manji od 100 \n ");
        scanf("%d", &a);
    }
    while(a>100);
    return 0;
}