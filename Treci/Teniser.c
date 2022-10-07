// 3. Neka se u datoteci teniseri.txt nalaze podaci o teniserima po sledecem formatu: Sifra igrača
// (ceo broj), ime (najviše 30 znakova), prezime (najviše 30 znakova) i broj poena na ATP rang listi 
// (ceo broj) U datoteci wimbledon.txt se nalaze podaci o plasmanu tenisera na ovom teniskom turniru.
// U svakom redu datoteke se nalazi šifra tenisera (ceo broj), broj poena koji brani na turniru (ceo broj)
// broj poena koji je osvojio na turniru (ceo broj). Raspored tenisera u datotekama ne mora biti identičan,
// niti svi teniseri iz prve datoteke moraju postojati u drugoj datoteci. Napisati program na programskom jeziku
// C koji pročita sadržaj ulaznih tekst i smešta ih u niz struktura, a zatim u izlaznu datoteku atplista.txt za
// svakog tenisera upiše novi broj poena po formatu kao u prvoj ulaznoj datoteci. Novi broj poena se dobija tako
// što se od starog broja poena na ATP listi oduzme broj poena koje teniser brani, a zatim doda broj poena koje je
// teniser osvojio na turniru

#include <stdio.h>
#include<stdlib.h>

#define MAX 100

typedef struct teniser{
    int sifraIgraca;
    char ime[30];
    char prezime[30];
    int brojpoena;
    int brojPoenaKojeBrani;
    int brojPoenaKOjeJeOsvojio;
}TENISER;

int main(){
    TENISER nizTenisera[MAX];
    FILE * teniseri = fopen("teniseri.txt", "r");
    if(teniseri == NULL){
        printf("Greška prilikom otvaranja datoteke1");
        exit(1);
    }
    FILE * wimbledon = fopen("wimbledon.txt", "r");
    if(wimbledon == NULL){
        printf("Greška prilikom otvaranja datoteke2");
        exit(1);
    }
    FILE * atplista = fopen("atplista.txt", "w");
    if(atplista == NULL){
        printf("Greška prilikom otvaranja datoteke3");
        exit(1);
    }
    int i = 0;
    while(!feof(teniseri)){
        fscanf(teniseri, "%d %s %s %d", &nizTenisera[i].sifraIgraca, nizTenisera[i].ime, nizTenisera[i].prezime, &nizTenisera[i].brojpoena);
        nizTenisera[i].brojPoenaKOjeJeOsvojio = 0;
        nizTenisera[i].brojPoenaKojeBrani = 0;
        i++;
    }
    while(!feof(wimbledon)){
        int sifraIgraca;
        fscanf(wimbledon, "%d", &sifraIgraca);
        for(int j = 0; j < i; i++){
            if(sifraIgraca == nizTenisera[j].sifraIgraca ){
                fscanf(wimbledon, "%d %d", &nizTenisera[j].brojPoenaKojeBrani, &nizTenisera[j].brojPoenaKOjeJeOsvojio);
            }
        }
    }
    for(int j  = 0; j < i; j++){
        int noviBrojBodova = nizTenisera[j].brojpoena - nizTenisera[j].brojPoenaKojeBrani + nizTenisera[j].brojPoenaKOjeJeOsvojio;
        fprintf(atplista, "%d %s %s %d", nizTenisera[j].sifraIgraca, nizTenisera[j].ime, nizTenisera[j].prezime, noviBrojBodova);
    }
    fclose(teniseri);
    fclose(atplista);
    fclose(wimbledon);
    return 0;
}