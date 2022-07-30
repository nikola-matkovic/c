// 5.4. Дата је датотека BrojeviStari.txt која у сваком реду садржи по један цео број. Саставити
// програм који формира датотеку BrojeviNovi.txt тако што из датотеке BrojeviStari.txt преписује
// бројеве из парних редова, а из непарних удвостручује. 

#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *dat1,*dat2;
    int br,i = 1;
    dat1 = fopen("BrojeviStari.txt", "r");
    dat2 = fopen("BrojeviNovi.txt", "w");
    if(dat1 == NULL || dat2 == NULL){
        printf("Greska");
    }
    while(1){
        fscanf(dat1, "%d", &br);
        if(feof(dat1)){
            break;
        }
        if(i % 2 == 0){
         fprintf(dat2, "%d", br);
        if(i % 2 == 1){
           fprintf(dat2, "%d",br*2);
        }
        i++;
        }
    }
    fclose(dat1);
    fclose(dat2);

    return 0;
}