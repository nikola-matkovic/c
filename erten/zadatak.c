/*
 3. Napisati program na programskom jeziku C koji izračunava broj osvojenih bodova na šampionatu trka Formule 1.
    Podaci o vozačima i timovima se nalaze u tekst datoteci vozaci.txt prema sledećem formatu:
    u svakom redu datoteke redom su zapisani prezime i ime vozača i naziv tima za koji vozač vozi 
    (svako polje po 30 karaktera najviše). 

    Poznato je da ima tačno 28 vozača koji učestvuju u trkama i da se na šampionatu vozi 20 trka.

    Podaci o rezultatima trka smešteni su u tekst datoteci trke.txt tako da se u svakom redu datoteke nalaze
    redni brojevi pozicija jednog vozača po završetku svake trke (20 pozicija, za svaku trku po jedna).

    U slučaju da vozač ne prode cilj (odustane od trke) broj pozicije za tu trku je 0. 

    Podaci u prvom redu datoteke trke.txt odgovaraju vozaču iz prvog reda datoteke vozaci.txt, itd. 

    Bodovi za vozače za jednu trku se računaju na sledeći način:
    prvih 8 vozača dobija 10, 8, 6, 5, 4, 3, 2 i 1 bod respektivno, ostali 0 bodova.

    Program treba da izračuna i na standardnom izlazu ispiše osvojene bodove tako da u jednom redu stoje
    prezime i ime vozača, osvojen broj bodova i naziv tima, kao i podaci o osvojenim bodovima za svaki tim
    (sortirano od tima sa najvećim brojem bodova do tima sa najmanjim brojem bodova).
*/
#include <stdio.h>
#include <stdlib.h>

#define MAX[100]

typedef struct vozac
{
    char Ime[30];
    char Prezime[30];
    char Tim[30];
}VOZAC;

int main(int argc, char const *argv[])
{
    VOZAC vozac[MAX];

    FILE *vozaci = fopen("vozaci.txt", "r")
    if (vozaci == NULL)
    {
        printf("GRESKA PRI OTVARANJU");
        exit (1);
    } 

    FILE *trke = fopen("trke.txt", "r")
    if (trke == NULL)
    {
        printf("GRESKA PRI OTVARANJU");
        exit (1);
    }

    int i = 0;
    while (!foef (vozaci))
    {
        fscanf(vozaci,"%s %s %s", vozaci[i].Ime, vozaci[i].Prezime, vozaci[i].Tim);
        i++
    }

    for(j=0; j<20; j++){
        for(i=0; i<28; i++){
            bod = 0;
            if(feof(trke_fajl)){
                break;
            }
            else{
                fscanf("%d", mesto);
            }
            switch (mesto){
                case: 1;
                    bod += 10;
                    break;
                case: 2;
                    bod += 8;
                    break;
                case: 3;
                    bod += 6;
                    break;
               case: 4;
                    bod += 5;
                    break;
                case: 5;
                    bod += 4;
                    break;
                case: 6;
                    bod += 3;
                    break;
               case: 7;
                    bod += 2;
                    break;
                case: 7;
                    bod += 1;
                    break;
                default: 
                    bod = 0;
                    break;
            }
            vozaci[i].bodovi+=bod;
        }
    }
    for(i=0; i<28; i++){
        printf("%s %s %i %s", vozaci[i].prezime, vozaci[i].ime, vozaci[i].bodovi, vozaci[i].tim);
    }

    return 0;
}
