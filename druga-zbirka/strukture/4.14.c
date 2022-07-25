// 4.14. Саставити функцију којим се учитавају подаци за особу (име и презиме, адреса и старост у
// годинама), а затим у главном програму користећи претходну функцију учитати податке за две особе
// и исписати податке о старијој особи. 

#include<stdio.h>
#include<string.h>
#include <stdlib.h>

typedef struct osoba{
    char ime[30];
    char prezime[30];
    char adresa[30];
    char godine[3];
}OSOBA;

void unesiOsobu(struct osoba *o){
    printf("Unesite ime:");
    scanf("%[^\n]%*c",o->ime);
    printf("\nUnesite prezime:");
    scanf("%[^\n]%*c",o->prezime);
    printf("\nUnesite adresu:");
    scanf("%[^\n]%*c",o->adresa);
    printf("\nUnesite godine:");
    scanf("%[^\n]%*c", o->godine);
}

int main(){
    struct osoba Osoba1;
    struct osoba Osoba2;
    struct osoba *starija;
    printf("Unesite Osobu1:\n ");
    unesiOsobu(&Osoba1);
    printf("Unesite Osobu1:\n ");
    unesiOsobu(&Osoba2);
    if(Osoba1.godine > Osoba2.godine){
        starija = &Osoba1;
    }
    else{
        starija = &Osoba2;
    }
    printf("Starija osoba je:\n %s %s zivi na adresi %s i ima %s godina",(*starija).ime,(*starija).prezime,(*starija).adresa, (*starija).godine);
    return 0;
}