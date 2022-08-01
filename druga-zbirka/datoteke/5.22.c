// 5.22. Саставити програм који из датотеке podaci22.txt чита и исписује садржај текста на екрану и
// одређује укупан број знакова и број малих слова без слова 'd'. 

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    FILE *datoteka;
    int sadrzaj,brojZnakova = 0,brojMalihSlova = 0;
    datoteka = fopen("podaci22.txt", "r");
    if(datoteka == NULL){
        printf("Greska");
    }
    while(!feof(datoteka)){
        sadrzaj = fgetc(datoteka);
        if(sadrzaj != ' '){
            brojZnakova++;
        }
        if(sadrzaj > 'a' && sadrzaj < 'z' && sadrzaj != 'd'){
            brojMalihSlova++;
        }
    }
    fclose(datoteka);
    printf("Broj znakova: %d\n",brojZnakova);
    printf("Broj malih slova: %d\n",brojMalihSlova);
    
    return 0;
}