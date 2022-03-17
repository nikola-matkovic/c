//ispisati sve trocifrene brojeve koji  su jednaki 
//a)sumi kubova svojih cifara 
//B)umi faktorijela svojih cifara.
//pod a, drugi način;
#include <stdio.h>
#include <math.h>
int main() {

    int prva, druga, treca, s, broj;
    for(prva = 1; prva<10; prva++){
        for(druga = 0; druga<10; druga++){
            for(treca = 0; treca<10; treca++){
                s=0;
                s += pow(prva, 3);
                s += pow(druga, 3);
                s += pow(treca, 3);
                broj = prva*100+druga*10+treca;
                if(broj == s){
                    printf("%d \n", s);
                }
            }
        }
    }    
    return 0;
}