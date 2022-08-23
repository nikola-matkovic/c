// Na disku se nalazi datoteka “stanovi.dat” u kojoj se nalaze podaci o stanovima u jednoj zgradi i to: broj_stana, površina, cena, broj_soba, je_li_slobodan(1 ako jeste slobodan, 0 ako je zauzet tj. prodat). Na standardnom ulazu prikazati podatke o stanovima iz datoteke a nakon toga kreirati datoteku “na_prodaju.dat” u kojoj će biti smešteni samo oni stanovi koji su slobodni. Nakon toga korisnik unosi maksimalnu cenu stana i broj soba koji želi da kupi a program ispisuje da li postoji slobodan stan sa tolikim brojem soba a čija je cena manja ili jednaka od maksimalne cene koju je korisnik uneo.
//mart 2022
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
    // for(int i = 0;i < 3;i++){
    //     printf("%d,%d,%d,%d",Stanovi[i].brojStana,Stanovi[i].povrsina,Stanovi[i].cena,Stanovi[i].brojSoba);
    // }

    // int c = fgetc(stanovi);

    // while(c != EOF) {
    //     printf("%d",c);
    //     c = fgetc(stanovi);
    // }

    
       
        
    
    


    
    return 0;
}