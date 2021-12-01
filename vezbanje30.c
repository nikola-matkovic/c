/*Dve kockice bacim ih korisnik bira zbir,ispisi sve moguce konbinacije koje daju taj zbir prpalo ali dzoni je tu da resiiiiiii*/


#include <stdio.h>

int main()
{
    int s, i, j, k;
    printf("Unesite broj s");
    scanf("%d", &s);
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