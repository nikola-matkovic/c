// 1. Napisati program koji pomaže zeki da pojede kupus. Na početku programa sa standardnog

// ulaza učitati parametar M koji predstavlja dimenziju polja matrice MxM po kojoj zeka skače.

// Zatim učitati celobrojne vrednosti svih polja matrice. Vrednost 0 predstavlja kupus, 1

// paradajz, 2 krompir, 3 nepoznato. Nakon toga korisnik preko standardnog ulaza unosi

// karakter koji predstavlja pokret zeke (L-levo, D-desno, G-gore, D-dole). Zeka kreče sa

// početne pozicije polja 0,0 i izvršava skokove ukoliko su mogući i jede samo kupus ukoliko

// skoči na polje na kome se nalazi kupus. Na kraju prikazati poruku o količini kupusa koju je

// zeka pojeo i broju skokova koje je izvršio. Prekinuti sa unosom kada korisnik unese karakter

// K. Za unos matrice i unos koraka odraditi posebne funkcije.


#include <stdio.h>
#include<stdlib.h>

#define MAX 100

//unos matrice :
void unos (int m, int matrica[MAX][MAX]){
    for(int i = 0; i < m; i++){
        for(int j = 0; j < m; j++){
            scanf("%d", &matrica[i][j]);
        }
    }
}
//ispis
void ispis (int m, int matrica[MAX][MAX]){
    for(int i = 0; i < m; i++){
        for(int j = 0; j < m; j++){
            printf("%d ", matrica[i][j]);
        }
        printf("\n");
    }
}
void unosPolja(int m, int matrica[MAX][MAX]){
    int x = 0;
    int y = 0;
    int skokovi = 0;
    int pojedeno = 0; 
    char smer;
    if(matrica[x][y]  == 0){
        pojedeno++;
        matrica[x][y] = 3;
    }
    while(1){
        printf("Vaša trenutna pozicija je %d %d", y, x);
        printf("Unesite smer (ASDW) ili K za kraj! \n");
        scanf("%c", &smer);
        if(smer == 'A'){
            if(x > 0){
                x--;
                skokovi++;
            }
        }
        if(smer == 'D'){
            if(x < m - 1){
                x++;
                skokovi++;
            }
        }
        if(smer == 'S'){
            if(y < m - 1){
                y++;
                skokovi++;
            }
        }
        if(smer == 'W'){
            if(y > 0){
                y--;
                skokovi++;
            }
        }
        if(smer == 'K'){
            break;
        }
        if(matrica[y][x]  == 0){
            pojedeno++;
            matrica[y][x] = 3;
        }
        ispis(m, matrica);
    }
    printf("Pojeli ste %d kupusa, sa %d skokova \n", pojedeno, skokovi);
}

int main(){
    int m;
    int matrica[MAX][MAX]; 
    printf("Unesite dimeniziju matrice");
    scanf("%d", &m);
    //unos matrice:
    printf("Molimo vas da unesete matricu, 0 - kupus, 1 - paradajz, 2 - krompir, 3 - nepoznato \n");
    unos(m, matrica);
    unosPolja(m, matrica);
    return 0;
}