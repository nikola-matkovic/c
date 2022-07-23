// 4.14. Саставити функцију којим се учитавају подаци за особу (име и презиме, адреса и старост у
// годинама), а затим у главном програму користећи претходну функцију учитати податке за две особе
// и исписати податке о старијој особи. 

#include<stdio.h>
#include<string.h>

typedef struct osoba{
    char ime[30];
    char prezime[30];
    char adresa[30];
    int godine;

}OSOBA;

void unesiOsobu(struct osoba *o){
    printf("Unesite ime:");
    scanf("%s",o->ime);
    printf("\nUnesite prezime:");
    scanf("%s",o->prezime);
    printf("\nUnesite adresu:");
    scanf("%s",o->adresa);
    printf("\nUnesite godine:");
    scanf("%u",&o->godine);
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

    // unesiOsobu(Osoba2);
    printf("Starija osoba je:\n %s %s zivi na adresi %s i ima %u godina",(*starija).ime,(*starija).prezime,(*starija).adresa,(*starija).godine);
    return 0;
}