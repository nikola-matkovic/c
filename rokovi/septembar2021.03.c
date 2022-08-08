// Sastaviti program koji iz datoteke igraci txt čita podatke o igračima 
//(visina, težina, broj koševa, broj asistencija, broj ukradenih lopti, broj blokada), 
//pronalazi igrača sa najvećim brojem ostvarenih poena na standardnom izlazu ispisuje ime tog igrača i broj ostvarenih poena.
// Ukupan broj poena računati kao:
// broj koševa * 1
// broj asistencija * 0.5
// broj ukradenih lopti  * 0.3
//broj blokada * 0.22.
//Zadatak rešiti upotrebom funkcije za čitanje sadržaja datoteke, 
//funkcije za ispis podataka i funkcije za računanje ukupnog broja poena.
#include <stdio.h>
#include <stdlib.h>
#define MAX 100
typedef struct igrac{
    char ime[20];
    float visina;
    float tezina;
    int brojKoseva;
    int brojAsistencija;
    int brojUkradenihLopti;
    int brojBlokada;
    float ukupnoPoena;
}IGRAC;
int main(){
    FILE * datoteka = fopen("igraci.txt", "r");
    if(datoteka == NULL){
        printf("greška");
        exit(1);
    }
    IGRAC igraci[MAX];
    int i = 0;
    while(!feof(datoteka)){
        fscanf(datoteka, "%s %f %f %d %d %d %d", igraci[i].ime, &igraci[i].visina, &igraci[i].tezina, &igraci[i].brojKoseva, &igraci[i].brojAsistencija, &igraci[i].brojUkradenihLopti, &igraci[i].brojBlokada);
        igraci[i].ukupnoPoena = 0;
        igraci[i].ukupnoPoena += igraci[i].brojKoseva;
        igraci[i].ukupnoPoena += igraci[i].brojAsistencija * 0.5;
        igraci[i].ukupnoPoena += igraci[i].brojUkradenihLopti * 0.3;
        igraci[i].ukupnoPoena += igraci[i].brojBlokada * 0.22;
        printf("%f \n" ,igraci[i].ukupnoPoena );
        i++;
    }
    IGRAC najbolji = igraci[0];
    for(int j = 0; j < i; j++){
        if(igraci[j].ukupnoPoena > najbolji.ukupnoPoena){
            najbolji = igraci[j];
        }
    }
    printf("najbolji igrac je %s sa %f poena", najbolji.ime, najbolji.ukupnoPoena);
return 0;
}