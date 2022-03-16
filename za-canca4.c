//ispisati sve trocifrene brojeve koji  su jednaki 
//a)sumi kubova svojih cifara 
//B)umi faktorijela svojih cifara.


//pod a;
#include <stdio.h>
#include <math.h>

int main() {

    int i, prva, druga, treca, s;

    for(i=100; i<1000; i++){
        s=0;
        prva = i / 100;
        druga = (i / 10) % 10;
        treca = i % 10;
        s += pow(prva, 3);
        s += pow(druga, 3);
        s += pow(treca, 3);
        if(i == s){
            printf("%d \n", i);
        }
    }
    return 0;
}