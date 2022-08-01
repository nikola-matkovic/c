// 5.9. Саставити програм који преписује садржај датотеке podaci6.txt у датотеку podaci6Novo.txt:
// а) карактер по карактер;
// б) линију по линију. ``

#include<stdio.h>
#include<stdlib.h>
#include<string.h>



int main(){
    FILE *prva;
    FILE *druga;
    int brKarakter = 0;
    char karakter;
    prva = fopen("podaci6.txt", "r");
    druga = fopen("podaci6Novo.txt", "w");
    if(prva == NULL || druga == NULL){
        printf("Greska");
    }
    


    return 0;
}