/*1.32. Саставити програм који за учитану реч исписује поруку да ли је она палиндром. Реч је
палиндром ако се исто чита као од почетка ка крају и од краја ка почетку. 
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 25

int main(){
    int i, t, semafor=1;
    char recenica[MAX], recenica_bez_razmaka[MAX];
    printf("\n Unesite recenicu: "); 
    fgets(recenica, MAX, stdin);
    int poslednji_index = (int) strlen(recenica) - 1;
    t = 0;
    for(i=0; i<=poslednji_index; i++){
        if(!isspace(recenica[i])){
            recenica_bez_razmaka[t] = recenica[i];
            t++;
        }
    }
    poslednji_index = (int) strlen(recenica_bez_razmaka) - 1;
    t = poslednji_index;
    for(i=0; i<=t-i; i++){
        if(tolower(recenica_bez_razmaka[i]) !=  tolower(recenica_bez_razmaka[t-i])){
            semafor = 0;
        }
    }
    (semafor) ? printf("Rečenica je palindrom") : printf("Rečenica nije palindrom");
    return 0;
}