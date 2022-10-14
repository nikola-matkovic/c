// 2 Na programskom jeziku C napisati strukturni program za prikaz gajbice sa narandžamai praćenje procesa njihovog kvarenja.
// Na početku programa korisnik unosi dimenzije gajbice (predstaviti je preko matrice dimenzije MxN) i podatke o narandžama u
// njoj. Svako polje matrice može imati jednu od sledeće tri vrednosti: 0-prazno mesto, 1-narandža, 2 pokvarena narandža. 
// Smatrati da korisnik neće uneti nevalidne vrednosti. Unete vrednosti predstavljaju inicijalno stanje gajbice, nakon čega
// pokvarene narandže počinju da kvare svoje susede, Pokvarena narandža može pokvariti 4 susedne (gore, dole, levo i desno
// u odnosu na sebe). Napisati funkciju koja za prosleđenu matricu vraća njeno stanje nakon prvog koraka kvarenja suseda.
// U glavnom programu prikazati početno stanje gajbice sa narandžama. Pomoću kreirane funkcije simulirati 3 koraka kvarenja
// narandži i prikazati krajnje stanje Za maksimalan broj poena alociranje memorije odraditi dinamički.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX 100

void ispis(int m , int n, int matrica[MAX][MAX]){
    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
            printf("%d ", matrica[i][j]);
        }
        printf("\n");
    }
}
void kvari(int m , int n, int matrica[MAX][MAX]){
    bool prviPut[m][n];
    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
            prviPut[i][j] = true;
        }
    }

    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
            if(matrica[i][j] == 2 && prviPut[i][j]){
                if(j > 0 ){                           //levo
                    if( matrica[i][j-1] == 1 ) {
                        matrica[i][j-1] = 2;
                        prviPut[i][j-1] = false;
                    } 
                }
                if(j < n-1 ){                         //desno
                    if( matrica[i][j+1] == 1 ) {
                        matrica[i][j+1] = 2;
                        prviPut[i][j+1] = false;
                    } 
                }
                if(i > 0 ){                            //gore
                    if( matrica[i-1][j] == 1 ) {
                        matrica[i-1][j] = 2;
                        prviPut[i-1][j] = false;
                    } 
                }
                if(i < m-1 ){                         //dole
                    if( matrica[i+1][j] == 1 ) {
                        matrica[i+1][j] = 2;
                        prviPut[i+1][j] = false;
                    } 
                }
            }
        }
    }
}

int main(){
    //unos MXN
    int m, n, matrica[MAX][MAX];
    printf("unesite M :");
    scanf("%d", &m);
    printf("unesite N : ");
    scanf("%d", &n);
    //unos matrice:
    printf("Unesite matricu:");
    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
            scanf("%d", &matrica[i][j]);
        }
    }
    kvari(m, n, matrica);
    ispis(m, n, matrica);
    return 0;
}