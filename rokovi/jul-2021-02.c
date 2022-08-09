// 2. Napisati program koji sa standardnog ulaza učitava matricu celih brojeva.
// Matrica predstavlja simulaciju lifta i ima dve vrste. Prva vrsta matrice 
// predstavlja željene spratove osoba u liftu, a druga vrsta predstavlja težine tih
// osoba. Najviše osoba u liftu može biti 10 s tim što se na svakom spratu vrši iskrcavanje
// osoba kojima je željeni sprat taj sprat (postave se podaci osobe koja je stigla
// na 0) i pri tom se sa standardnog ulaza unose podaci za nove osobe (prekid unosa
// se vrši kada za željeni sprat korisnik unese-1 ili ako dođe do preopterećenja).
// Do preopterećenja dolazi kada težine osoba u liftu budu veće od maksimalne težine
// koju unosi korisnik sa standardnog ulaza. Pozicija lifta kreće od 1 do maksimalnog
// broja sprata kojeg unosi korisnik. Na kraju se ispisuju podaci o osobama koje se nalaze
// na poslednjem spratu i koliko je osoba prošlo kroz lift.

#include<stdio.h>
#include<stdlib.h>

int main(){
    int i,j,n;
    printf("unesite n:");
    scanf("%d",&n);
    int matrica[n][n];
    printf("Uneiste matricu celih brojeva:\n");
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            scanf("%d",&matrica[i][j]);
        }
    }

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            printf("%d ",matrica[i][j]);
        }
        printf("\n");
    }


    return 0;
}