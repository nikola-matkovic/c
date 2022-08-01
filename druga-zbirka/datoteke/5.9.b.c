// 5.9. Саставити програм који преписује садржај датотеке podaci6.txt у датотеку podaci6Novo.txt:
// а) карактер по карактер;
// б) линију по линију. ``

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define SIZE 1000



int main(){
    FILE *prva;
    FILE *druga;
   char karakter[SIZE];
    prva = fopen("podaci6.txt", "r");
    druga = fopen("podaci6Novo.txt", "w");
    if(prva == NULL || druga == NULL){
        printf("Greska");
    }
    while(!feof(prva)){
        fgets(karakter,SIZE,prva);
       fputs(karakter,prva);
    }
    fclose(prva);
    fclose(druga);



    return 0;
}