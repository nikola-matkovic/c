/*
8. Napisati program kojim se učitava trocifreni broj.
Ako je zadnja cifra manja od 5 dodati učitanom broju 2,
inače oduzeti 5.
// a > 99  && a <1000
*/
#include <stdio.h>

int main(){
    int a, zadnja;
    while(a<100 || a>999){
        printf("unesi trocifreni broj");
        scanf("%i", &a);
    }
    zadnja=a%10;
    if(zadnja<5){
        a=a+2;
    }
    else{
        a=a-5;
    }
    printf("%i", a);
    return 0;
}