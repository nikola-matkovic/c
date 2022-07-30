// 5.2. Дата је датотека podaci2.txt чији је садржај приказан
// на слици. Саставити програм који у постојећеој датотеци
// дописује текст ''Pozdrav svima''. 

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char pozdrav[30];
    FILE *datoteka = fopen("podaci2.txt", "w");
    if(datoteka==NULL){
        printf("Greska");
        exit(1);
    }
    fprintf(datoteka, "Zdravo svima ovo je datoteka!\n");
    fclose(datoteka);
    datoteka = fopen("podaci2.txt","a");
    if(datoteka==NULL){
        printf("Greska");
    }
    fprintf(datoteka,"Pozdrav svima!");
    fclose(datoteka);





    return 0;
}