// 5.7. Саставити програм који исписује на екрану колико има редова и колико знакова у датотеци
// podaci6.txt. 

#include<stdio.h>

int main(){
    FILE *datoteka;
    int brRedova = 1;
    int brZnakova = 0;
    long znak;
    datoteka = fopen("podaci6.txt","r");
    if(datoteka == NULL){
        printf("Greska");
    }
    znak = getc(datoteka);
    while(!feof(datoteka)){
        if(znak == '\n'){
            brRedova++;
        }
        else{
            brZnakova++;
        }
    }
    fclose(datoteka);
    printf("Broj redova:%d",brRedova);
    printf("Broj znakova:%d",brZnakova);


    return 0;
}