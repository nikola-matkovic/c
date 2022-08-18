#include <stdio.h>
#include<stdlib.h>

int main(){
    int a;
    int i, j;
    scanf("%d", &a);
    int broj = 1;
    for ( i = 0; i < a; i++)
    {
        for (j= 0; j < a; j++)
        {
            if((i+j) > (a-2)){
                printf("%d", broj);
                broj++;
            }
            else{
                printf("0");
            }
        }
        printf("\n");
    }
    return 0;
}