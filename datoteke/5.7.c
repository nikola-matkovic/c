/*5.7.
Саставити програм који исписује на екрану колико има редова и колико знакова у датотеци
podaci6.txt.
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *dat;
    char c;
    int red=0, znak=0;
    if((dat = fopen("podaci6.txt", "r") )==NULL){
        printf("Greška pri otvaranju datoteke");
        exit(1);
    }
    while((c = fgetc(dat)) != EOF){
        if(c == '\n'){
            red++;
        }
        znak++;
    }
    printf("datoteka ima %d redova i %d  znakova ", red, znak);
    return 0;
}