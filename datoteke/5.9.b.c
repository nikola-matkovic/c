/*5.9.
Саставити програм који преписује садржај датотеке podaci6.txt у датотеку podaci6Novo.txt:
а) карактер по карактер;
б) линију по линију.
*/
#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int main(){
    FILE *dat1, *dat2;
    char s[MAX];
    if((dat1 = fopen("podaci6.txt", "r"))==NULL){
        printf("Greška prilikom otvaranja datoteket podaci6.txt");
        exit(1);
    }
    if((dat2 = fopen("podaci6Novo.txt", "w"))==NULL){
        printf("Greška prilikom otvaranja datoteket podaci6Novo.txt");
        exit(1);
    }
    while(fgets(s, MAX, dat1)!=NULL){
        fputs(s, dat2);
    }
}