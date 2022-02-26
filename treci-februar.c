#include <stdio.h>
#include <stdlib.h>

#define MAX 100

typedef struct vozac {
    char[30] prezime;
    char[30] ime;
    char[30] tim;
    int bodovi;
}VOZAC;

int main(){
    FILE *vozaci, *trke;
    vozaci_fajl = fopen("vozaci.txt", "r");
    int mesto, i, j, bod; 
    if (vozaci_fajl == NULL){
        printf("Greška prilikom otvaranja datoteke vozaci.txt");
        exit(1);
    }   
    trke_fajl = fopen("trke.txt", "r");
    if (trke_fajl == NULL){
        printf("Greška prilikom otvaranja datoteke trke.txt");
        exit(1);
    }
    VOZAC vozaci[28];
    for(i=0; i<28; i++){
         if(feof(vozaci_fajl)){
            break;
        }
        else{
            fscanf(, "%s %s %s %d", &vozaci[i].prezime, &vozaci[i].ime, &vozaci[i].tim);
        }
        vozaci[i].bodovi = 0;
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
        printf("%s %s %i %s", vozaci[i].prezime, vozaci[i].ime,vozaci[i].bodovi, vozaci[i].tim);
    }
    return 0;
}