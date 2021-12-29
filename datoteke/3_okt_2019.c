/*
data je datoteka radnici.txt koja sadrži podatke o radnicima u jednoj privatnoj klinici .
svaki slog u datoteci sadrži sledeće podatke: ime  i prezime radnika, bruto plata, tip zanimanja (H- hirurg)
(o- lekar opšte prakse), U- Urolog. formirati datoteku "plateHiruga.dat" koja će sadržati ime i prezime
radnika i neto plate za svakog od njih .. Neto plata se dobija kada od bruto plate oduz7memo
porez koji iznosi 20% i doprinose koji iznose 17% za hirurge, 15% za lekare opšte prakse i 10% za urologe.
na standardnom izlazu ispisati podatke o hirurgu koji ima najveću neto platu . */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX 100

typedef struct radnik{
    char ime[20];
    char prezime[20];
    float bruto;
    float neto; 
    char zanimanje;
}RADNIK;

int main(){
    FILE *dat1, *dat2;
    float procenatPoreza = 20, procenat_doprinosa, ukupan_procenat, ph = 17, po=15, pu=10 ;
    float uph = procenatPoreza + ph;
    float upo = procenatPoreza + po;
    float upu = procenatPoreza + pu;
    RADNIK radnici[MAX], najveca_zarada;
    int i=0, j; 
    if ((dat1 = fopen("radnici.txt", "r")) == NULL){
        printf("Greška prilikom otvaranja datoteke radnici.txt");
        exit(1);
    }
    najveca_zarada = radnici[0];
    while(1){
        if(feof(dat1)){
            break;
        }
        fscanf(dat1, "%s %s %f %c", radnici[i].ime, radnici[i].prezime, &radnici[i].bruto, &radnici[i].zanimanje);
        if(radnici[i].zanimanje=='O'){
            radnici[i].neto = radnici[i].bruto - (radnici[i].bruto * (upo / 100));
        }
        if(radnici[i].zanimanje=='H'){
            radnici[i].neto = radnici[i].bruto - (radnici[i].bruto * (uph / 100));
        }
        if(radnici[i].zanimanje=='U'){
            radnici[i].neto = radnici[i].bruto - (radnici[i].bruto * (upu / 100));
        }
        if(radnici[i].neto>najveca_zarada.neto){
            najveca_zarada = radnici[i];
        }
        i++;
    }
    if ((dat2 = fopen("plateradnika.txt", "w")) == NULL){
        printf("Greška prilikom otvaranja datoteke radnici.txt");
        exit(1);
    }
    for(j=0; j<i-1; j++){
        fprintf(dat2, "%s %s %f \n", radnici[j].ime, radnici[j].prezime, radnici[j].neto );
    }
    printf("Najveću zaradu ima %s %s, njegova bruto zarada iznosti %f a neto %f, on je %c", najveca_zarada.ime, najveca_zarada.prezime, najveca_zarada.bruto, najveca_zarada.neto, najveca_zarada.zanimanje);
    return 0;
}