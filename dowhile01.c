//sasataviti program kojim se izračunava broj pi  ( 6.5)
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    float s, a;
    int i;
    printf("unesite broj a");
    scanf("$f", &a);
    s=0;
    i=1;
    do{
        s+=1./i;
        i++;
    }
    while (s<=a);
    printf("prvi broj koji je veci od %f jeste %f", a, s); 
    return 0;
}