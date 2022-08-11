/*Delavni univerzitet u Novom Paran

OSNOVI PROGRAMIRANIA/PROGRAMIRANJE 1

OKTOBAR 2020

1. Sastaviti program koji će učitati dva broja min. Oha broja treba da budu prirodna.
Ak taj uslov nije ispinjen, učitavanje treba ponoviti. Ako je om, zameniti na sa n.ž
Nači i ispisati sumu kvadratnih Korena svih neparnih brojeva od m do n

2. Napisati funkciju koja će kao argumente imati niz koji predstavlja cene automobila
(5-ti element za predstavlja cenu i-tog automobila), dužinu nira i bullet. Funkcija treba da vrati najveći
broj automobila koliko korisnik može da kupi sa prosledenim budhetom

U main funkciji uneti broj automobila, cene automobila budžeti ispisati koliko automobils more
korisnik da kupi sa unetim budžetom Primer, ako je korisnik uneo N-3 i niz-1100.000,50.000 30.000,45 000,23.0001,
za bullet je neo 100,000 rezultat bi bio da korisnik može da kupi najvile 3 automobila sa ovim budjetom

3. Na disku se nalazi datoteka stanovi dat u kojoj se nalaze podaci o stanovima u jednoj zgradi i to broj stana,
površina, cena, broj sobu, je li alobodan ako jesse slobodan, 0 ako je zuuret t prodat) Na standardnom ularu
prikazati podatke o stanovima iz datoteke a nakon toga kreirati datoteku "na prodaju dat u kojoj će biti smešten
samo oni stanovi koji su slobodni. Nakon toga korisnik unosi maksimalnu cenu stana broj soba koji želi da kupi
a program ispisuje da li postoji slobodan stam sa tolikim brojem soba a čija je cena manja ili jednaka od maksimalne
cene koju je korisnik unco

Novi Pazar, 08.10.2020. god.

Prof. dr Bratislav Mirić

*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int m = 0,n = 0;
    int i;
    int s = 0;
    int niz1[m],niz2[n];
    printf("Uneiste m:");
    while(m <= 0){
        scanf("%d",&m);
        if(m <= 0){
            printf("Unesite ponovo m:");
        }
    }
     printf("Uneiste n:");
    while(n <= 0){
        scanf("%d",&n);
        if(n <= 0){
            printf("Unesite ponovo n:");
        }
    }
    if(n < m){
        m = m ^ n;
        n = m ^ n;
        m = m ^ n;
    }
    printf("Zamenili smo m i n pa je sada m: %d ,n: %d",m,n);

    //Suma kvadratnih korena od m do n
    if(m < n){
    for(m = m;m < n;m++){
        if(m % 2 == 1){
            s+=sqrt(niz1[m]);
        }
    }
    }
    if(m > n){
    for(n = n;n < m;n++){
        if(n % 2 == 1){
            s+=sqrt(niz2[n]);
        }
    }
    }
   

    return 0;
}