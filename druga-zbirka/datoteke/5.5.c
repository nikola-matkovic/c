// 5.5. Дата је датотека BrojeviХ.txt која у сваком реду садржи по један природни број. Саставити
// програм који формира датотеку BrojeviY.txt тако што из датотеке BrojeviX.txt преписује само оне
// бројеве који се састоје од цифара 3 и 7. 

#include<stdio.h>
#include<stdlib.h>


int main(){
    int br;
    int pom;
    int zastava = 1;
    int cifra;
    FILE *datoteka1,*datoteka2;
    datoteka1 = fopen("BrojeviY.txt", "r");
    datoteka2 = fopen("BrojeviX.txt", "w");
    if(datoteka2 == NULL || datoteka1 == NULL){
        printf("Greska");
    }
    while(1){
        pom = br;
       fscanf(datoteka1, "%d", &br);
       if(feof(datoteka1)){
        break;
       }
       while(pom != br){
        cifra = pom % 10;
        if(cifra != 3 && cifra != 7){
            pom = pom / 10;
            zastava = 0;
        }
       }
       if(zastava && br != 0){
        fprintf(datoteka2,"%d",br);
       }

      
    }
    fclose(datoteka1);
    fclose(datoteka2);


    return 0;
}