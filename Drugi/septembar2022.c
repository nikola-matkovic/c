#include <stdio.h>
#include<stdlib.h>
#include <math.h>

int main(){
    int m, n;
    do{
        printf("unesite m i n:");
        scanf("%d %d", &m, &n);
    }while(m <= 0 || n <= 0);
    if(n < m){
        m = m ^ n;
        n = m ^ n;
        m = m ^ n;
    }
    float suma = 0;
    for(int i = m; i <= n; i++){
        if(i % 2 == 1){
            suma += sqrt(i);
        }
    }
    printf("suma kvadratnih korena je : %f ", suma);
    return 0;
}