#include <stdio.h>
#include<stdlib.h>

int main(){
    int a;
    int b;
    int i ;
    scanf("%d", &a);
    scanf("%d", &b);
    printf("Svi brojevi koji su deljivi sa 3 su: ");
    for ( i = a; i < b; i++)
    {
        if (i%3==0)
        {
            printf("%d ", i);
        }
        
    }
    
    return 0;
}