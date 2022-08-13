
// 3.Na programskom jeziku C napisati strukturni program koji računa i prikazuje 
// korisniku na standardni ilar povinu svake parcele. Podaci se nalaze o fajlu "parcele txt" 
// i to naziv parcele a zatim XV levo, Ukoliko je površina parcele manja od hektara prikazati je
// u arima (na primer 2.55a). levo, e parcela koje su zadate u sledećem redosledu dole-levo, dole-desno,
// gore-desno, gore ukoliko je površina parcele bar jedan hektar prikazati je u hektarima (na primer 1.20h).
// Parcele nisu pravougaonog oblika, pa njihovu površinu računati kao povrtinu dva trougla primenom Heronove formule.

#include<stdio.h>
#include<stdlib.h>

typedef struct parcela{
    char nazv[30];
    int x;
    int y;
}PARCELA;

int main(){
    FILE *datoteka;
    datoteka = fopen("parcele.txt", "r");
    return 0;
}