// Datoteka ispiti.txt sadrži podatke o 5 studenata i ispitima u obliku niza struktura. Struktura sadrži polja prezime,
// redavanja, kolokvijumi i ispit, koja redom označavaju ime studenta, prezime studenta, broj sa predavanja, broj poena
// sa kolokvijuma broj poena sa ispita. Nacrtati strukturni dijagram toka algoritma 
// (ili tekstualno opisati algoritam za rešavanje zadatka) i sastaviti program koji čita poda studentima 
// i ispituje da li je student položio ispit (ispit je položen ako je zbir poena sa predavanja, kolokvijuma i ispita
// veći od 50). Ukoliko je student položio ispit, njegove podatke (ime, prezime, ukup poena) smestiti u datoteku polozili.txt
// ili ukoliko nije položio ispit iste podatke smestiti u datoteku n polozili.txt. Struktura koja se smešta u ove dve
// datoteke sadrži polja ime, prezime i ukupnoPoena. N spisati broj studenata koji su položili i broj studenata koji nisu
// položili ispit.

#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>

#define SIZE 100

typedef struct student{
    char ime[30]; 
    char prezime[30];
    int brPoenaSaPredavanja;
    int brPoenaSaKolokvijuma;
    int brPoenaSaIspita;
    int ukupanBrPoena;
}STUDENT;


int main(){
    FILE *ispiti = fopen("ispiti.txt", "r");
    FILE *polozili = fopen("polozili.txt", "w");
    FILE *nisu_polozili = fopen("pali.txt", "w");
    int i = 0;
    bool jeLiPolozio = false;
    struct student Studenti[SIZE];
    if(ispiti == NULL){
        printf("Greska 1");
        exit(1);
    }
    if(polozili == NULL){
        printf("Greska 2");
        exit(1);
    }
    if(nisu_polozili == NULL){
        printf("Greska 3");
        exit(1);
    }
    while(!feof(ispiti)){
        fscanf(ispiti,"%s %s %d %d %d",Studenti[i].ime,Studenti[i].prezime,&Studenti[i].brPoenaSaPredavanja,&Studenti[i].brPoenaSaKolokvijuma,&Studenti[i].brPoenaSaIspita);
        Studenti[i].ukupanBrPoena = Studenti[i].brPoenaSaPredavanja + Studenti[i].brPoenaSaKolokvijuma + Studenti[i].brPoenaSaIspita;
        if(Studenti[i].ukupanBrPoena > 50){
            jeLiPolozio = true;
        }
        i++;    
    }
    for(int j = 0;j < i;j++){
        if(jeLiPolozio){
            fprintf(polozili,"%s %s %d",Studenti[i].ime,Studenti[i].prezime,Studenti[i].ukupanBrPoena);
        }
        else{
            fprintf(nisu_polozili,"%s %s %d",Studenti[i].ime,Studenti[i].prezime,Studenti[i].ukupanBrPoena);
        }
        
    }
    fclose(ispiti);


    return 0;
}