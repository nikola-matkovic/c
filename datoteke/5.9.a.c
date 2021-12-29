/*5.9.
Саставити програм који преписује садржај датотеке podaci6.txt у датотеку podaci6Novo.txt:
а) карактер по карактер;
б) линију по линију.
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *dat1, *dat2;
    char c;
    if((dat1 = fopen("podaci6.txt", "r"))==NULL){
        printf("Greška prilikom otvaranja datoteket podaci6.txt");
        exit(1);
    }
    if((dat2 = fopen("podaci6Novo.txt", "w"))==NULL){
        printf("Greška prilikom otvaranja datoteket podaci6Novo.txt");
        exit(1);
    }
    while((c = fgetc(dat1))!=EOF){
        fputc(c, dat2);
    }
}