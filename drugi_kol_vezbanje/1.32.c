/*1.32. Саставити програм који за учитану реч исписује поруку да ли је она палиндром. Реч је
палиндром ако се исто чита као од почетка ка крају и од краја ка почетку. 
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#define MAX 25
int main(){
    int i, t, semafor=1;
    char rec[MAX];
    scanf("%s", rec);
    int poslednji_index = (int) strlen(rec) - 1;
    t = poslednji_index;
    for(i=0; i<=t-i; i++){
        if(tolower(rec[i]) !=  tolower(rec[t-i])){
            semafor = 0;
        }
    }
    (semafor) ? printf("Reč je palindrom") : printf("reč nije palindrom");
    return 0;
}