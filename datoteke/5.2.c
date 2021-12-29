/*5.2.
Дата је датотека podaci2.txt чији је садржај приказан
на слици. Саставити програм који у постојећеој датотеци
дописује текст ''Pozdrav svima''
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    FILE * dat;
    dat = fopen("podaci2.txt", "a");
    if(dat == NULL){
        printf("Greška prilikom otvaranja datoteke");
        exit(1);
    }
    fprintf(dat, "\nPozdrav svima");
    printf("Gotovo");
    fclose(dat);
    return 0;
}
