// 5.9. Саставити програм који преписује садржај датотеке podaci6.txt у датотеку podaci6Novo.txt:
// а) карактер по карактер;
// б) линију по линију. ``

#include<stdio.h>
#include<stdlib.h>
#include<string.h>



int main(){
    FILE *prva;
    FILE *druga;
    char karakter;
    prva = fopen("podaci6.txt", "r");
    druga = fopen("podaci6Novo.txt", "w");
    if(prva == NULL || druga == NULL){
        printf("Greska");
    }
    while(!feof(prva)){
        karakter = fgetc(prva);
        fputc(karakter,druga);
    }
    fclose(prva);
    fclose(druga);



    return 0;
}