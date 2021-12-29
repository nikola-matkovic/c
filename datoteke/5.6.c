/*
5.6.
Саставити програм који креира датотеку podaci6.txt чији је садржај приказан на слици.
Користити функције за уписивање у датотеку fprint(), fputs(), fputc().
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *dat;
    if((dat = fopen("podaci6.txt", "w"))==NULL){
        printf("Greška prilikom otvaranja datoteke podaci6.txt");
        exit(1);
    }
    fprintf(dat, "Ovo je datoteka\n");
    fprintf(dat, "pozdrav svima! \n");
    fprintf(dat, "%d + %d = %d \n", 123, 456, 123+456);
    fputc('A', dat);
    fputc('\n', dat);
    fputs("kraj datoteke \n", dat);
    fclose(dat);
    return 0;
}