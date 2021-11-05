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
    printf("trenutno ste na polju 0X0\n");
    printf("Unesite A za Pokret LEVO\n");
    printf("unesite F za pokret DESNO\n");
    printf("Unesite W za pokret GORE \n");
    printf("unesite S za pokret DOLE\n");
    printf("unesite K za KRAJ\n");
    char c;
    int x, y;
    x=0;
    y=0;
    do{
        scanf("%c", &c);
        switch(c){
            case 'A':
                if(!x-1<0){
                    x--;
                }
                break;
            case 'D':
                if(x+1>m){
                    x++;
                }
                break;
            case 'W':
                if(!x-1<0){
                    y--;
                }
                break;
            case 'S':
                if(x+1>m){
                    y++;
                }
                break;
            default:
                printf("pogrešan unos \n");
        }
        printf("x=%d  y=%d\n", x, y);
    }
    while(c!='k');
}