//napraviti program koji ispisuje sve savršene brojeve do n,
//savršen broj je broj koji se dobija zbirom svojih delitelja,
// npr: 6 = 3+2+1, 28= 14+ 4+ 7+ 2 + 1;
#include <stdio.h>
void main(){
    long n, i, s, j;
    printf("unesite broj n: ");
    scanf("%ld", &n);
    for(i=1; i<n; i++){
        s=0;
        for(j=1; j<=i/2; j++){
            if(i%j==0){
                s+=j;
                }
            }
        if(s==i)
            printf("Broj %ld je savršen \n", i);
    }
}