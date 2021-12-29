/*5.3.
Сваки ред датотеке brojevi.txt садржи по један цео број. Саставити програм који штампа
најмањи и највећи цео број на екрану.
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE * dat;
    int najmanji, najveci, br, i;
    if((dat = fopen("brojevi.txt", "r")) == NULL){
        printf("Greška u otvaranju datotekte brojevi.txt");
        exit(1);
    }
    najmanji = fscanf(dat, "%d", &br);
    najveci = fscanf(dat, "%d", &br);    
    while (1)
    {
        fscanf(dat, "%d", &br);
        if(feof(dat)){
            break;
        }
        if(br<najmanji){
            najmanji = br;
        }
        if(br>najveci){
            najveci = br;
        }
    }
    printf("%d %d", najmanji, najveci);
    fclose(dat);
    return 0;
}