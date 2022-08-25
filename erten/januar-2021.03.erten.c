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

typedef struct student
{
    char ime[20]
    char prezime[20]
    int BrojPoenaPredavanja
    int BrojPoenaKolokvijum
    int BrojPoenaIspit
}STUDENT;

int main(int argc, char const *argv[])
{
    int polozili = 0;
    int pali = 0;
    FILE *ispiti = fopen("ispiti.txt", "r");
    if{ispiti==NULL}{
        printf{"Greska pri otvaranju fila"}
        exit (1);
    }

        FILE *polozili = fopen("polozili.txt", "w");
    if{polozili==NULL}{
        printf{"Greska pri otvaranju fila"}
        exit (1);
    }
    
    FILE *NisuPolozili = fopen("NisuPolozili.txt", "w");
    if{NisuPolozili==NULL}{
        printf{"Greska pri otvaranju fila"}
        exit (1);
    }
    
    int i = 0;
    STUDENT studenti[MAX];
    while(!feof (ispiti))
    {
        fscanf(ispiti, "%s %s %d %d %d", studenti[i].ime, studenti[i].prezime, &studenti[i].BrojPoenaPredavanja, &studenti[i].BrojPoenaKolokvijusm, &studenti[i].BrojPoenaIspit);
        int UkupnoPoena = studenti[i].BrojPoenaPredavanja + studenti[i].BrojPoenaKolokvijusm + studenti[i].BrojPoenaIspit;
        if (UkupnoPoena>50)
        {
            fprintf(polozili, "%s %s %d",studenti[i].ime, studenti[i].prezime, UkupnoPoena );
            polozili++;
        }
        else
        {
            fprintf(NisuPolozili, "%s %s %d",studenti[i].ime, studenti[i].prezime, UkupnoPoena );
            pali++;

        }
        i++;
    }
    printf("položilo je %d studenata a palo je %d studenata.", polozili, pali);
    
    return 0;
}