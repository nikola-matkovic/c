/*5.10. Саставити програм који за унто n преписује n пута садржај датотеке podaci6.txt у датотеку
podaci6NovoN.txt карактер по карактер. */
#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, n;
    printf("Unesite n: ");
    scanf("%d", &n);
    FILE *dat1, *dat2;
    char c;
    if((dat2 = fopen("podaci6NovoN.txt", "a"))==NULL){
        printf("Greška prilikom otvaranja datoteket podaci6NovoN.txt");
        exit(1);
    }
    for(i=0; i<n; i++){
        if((dat1 = fopen("podaci6.txt", "r"))==NULL){
            printf("Greška prilikom otvaranja datoteket podaci6NovoN.txt");
            exit(1);
        }
        while((c=fgetc(dat1)) != EOF){
            fputc(c, dat2);
        }
        fclose(dat1);
    }
}