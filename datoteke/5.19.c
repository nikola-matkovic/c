/*5.19. Саставити програм који формира матрицу целих бројева диманзија mxn и уписује у датотеку
matrica.txt. Уписивање се врши тако што се у први ред упишу m и n, а после тога елементи матрице
у сваком реду по једна врста. Исписати матрицу у облику таблице на екрану. Име датотеке се уноси
са главног улаза. */
//NE RADI FSCNF
#include <stdio.h>
#include <stdlib.h>

#define MAX 100
int main(){
    int m, n, i, j;
    FILE * dat;
    char ime[MAX];
    printf("Unesite m i n");
    scanf("%d %d",  &m, &n);
    int niz[m][n];
    for(i = 0; i<m; i++){
        for(j = 0; j<n; j++){
            scanf("%d", &niz[i][j]);
        }
    }
    fgets(ime, MAX, stdin);
    //ispis
    for(i = 0; i<m; i++){
        for(j = 0; j<n; j++){
            printf("%d", niz[i][j]);
        }
        printf("\n");
    }
    return 0;
}