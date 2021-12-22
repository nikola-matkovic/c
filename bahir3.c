//46     46. Napisati program kojim se izračunava:
//S=1!+2!+3!+…+n!
#include <stdio.h>
int main(){
    long s=0;
    int n, i , j, f=0;
    printf("%d", n);
    for(i=1; i<=1; i++){
        f=1;
        for(j=2; j<=i; i++){
            f*=j;
        }
        s+=f;
    }
    printf("suma  faktorijala je %li", s);
    return 0;
}