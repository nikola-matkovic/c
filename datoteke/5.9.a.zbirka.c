#include <stdio.h>
#include <stdlib.h>

int main(){
    char c;
    FILE *ulaz, *izlaz;
    ulaz=fopen("podaci6.txt","r");
    if(ulaz==NULL){
        printf("\n Greska pri otvaranju datoteke!");
        exit(1);
    }
    izlaz=fopen("podaci6Novo.txt", "w");
    if(izlaz==NULL){
        printf("\n Greska pri otvaranju datoteke!");
        exit(1);
    }
    while((c=fgetc(ulaz))!=EOF)
        fputc(c,izlaz);
    fclose(ulaz);
    fclose(izlaz);
    return 0;
}