// 4.18. Полином је представљен структуром која садржи ред полинома и низ коефицијената.
// Саставити функције за израчунавање збира, разлике, производа и количника два полинома који су
// задати помоћу коефицијената. Саставити и функције које читају и исписују полиноме. Затим
// саставити главни програм који тестира претходне функције. 

#include<stdio.h>

typedef struct polinom{
    int koeficijenti[30];
    int eksponent;
}POLINOM;

struct polinom sabiranjeDvaPolinoma(struct polinom p1,struct polinom p2){
    int i;
    struct polinom p;
    if(p1.eksponent > p2.eksponent){
        p.eksponent = p1.eksponent;
    }
    else{
        p.eksponent = p2.eksponent;
    }
    for(i = 0; i <= p.eksponent; i++){
        if(i > p2.eksponent){
            p.koeficijenti[i] = p1.koeficijenti[i];
        }
        else if(i > p1.eksponent){
            p.koeficijenti[i] = p2.koeficijenti[i];
        }
        else{
             p.koeficijenti[i] = p2.koeficijenti[i] + p1.koeficijenti[i];
        }
    }
    while(p.eksponent >= 0 && p.koeficijenti[p.eksponent] == 0){
        p.eksponent--;    
    }
    return p;
}

int main(){

    return 0;
}