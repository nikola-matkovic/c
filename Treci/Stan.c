// 2. Na disku se nalazi datoteka “stanovi.dat” 
// u kojoj se nalaze podaci o stanovima u jednoj zgradi i to:
// broj_stana, površina, cena, broj_soba, je_li_slobodan(1 ako jeste slobodan, 0 ako je zauzet tj. prodat).
// Na standardnom ulazu prikazati podatke o stanovima iz datoteke a nakon toga
// kreirati datoteku “na_prodaju.dat” u kojoj će biti smešteni samo oni stanovi koji su slobodni. 
// Nakon toga korisnik unosi maksimalnu cenu stana i broj soba koji želi da kupi a program 
// ispisuje da li postoji slobodan stan sa tolikim brojem soba a čija je cena manja ili jednaka od maksimalne
// cene koju je korisnik uneo.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define SIZE 100

typedef struct stan {
    int broj_stana;
    float povrsina;
    int cena;
    int broj_soba;
    bool je_li_slobodan; 
}STAN;

int main(){
    FILE * stanovi_datoteka = fopen ("stanovi.txt", "r");
    if(stanovi_datoteka == NULL){
        printf("greška pri otvaranju stanovi.txt");
        exit(1);
    }
    FILE * slobodni = fopen ("slobodni.txt", "w");
    if(slobodni == NULL){
        printf("greška pri otvaanju slobnodni.txt");
        exit(1);
    }
    STAN stanovi[SIZE];
    int i = 0;
    while(!feof(stanovi_datoteka)){
        fscanf(stanovi_datoteka, "%d %f %d %d %d",  &stanovi[i].broj_stana, &stanovi[i].povrsina, &stanovi[i].cena, &stanovi[i].broj_soba, &stanovi[i].je_li_slobodan);
        printf("%d %f %d %d %d \n", stanovi[i].broj_stana, stanovi[i].povrsina, stanovi[i].cena, stanovi[i].broj_soba, stanovi[i].je_li_slobodan);
        if(stanovi[i].je_li_slobodan){
            fprintf(slobodni, "%d %f %d %d %d \n",  stanovi[i].broj_stana, stanovi[i].povrsina, stanovi[i].cena, stanovi[i].broj_soba, stanovi[i].je_li_slobodan);
        }
        i++;
    }
    int maksimalnaCena = 0;
    int broj_soba = 0;
    printf("unesite maksimalnu cenu");
    scanf("%d", &maksimalnaCena);
    printf("unesite broj soba");
    scanf("%d", &broj_soba);
    bool postoji =  false;
    for(int j = 0; j < i; j++){
        if(stanovi[j].broj_soba == broj_soba && stanovi[j].cena <= maksimalnaCena){
            postoji = true;
            break;
        }
    }
    if(postoji){
        printf("postoji stan za vas!");
    }
    else{
        printf("Ne postoji stan za vas");
    }
    fclose(stanovi_datoteka);
    return 0;
}