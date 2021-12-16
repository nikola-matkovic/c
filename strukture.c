#include <stdio.h>
#include <string.h>

typedef struct osoba{
    char ime[15];
    char prezime[15];
    int godine;
    float tezina, visina;
}osoba;

int main(){
    osoba o1, o2;
    printf("unesite podatke o prvoj osobi:");
    scanf("%s %s %d %f %f", o1.ime, o1.prezime, &o1.godine, &o1.tezina, &o1.visina );
    printf("unesite podatke o drugoj  osobi:");
    scanf("%s %s %d %f %f", o2.ime, o2.prezime, &o2.godine, &o2.tezina, &o2.visina );
    if(o1.godine>o2.godine)
        printf("Prva osoba je starija");
    else if(o2.godine>o1.godine)
        printf("druga osoba je starija");
    else
        printf("isto su godište");
}