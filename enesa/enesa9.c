#include <stdio.h>
#include<stdlib.h>

int main(){
    int a;
    int prva;
    int druga;
    int treca;
    scanf("%d", &a);
    for ( prva = 1; prva < 7; prva++)
    {
        for ( druga = 1; druga < 7; druga++)
        {
            for (treca = 1; treca <7 ; treca++)
            {
                if (prva + druga + treca==a)
            {
                printf("%d %d %d \n", prva, druga, treca);
            }
            }
            
            
        }
        
    }
    
    return 0;
}