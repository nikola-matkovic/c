/*5.8.
Саставити програм који употребом функције fgets() чита садржај датотеке podaci6.txt и
исписује на екрану. Максимална дужина која се чита је по 20 знакова. */
#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *dat;
    char s[20];
    if((dat = fopen("podaci6.txt", "r") )==NULL){
        printf("Greška pri otvaranju datoteke");
        exit(1);
    }
    while (fgets(s, 20,dat)!=NULL){
        puts(s);
    }
    fclose(dat);
    return 0;
}