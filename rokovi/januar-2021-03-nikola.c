// 3. Datoteka ispiti.txt sadrži podatke o 5 studenata i ispitima u obliku niza struktura. Struktura sadrži polja:
// ime, prezime, predavanja, kolokvijumi ispit, koja redom označavaju ime studenta, prezime studenta,
// broj poena sa predavanja, broj poena sa kolokvijuma i broj poena sa ispita Sastaviti program koji čita
// podatke o studentima i ispituje da li je student položio ispit (ispit je položen ako je zbir poena sa
// predavanja, kolokvijuma i ispita veći od 50). Ukoliko je student položio ispit, njegove podatke 
// (ime, prezime, ukupan broj poena) smestiti u datoteku polozili.txt ili ukoliko nije položio ispit iste podatke
// smestiti u datoteku nisu polozili.txt. Struktura koja se smešta u ove dve datoteke sadrži polja ime, prezime
// i ukupnoPoena. Na ekranu ispisati broj studenata koji su položili i broj studenata koji nisu polazili ispit


#include<stdio.h>
#include<stdlib.h>

#define MAX 100

typedef struct student {
    char ime[20]; 
    char prezime[20];
    int predavanja;
    int kolokvijum;
    int ispit;
}STUDENT;

int main(){
    int brojPolozenih = 0; 
    int brojPalih = 0; 
    FILE * ispiti  = fopen("ispiti.txt", "r");
    if(ispiti == NULL){
        printf("greška prilikom otvaranja datoteke! \n");
        exit(1);
    }
    FILE * polozili  = fopen("polozili.txt", "w");
    if(polozili == NULL){
        printf("greška prilikom otvaranja datoteke! \n");
        exit(1);
    }
    FILE * pali  = fopen("pali.txt", "w");
    if(pali == NULL){
        printf("greška prilikom otvaranja datoteke! \n");
        exit(1);
    }
    //čitanje datoteka :
    STUDENT studenti[MAX]; 
    int i = 0;
    while(!feof(ispiti)){
        fscanf(ispiti,"%s %s %d %d %d", studenti[i].ime, studenti[i].prezime, &studenti[i].predavanja,  &studenti[i].kolokvijum,  &studenti[i].ispit);
        int ukupno = studenti[i].kolokvijum +  studenti[i].predavanja + studenti[i].ispit;
        if( ukupno > 50){
            fprintf(polozili, "%s %s %d\n", studenti[i].ime, studenti[i].prezime, ukupno);
            brojPolozenih++;
        }
        else{
            fprintf(pali, "%s %s %d\n", studenti[i].ime, studenti[i].prezime, ukupno);
            brojPalih++;
        }
        i++;
    }
    printf("%d je prošlo ispit, a %d je palo", brojPolozenih, brojPalih);
    return 0;
}