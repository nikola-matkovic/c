#include <stdio.h>

int main()
{
    int s, i, j, k;
    do{
    printf("Unesite broj s");
    scanf("%d", &s);
    }
    while(s>18 || s<3);
    for(i=1; i<=6; i++){
        for(j=1; j<=6; j++){
            for(k=1; k<=6; k++){
                if(i+j+k==s)
                    printf("Moguća kombinacija je %d %d %d \n", i, j, k);
            }
        }
    }
    return 0;
}