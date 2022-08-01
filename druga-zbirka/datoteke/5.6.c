// 5.6. Саставити програм који креира датотеку podaci6.txt чији је садржај приказан на слици.
// Користити функције за уписивање у датотеку fprint(), fputs(), fputc(). 

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    FILE *datoteka;
    datoteka = fopen("podaci6.txt", "w");
    if(datoteka == NULL){
        printf("Greska");
        exit(1);
    }
    fprintf(datoteka,"Ovo je datoteka!\n");
    fprintf(datoteka,"Pozdrav svima!\n");
    fprintf(datoteka,"%d + %d = %d\n",123,456,123+456);
    fputc('A',datoteka);
    fputs("Kraj datoteke",datoteka);
    fclose(datoteka);
  
    return 0;
}