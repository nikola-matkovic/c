// 4.18. Полином је представљен структуром која садржи ред полинома и низ коефицијената.
// Саставити функције за израчунавање збира, разлике, производа и количника два полинома који су
// задати помоћу коефицијената. Саставити и функције које читају и исписују полиноме. Затим
// саставити главни програм који тестира претходне функције. 

#include<stdio.h>

typedef struct polinom{
    int koeficijenti[30];
    int eksponent;
}POLINOM;

int odredjivanjeEksponenta(struct polinom p1,struct polinom p2){
    int i;
    struct polinom p;
    if(p1.eksponent > p2.eksponent){
        p.eksponent = p1.eksponent;
    }
    else{
        p.eksponent = p2.eksponent;
    }
    return p.eksponent;
}

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
struct polinom oduzimanjeDvaPolinoma(struct polinom p1,struct polinom p2){
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
            p.koeficijenti[i] = p2.koeficijenti[i] - p1.koeficijenti[i];
        }
    }
    while(p.eksponent >= 0 && p.koeficijenti[p.eksponent] == 0){
        p.eksponent--;    
    }
    return p;
}

int main(){
    struct polinom p1;
    struct polinom p2;
    int i;
    printf("Unesite koeficijente polinoma p1");
    for(i = 0;i < odredjivanjeEksponenta(p1,p2);i++){
        scanf("%d",&p1.koeficijenti[i]);
    }
    printf("Unesite koeficijente polinoma p2");
    for(i = 0;i < odredjivanjeEksponenta(p1,p2);i++){
        scanf("%d",&p2.koeficijenti[i]);
    }
    printf("Polinom p1 je:\n");
    for(i = 0;i < odredjivanjeEksponenta(p1,p2); i++){
        printf("%d",p1.koeficijenti[i]);
    }

    return 0;
}