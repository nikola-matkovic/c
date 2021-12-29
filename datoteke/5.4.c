/*5.4.
Дата је датотека BrojeviStari.txt која у сваком реду садржи по један цео број. Саставити
програм који формира датотеку BrojeviNovi.txt тако што из датотеке BrojeviStari.txt преписује
бројеве из парних редова, а из непарних удвостручује.
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE  *dat1, *dat2;
    int i=1, br;
    if((dat1 = fopen("BrojeviStari.txt", "r"))== NULL){
        printf("Greška prilikom otvaranja datoteke BrojeviStari.txt");
        exit(1);
    }
    if((dat2 = fopen("BrojeviNovi.txt", "w")) == NULL){
        printf("Greška prilikom otvaranja datoteke BrojeviStari.txt");
        exit(1);
    }
    while (1)
    {
        fscanf(dat1, "%d", &br);
        if(feof(dat1)){
            break;
        }
        (i & 1) ? fprintf(dat2, "%d\n", br) : fprintf(dat2, "%d\n", br*2);
        i++;
    }
    
    return 0;
}