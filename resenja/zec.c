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

void ispis(*polje[i][j], m){
	int i, j, m;
	for(i=0; i<m; i++){
		for(j=0; j<m; j++){
			printf("%d", *polje[i][j]);
		}
	}
}

int main(){
	int m;
	printf("unesite M");
	scanf("%d",&m);
	int polje[m][m];
	for(i=0; i<m; i++){
		for(j=0; j<m; j++){
			scanf("%d", &polje[i][j]);
		}
	}
	ispis(&polj)
	return 0;
}