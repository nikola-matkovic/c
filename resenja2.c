/*2
    Napisati program koji pomaže zeki da pojede kupus.
    Na početku programa sa standardnog ulaza učitati parametar M koji predstavlja dimenziju polja matrice MxM po kojoj zeka skače.
    Zatim učitati celobrojne vrednosti svih polja matrice. 
    Vrednost 0 predstavlja kupus, 1 paradajz, 2 krompir, 3 nepoznato.
    Nakon toga korisnik preko standardnog ulaza unosi karakter koji predstavlja pokret zeke (L-levo, D-desno, G-gore, D-dole). 
    Zeka kreče sa početne pozicije polja 0,0 i izvršava skokove ukoliko su mogući i jede samo kupus
    ukoliko skoči na polje na kome se nalazi kupus.
    Na kraju prikazati poruku o količini kupusa koju je zeka poje i broju skokova koje je izvršio.
    Prekinuti sa unosom kada korisnik unese karakter K. Za unos matrice i unos koraka odraditi posebne funkcije.
*/

// sve radi samo prebaciti u posebne funkcije (zadnji red zadatka)
#include <stdio.h>
int main(){
    int n, i, j, m;
    printf("kolike su dimenzije polja \n"); 
    scanf("%d",&m);
    printf("Unesite 0 za kupus\n");
    printf("Unesite 1 za paradajz\n");
    printf("Unesite 2 za krompir\n");
    printf("Unesite 3 za nepoznato\n");
    int matrica[m][m];
    i=0;
    while(i<m){
        j=0;
        printf("unesite vrstu %d:\n ", i+1);
        while(j<m){
            scanf("%d", &matrica[i][j]);
            j++;
        }
        i++;
    }
    int x, y, broj_skokova, kupus;
    x=0;  y=0, broj_skokova=0; kupus=0;
    
    char c;
    printf("Unesite A za Pokret LEVO\n");
    printf("unesite F za pokret DESNO\n");
    printf("Unesite W za pokret GORE \n");
    printf("unesite S za pokret DOLE\n");
    printf("unesite K za KRAJ\n");
    do{
        printf("trenutno ste na polju %d %d\n", x, y);
        scanf(" %c", &c);
        switch(c){
            case 'K':
                printf("Broj pojedenih kupusa: %d \nZeka je skočio %d puta.", kupus, broj_skokova);
                break;
            case 'A':
                if(x!=0){
                    x--;
                    broj_skokova++;
                }
                break;
            case 'D':
                    if(x!=m-1){
                        x++;
                        broj_skokova++;
                    }
                break;
            case 'S':
                    if(y!=m-1){
                        y++;
                        broj_skokova++;
                    }
                break;
            case 'W':
                if(y!=0){
                    y--;
                    broj_skokova++;
                }
                break;
            default:
                printf("pogrešan unos \n");
        }
        if(matrica[y][x]==0){
            kupus++;
            matrica[y][x]=3;
        }
        for(i=0; i<m; i++){
            for(j=0; j<m; j++){
                printf("%d ", matrica[i][j]);
            }
            printf("\n");
        }
    }
    while(c!='K');
}