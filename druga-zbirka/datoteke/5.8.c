// 5.8. Саставити програм који употребом функције fgets() чита садржај датотеке podaci6.txt и
// исписује на екрану. Максимална дужина која се чита је по 20 знакова. 

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define SIZE 300

int main(){
    FILE *datoteka;
    char sadrzajDatoteke[SIZE];  
    datoteka = fopen("podaci6.txt", "r");
    if(datoteka == NULL){
        printf("Greska");
    }
    fgets(sadrzajDatoteke,SIZE,datoteka);
    while(!feof(datoteka)){
        puts(sadrzajDatoteke);
    }
    fclose(datoteka);

    return 0;
}
