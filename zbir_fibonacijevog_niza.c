#include <stdio.h>
int main(){
    printf("unesite koliko brojeva fibonacijvog niza želite");
    int n, i;
    scanf("%d",&n);
    int prva=1, druga=1, rezultat=0 , zbir=2;
    for(i=3; i<=n; i++){
        rezultat=prva+druga;
        druga=prva;
        prva=rezultat;
        zbir+=rezultat;
    }
    printf("%d", zbir);
    return 0;
}