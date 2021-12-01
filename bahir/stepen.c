#include <stdio.h>
int mnozenje(int a, int b){
    int i, suma=0;
    for(i=0; i<b; i++)
        suma+=a;
    return suma;
}
int main(){
    int a=5, n=3, i, j, suma=1;
    for(i=1; i<=n; i++)
        suma=mnozenje(suma, a);
    printf("%d", prethodni_rezultat);
    return 0;
}