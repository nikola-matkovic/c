//ispisati sve trocifrene brojeve koji  su jednaki 
//a)sumi kubova svojih cifara 
//B)sumi faktorijela svojih cifara.


//pod b;

#include <stdio.h>
#include <math.h>

int faktorijel(int n){
    int i, s=1; 
    for(i=1; i<=n; i++){
        s *= i;
    }
    return s;
}

int main() {

    int i, prva, druga, treca, s;

    for(i=100; i<1000; i++){
        s=0;
        prva = i / 100;
        druga = (i / 10) % 10;
        treca = i % 10;
        s = faktorijel(prva) + faktorijel(druga) + faktorijel(treca);
        if(i == s){
            printf("%d \n", i);
        }
    }
    return 0;
}