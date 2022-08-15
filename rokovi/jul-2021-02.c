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
    int i,j,n,m;
    int sprat;
    int osoba;
    int kolikoOsoba;
    printf("unesite n:");
    while(n != 2){
        scanf("%d",&n);
    }
    printf("Unesite m:");
    while(m > 10){
        scanf("%d",&m);
    }
   
    int matrica[n][m];
    printf("Uneiste matricu celih brojeva:\n");
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            scanf("%d",&matrica[i][j]);
        }

    }
    //Iskrcavanje osoba
    printf("Unesite sprat:");
    scanf("%d",&sprat);
    osoba = m;
    printf("Unesite koliko osoba ce te izbaciti:");
    scanf("%d",&kolikoOsoba);
    for(i = 0;i < n;i++){
        for(j = 0; j < m; j++){
            if(i == sprat){
                matrica[sprat][osoba] = 0;
                osoba--;
            }
        }
    }


    printf("\n");
    for(i = 0; i < n; i++){
        if(i == 0){
            printf("spratovi osoba:\n");
        }
        for(j = 0; j < m; j++){
            printf("%d ",matrica[i][j]);
        }
        printf("\n\n");
        if(i < n-1){
            printf("tezine tih osoba:\n");
        }
      
    }


return 0;
}