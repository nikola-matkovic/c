// 5.5. Дата је датотека BrojeviХ.txt која у сваком реду садржи по један природни број. Саставити
// програм који формира датотеку BrojeviY.txt тако што из датотеке BrojeviX.txt преписује само оне
// бројеве који се састоје од цифара 3 и 7. 

#include<stdio.h>
#include<stdlib.h>


int main(){
    int br;
    FILE *datoteka1,*datoteka2;
    datoteka1 = fopen("BrojeviY.txt", "r");
    datoteka2 = fopen("BrojeviX.txt", "w");
    if(datoteka2 == NULL || datoteka1 == NULL){
        printf("Greska");
    }
    while(1){
       fscanf(datoteka1, "%d", &br);
       
    }



    return 0;
}