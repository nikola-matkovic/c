// 5.1. Саставити програм којим се у датотеку podaci.txt уписује првих 10 целих бројева , а затим се
// из исте датотеке читају бројеви док се не достигне до краја датотеке, а затим се бројеви исписују на
// стандарни излаз (екран). 

#include<stdio.h>
#include<stdlib.h>

int main(){
    int i,br;
    FILE *datoteka;
    datoteka = fopen("podaci.txt", "w");
    if(datoteka == NULL){
        printf("Doslo je do greske i datoteka se nije uspela otvoriti");
        exit(1);
    }
    for(i = 0;i < 10;i++){
        fprintf(datoteka,"%d",i);
    }
    fclose(datoteka);

    datoteka = fopen("podaci.txt", "r");

    if(datoteka == NULL){
        printf("Doslo je do greske i datoteka se nije uspela otvoriti");
    }
    while(1){
        fscanf(datoteka, "%d", &br);
        if(feof(datoteka)){
            break;
        }
        printf("Procitano:%d",br);

    }
    fclose(datoteka);

    return 0;
}