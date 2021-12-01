#include <stdio.h>
int main(){
    int a;
    printf("Molimo vas unesite broj");
    scanf("%i",&a);
    switch(a){
        case 0:
            printf("nula");
            break;
        case 1: 
            printf("jedan");
            break;
        case 9: 
            printf("devet");
            break;
    }

    return 0;
}