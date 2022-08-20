#include <stdio.h>
#include<stdlib.h>

int main(){
    int a;
    printf("unesite broj:");
    scanf("%d", &a);
    int kopijaOdA = a;
    for(int i = 0; i < kopijaOdA; i++){
        for(int j = 0; j < a; j++){
            printf("%d ", a);
        }
        printf("\n");
        a--;
    }
    return 0;
}