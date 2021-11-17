#include <stdio.h>
// 1 1 2 3 5 8  13  21 34 55 ..... 
// rezultat= prva + druga  //  rezultat = 1+1 = t1 + t2
//druga = prva;
//prva== rezultat;
int main(){
    printf("unesite koliko brojeva fibonacijvog niza želite");
    int n, i;
    scanf("%d",&n);
    int prva=1, druga=1, rezultat=0 ;
    printf("%d %d ", prva, druga);
    for(i=3; i<=n; i++){
        rezultat=prva+druga;
        druga=prva;
        prva=rezultat;
        printf("%d ", rezultat);
    }
    return 0;
}