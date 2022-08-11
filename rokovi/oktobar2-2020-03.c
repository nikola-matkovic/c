// 3. Na disku se nalazi datoteka stanovi dat u kojoj se nalaze podaci o stanovima u jednoj zgradi i to broj stana,
// površina, cena, broj sobu, je li alobodan ako jesse slobodan, 0 ako je zuuret t prodat) Na standardnom ularu
// prikazati podatke o stanovima iz datoteke a nakon toga kreirati datoteku "na prodaju dat u kojoj će biti smešten
// samo oni stanovi koji su slobodni. Nakon toga korisnik unosi maksimalnu cenu stana broj soba koji želi da kupi
// a program ispisuje da li postoji slobodan stam sa tolikim brojem soba a čija je cena manja ili jednaka od maksimalne
// cene koju je korisnik unco

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define SIZE 100

typedef struct stan{
    int brojStana;
    int povrsina;
    int cena;
    int brojSoba;
    bool jeLiSlobodan;
}STAN;

int main(){
    FILE *stanovi;
    struct stan Stanovi[SIZE];
    stanovi = fopen("stanovi.dat","r");
    if(stanovi==NULL){
        printf("Greska");
        exit(1);
    }
    while(!feof(stanovi)){
        int i = 0;
        fscanf(stanovi,"%d,%d,%d,%d",&Stanovi[i].brojStana,&Stanovi[i].povrsina,&Stanovi[i].cena,&Stanovi[i].brojSoba);
        i++;
    }
    

    
    return 0;
}