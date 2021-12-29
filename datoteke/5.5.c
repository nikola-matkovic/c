/*5.5.
Дата је датотека BrojeviХ.txt која у сваком реду садржи по један природни број. Саставити
програм који формира датотеку BrojeviY.txt тако што из датотеке BrojeviX.txt преписује само оне
бројеве који се састоје од цифара 3 и 7.
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int br, temp, i, cifra, semafor;
    FILE *dat1, *dat2;
    if((dat1 = fopen("brojeviX.txt", "r"))==NULL){
        printf("Greška pri otvaranju datoteke brojeviX.txt");
        exit(1);
    }
    if((dat1 = fopen("brojeviY.txt", "w"))==NULL){
        printf("Greška pri otvaranju datoteke brojeviY.txt");
        exit(1);
    }
    while (fscanf(dat1, "%d", &br) !=EOF){
        temp = br;
        semafor = 1;
        while (temp != 0){
            cifra = temp % 10;
            if(cifra != 3 || cifra != 7 ){
                semafor = 0;
            }
            temp /= 10;
        }
        if(semafor && br!=0){
            fprintf(dat2, "%d\n", br );
        }
    }
    fclose(dat1);
    fclose(dat2);
    
    return 0;
}