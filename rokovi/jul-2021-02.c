// Najviše osoba u liftu može biti 10 s tim što se na svakom spratu vrši iskrcavanje
// osoba kojima je željeni sprat taj sprat (postave se podaci osobe koja je stigla
// na 0) i pri tom se sa standardnog ulaza unose podaci za nove osobe (prekid unosa
// se vrši kada za željeni sprat korisnik unese-1 ili ako dođe do preopterećenja).
// koju unosi korisnik sa standardnog ulaza. Pozicija lifta kreće od 1 do maksimalnog
// broja sprata kojeg unosi korisnik. Na kraju se ispisuju podaci o osobama koje se nalaze
// na poslednjem spratu i koliko je osoba prošlo kroz lift.



// matrica 2x10 - čuva spratove i težinu osoba
// ako je prazno onda je 0.

#include<stdio.h>
#include<stdlib.h>

int main(){                                                                          
    //učitavanje matrice celih brojeva, matrica[2][10]
    // učitavanje matrice:
    int matrica[2][10];
    int maksimalnaTezina;
    printf("unesite maksimalnu težinu: \n");
    scanf("%d", &maksimalnaTezina);
    int brojSpratova;
    scanf("%d", brojSpratova);
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 10; j++){
            scanf("%d", matrica[i][j]);
        }
    }
    while(1){
        int ukupnaTezina = 0;
        for(int j = 0; j < 10; j++){
            ukupnaTezina += matrica[1][j];
        }
        if(maksimalnaTezina < ukupnaTezina){
            break;
        }
    }
    return 0;
}