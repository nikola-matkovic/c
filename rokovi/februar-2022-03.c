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
#include<stdbool.h>

#define SIZE 100

typedef struct vozac{
    char ime[30];
    char prezime[30];
    char nazivTima[30];
    int bodovi;
    int redniBroj;
    bool daLiJeOdustao;
}VOZAC;

int main(){
    FILE *vozaci,*trke;
    int i = 0;
    int br = 1;
    char c;
    vozaci = fopen("vozaci.txt","r");
    trke = fopen("trke.txt","w");
    struct vozac Vozaci[SIZE];
    if(vozaci == NULL){
        printf("Greska1");
        exit(1);
    }
  
    while(fscanf(vozaci,"%s,%s,%s",Vozaci[i].prezime,Vozaci[i].ime,Vozaci[i].nazivTima) == 1){
        printf("%d.%s %s %s\n",i,Vozaci[i].prezime,Vozaci[i].ime,Vozaci[i].nazivTima);
        i++;
    }
    // c = fgetc(vozaci);
    // while(c != EOF){
    //     fputc(c,trke);
    //     c = fgetc(vozaci);
    // }
    i = 1;
    Vozaci[i].daLiJeOdustao = true;
    while(!feof(trke)){
        Vozaci[i].redniBroj = i;
        Vozaci[i+5].daLiJeOdustao = false;
        if(Vozaci[i].daLiJeOdustao){
            Vozaci[i].redniBroj = 0;
        }
        for(i = 1;i < 8;i++){
            
        }
        fprintf(trke, "%d,%d",Vozaci[i].redniBroj,Vozaci[i].bodovi);
       
        i++;
    }
    fclose(vozaci);
    fclose(trke);


    return 0;
}