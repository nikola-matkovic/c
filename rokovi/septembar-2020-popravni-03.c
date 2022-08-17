/*Data je datoteka sledećeg sadržavaja:
a) prvi red predstavlja naziv departmana, 
b) drugi red datoteke predstavalja broj studenata na deparmtanu
c) naredni redovi predstavljaju podatke o položenim ispitima za svakog studenta upsan na sledeći način:
prezime_studenta, ime_studenta, broj_indeksa
n broj položenih  ipsita
{redni broj ipsita ocena} * n
*************************************************************** ulaz.txt
matematika
2
mujović,edita,8/2016
3
1 8
2 9
3 7
Korać, jasmina, 6/2017
1
1 10
učitane podatke treba smestiti u niz tipa struct student pri čemu strukutra student sadžri ime prezime broj indeksa i niz ocena, 
tipa int on maksimalnih 30 elemenata koji predstavlja niz. iz ispita koje studnt ima na studijama. 
ako je studne tpoložio ispit u nizu će biti upisana ocena, ako nije biće 0. redni broj ocene u ulaznoj datoteci je indeks ocene
u nizu ocena u strukuturi.
upisati u datoteku prosek.txt.*/

#include <stdio.h>
#include<stdlib.h>

#define MAX 30

typedef struct student{
    char ime[MAX];
    char prezime[MAX];
    char brojIndeksa[MAX];
    int ocene[MAX];
    int brojOcena; 
    float prosek;
}STUDENT;

int main(){
    FILE * ulaz = fopen("ulaz.txt", "r");
    if(ulaz == NULL){
        printf("Greška 1");
        exit(1);
    }
    char deparmtan[MAX];
    fscanf(ulaz, "%s", deparmtan);
    int broj_studenata;
    fscanf(ulaz, "%d", &broj_studenata);
    STUDENT studenti[MAX];
    for(int i = 0; i < broj_studenata; i++){
        int s = 0;
        fscanf(ulaz,"%s %s %s", studenti[i].prezime,studenti[i].ime, studenti[i].brojIndeksa);
        fscanf(ulaz, "%d", &studenti[i].brojOcena);
        for(int j = 0; j < studenti[i].brojOcena; j++){
            int temp;
            fscanf(ulaz,"%d %d", &temp, &studenti[i].ocene[j]);
            s += studenti[i].ocene[j];
        }
        studenti[i].prosek = s / studenti[i].brojOcena;
        printf("%f ", studenti[i].prosek);
    }
    return 0;
}