// 3. Neka se u datoteci teniseri.txt nalaze podaci o teniserima po sledecem formatu: Sifra igrača
// (ceo broj), ime (najviše 30 znakova), prezime (najviše 30 znakova) i broj poena na ATP rang listi 
// (ceo broj) U datoteci wimbledon.txt se nalaze podaci o plasmanu tenisera na ovom teniskom turniru.
// U svakom redu datoteke se nalazi šifra tenisera (ceo broj), broj poena koji brani na turniru (ceo broj)
// broj poena koji je osvojio na turniru (ceo broj). Raspored tenisera u datotekama ne mora biti identičan,
// niti svi teniseri iz prve datoteke moraju postojati u drugoj datoteci. Napisati program na programskom jeziku
// C koji pročita sadržaj ulaznih tekst i smešta ih u niz struktura, a zatim u izlaznu datoteku atplista.txt za
// svakog tenisera upiše novi broj poena po formatu kao u prvoj ulaznoj datoteci. 
// Novi broj poena se dobija tako što se od starog broja poena na ATP listi oduzme broj poena koje teniser brani,
// a zatim doda broj poena koje je teniser osvojio na turniru

#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int main(int argc, char const *argv[])
{
    typedef struct teniseri
    {
        int SifraIgraca;
        char Ime[30];
        char Prezime[30];
        int BrojPoena;
        int BrojPoenaKojihBrani;
        int BrojOsvojenihPoena;
    }TENISERI;
    
    FILE *atplista = fopen("atplista.txt", "w");
    if (atplista == NULL);
    {
        printf("GRESKA PRI OTVARANJU");
        exit (1);
    } 

    FILE *teniseri = fopen("teniseri.txt", "r");
    if (teniseri == NULL);
    {
        printf("GRESKA PRI OTVARANJU");
        exit (1);
    } 

    FILE *wimbldon = fopen("wimbldon.txt", "r");
    if (wimbldon == NULL);
    {
        printf("GRESKA PRI OTVARANJU");
        exit (1);
    } 
    int i = 0;
    int NoviBrojPoena;

    TENISERI teniseriniz[MAX];

    while (!feof(teniseri))
    {
        fscanf(teniseri, "%d %s %s %d" , &teniseriniz[i].SifraIgraca, teniseriniz[i].Ime, teniseriniz[i].Prezime, &teniseriniz[i].BrojPoena);
        teniseriniz[i].BrojPoenaKojihBrani = 0;
        teniseriniz[i].BrojOsvojenihPoena = 0;
        i++;
    }
    int temp = 0;
    while (!feof(wimbldon))
    {
         fscanf(wimbldon, " %d" , &temp);
         for (int j = 0; j < i; j++)
         {
            if (teniseriniz[j].SifraIgraca == temp)
            {
                fscanf(teniseri, "%d %d" , &teniseriniz[j].BrojPoenaKojihBrani,  &teniseriniz[j].BrojOsvojenihPoena);
            }
         }
         
    }
    for (int j = 0; j < i; j++)
    {
        NoviBrojPoena = teniseriniz[i].BrojPoena - teniseriniz[j].BrojPoenaKojihBrani +  teniseriniz[j].BrojOsvojenihPoena;
        fprintf(atplista, "%d %s %s %d \n" , teniseriniz[i].SifraIgraca, teniseriniz[i].Ime, teniseriniz[i].Prezime, NoviBrojPoena);
    }

    fclose(teniseri);
    fclose(wimbldon);
    fclose(atplista);
    return 0;
}
