#include <stdio.h>
#include <math.h>
int main(){
    float suma=0, i, n;
    scanf("%f",&n);
    for(i=0; i<n+1;i++){
        i+=1;
        suma = suma + pow(-1, i+1) * pow( (i/(3*i)), 2);
    }
    printf("%f", suma);
    return 0;
}