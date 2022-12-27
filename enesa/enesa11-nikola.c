#include <stdio.h>
#include<stdlib.h>

int main(){
    int a;
    printf("unesite broj:");
    scanf("%d", &a);
    int temp = a;
    for(int i = a; i > 0; i--){
        for(int j = 0; j < a; j++){
            printf("%d ", a);
        }
        printf("\n");
        a--;
    }
    a = temp;
    for(int i = 1; i <= a; i++){
        for(int j = 1; j <= i; j++){
            printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}