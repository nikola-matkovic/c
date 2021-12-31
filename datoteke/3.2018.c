/*date su dve datoteke ROBA.DAT i PROMET.DAT. prva datotka sastoji se od slogova koji sadrže:
//šifru artika koji se nalazi u magacinu, naziv robe, naziv proizvodjača, i količina na početku radnog dana.
//druga datoteka, na kraju radnog dana, sadrži informacije o tome koliko se uvećala ili smanjila količina
nekog artikla u magacinu.
slog druge datoteke čine šifra artikla i količne. vrednost polja količina može biti 
pozitivna (uvećana količina  robe u magacinu) ili negativna (smanjena količina robe u magacinu).
Napisati program kojim  će se na kraju radnog dana ubaciti prave količine artikla  u datoteku 
roba.dat  a na osnovu datoteke promet.dat */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

#define MAX 100

typedef struct proizvod{
    int sifra, kolicina_na_pocetku_dana, kolicina_na_kraju_dana;
    char ime[20], proizvodjac[20];
}PROIZVOD;

int main(){
    int i=0, j, t1, t2;
    FILE *roba, *promet;
    PROIZVOD proizvodi[MAX];
    if((roba = fopen("roba.dat", "r")) == NULL){
        printf("Greška prilikom otvaranja datoteke roba.dat");
        exit(1);
    }
    if((promet = fopen("promet.dat", "r")) == NULL){
        printf("Greška prilikom otvaranja datoteke promet.dat");
        exit(1);
    }
    while(1){
        if(feof(roba)){
            break;
        }
        fscanf(roba, "%d %s %s %d", &proizvodi[i].sifra, proizvodi[i].ime, proizvodi[i].proizvodjac, &proizvodi[i].kolicina_na_pocetku_dana  );
        fscanf(promet, "%d %d", &t1, &t2 );
        proizvodi[i].kolicina_na_kraju_dana = proizvodi[i].kolicina_na_pocetku_dana + t2;
        i++;
    }
    fclose(roba);
    if((roba = fopen("roba2.dat", "w")) == NULL){
        printf("Greška prilikom otvaranja datoteke roba.dat");
        exit(1);
    }
    for(j=0; j<i-1; j++){
        fprintf(roba, "%d %s %s %d\n", proizvodi[j].sifra, proizvodi[j].ime, proizvodi[j].proizvodjac, proizvodi[j].kolicina_na_kraju_dana  );
    }
    fclose(roba);
    fclose(promet);
    return 0;
}