/*
Ako se sa  ulaza učitava prirodan trocifren broj n, 
napisati program kojim se određuje najmanji 
trocifren broj m od cifara broja n;
primer; n=312 ----> m= 123
n=252 ------> m= 225;
n=301 ------> m=103
n=200 ------> m=200;
*/
#include <stdio.h>
// a>99 && a<1000

int main(){
    int n, m, prva, druga, treca, t;
    while(n<100 || n>999 ){
        printf("unesite trocifren broj");
        scanf("%i", &n);
    }
    prva=n/100;
    druga=(n/10)%10;
    treca=n%10;
    if(prva>druga){
        t=prva;
        prva=druga;
        druga=t;
    }
    if(druga>treca){
        t=prva;
        prva=treca;
        treca=t;
    }
    if(prva>treca){
        t=prva;
        prva=treca;
        treca=t;
    }
    m=prva*100+druga*10+treca;
    printf("%i", m);
    return 0;
}