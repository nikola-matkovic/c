#include <stdio.h>
#include<stdlib.h>

int main(){
    int a =0;
    int i;
    while (1)
    {
        scanf("%d", &i);
        a+=i;
        if (i == 0)
        {
            break;
        }
        
    }
    printf("%d", a);
    
    return 0;
    }