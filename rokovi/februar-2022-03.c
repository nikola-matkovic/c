// 3. Napisati program na programskom jeziku C koji izračunava broj osvojenih bodova na šampionatu trka Formule 1.
// Podaci o vozačima i timovima se nalaze u tekst datoteci vozaci.txt prema sledećem formatu: u svakom redu datoteke
// redom su zapisani prezime i ime vozača i naziv tima za koji vozač vozi (svako polje po 30 karaktera najviše).
// Poznato je da ima tačno 28 vozača koji učestvuju u trkama i da se na šampionatu vozi 20 trka. Podaci o rezultatima
// trka smešteni su u tekst datoteci trke.txt tako da se u svakom redu datoteke nalaze redni brojevi pozicija jednog
// vozača po završetku svake trke (20 pozicija, za svaku trku po jedna). U slučaju da vozač ne prođe cilj
// (odustane od trke) broj pozicije za tu trku je 0. Podaci u prvom redu datoteke trke.txt odgovaraju vozaču
// iz prvog reda datoteke vozaci.txt, itd. Bodovi za vozače za jednu trku se računaju na sledeći način:
// prvih 8 vozača dobija 10, 8, 6, 5, 4, 3, 2 i 1 bod respektivno, ostali 0 bodova. Program treba da
// izračuna i na standardnom izlazu ispiše osvojene bodove tako da u jednom redu stoje prezime i ime vozača,
// osvojen broj bodova i naziv tima, kao i podaci o osvojenim bodovima za svaki tim (sortirano od tima
// sa najvećim brojem bodova do tima sa najmanjim brojem bodova).

#include <stdio.h>
#include <stdlib.h>

#define SIZE 100

typedef struct vozac{
    char ime[30];
    char prezime[30];
char nazivTima[30];
}VOZAC;

int main(){
    FILE *vozaci;
    vozaci = fopen("vozaci.txt","r");
    struct vozac Vozaci[SIZE];


    return 0;
}