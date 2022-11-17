#include <stdio.h>
#include<stdlib.h>

int main(){
    int m;
    printf("Unesite m : \n");
    scanf("%d", &m);
    for(int i = 0; i < m; i++){
        int temp ;
        printf("unesite koliko brojeva ima u  %d  grupi:  ", i+1 );
        scanf("%d", &temp);
        printf("Unesite  sve brojeve iz grupe:");
        int suma = 0;
        float sredina = 0;
        for(int i = 0; i < temp; i++){
            int broj;
            scanf("%d", &broj);
            suma +=broj;
        }
        sredina = suma / temp;
        printf("suma prve grupe je %d, a arihtemtička sredina %f ", suma, sredina );
    }
    return 0;
}