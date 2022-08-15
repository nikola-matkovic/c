/*DRŽAVNI UNIVERZITET U NOVOM PAZARU

OSNOVI PROGRAMIRANJA

1.Napisati program za izračunavanje funkcije Inx=(x-1)-(-1) (x-1)
Prestati sa sumiranjem kada je apsolutna vrednost člana manja od 10.

2. Napisati program kojim se vrši zamena mesta najvećeg i najmanjeg elemenata
ispod sporedne dijagonale matrice X. Učitavanje matrice I tralenu obradu realizovati
pomoću odvojenih funkcija

3. U svakoj liniji tekstualne datoteke ed.dat nalaze se podaci o prodaji kompakt
diskova Linija se sastoji od više kolona međusobno razdvojenih dvotačkom. U prvoj
koloni se nalazi naziv žanra CDa koji može biti jedna od vrednosti iz skupa (inostrana, novokomponovana,
decija, klasicna U drugoj koloni je zadat broj prodatih primeraka za tekuću prodaju.
U trećoj koloni dat je datum prodaje u obliku rednog broja izmedu 1 (početni dan interval prodaje)
i30 (dan obrade podataka). Potom slede podaci o nabavnoj ceni. Ti podaci se sastoje od cene po primerku,
ali za inostranu muziku dodatno se zadaje iznos carine PO UKUPNOJ KOLIČINI, dok za novokomponovanu muziku
dodatne se PO PRIMERKU zadaje I imos poreza na land. Potom slede podaci o prodajnoj ceni. BROJ LINIJA
U DATOTECI NIJE UNAPRED POZNAT Napisati program

koji će odštampati na standardni izlaz ukupne prihode od prodaje u intervalima od

brojadanakojeunosikorisniksatastatureiformiratidatoteku podaci.dat kojaćebiti u

istomformatukaodatoteka cd.dat, alićesadržatipodatke o prodajudiskovakojinisuizžanranovokomponovanemuzike.

Primer datoteke izlazaakokorisnikzahrojdanaunese 15:

standardni isla

Icetrane: 10/2400:20:500

Mecife: 2121300:300

Inestrane 28:8:400-20:500

Inostrans:12 4:40:201300

konpand:80 4:20 30100 Mees Sai8-4:10:200

decije 13/300.000000 100.00000

Inostrane 10:24000 2000001300000000

Inostrane 1440000000029.00000010000000

lazione:14:20:258, 900000

Novi Pazar 22.09.2020. godine

Prof. dr Bratislav Mirić

*/

#include <stdio.h>
#include <stdlib.h>
#include<math.h>

#define SIZE 100

// 1.Napisati program za izračunavanje funkcije Inx=(x-1)-(-1) (x-1)
// Prestati sa sumiranjem kada je apsolutna vrednost člana manja od 10.

int main(){
    int lnx;
    int x,n,i;
    int niz[SIZE];
    printf("Unesite x:");
    scanf("%d",&x);
    printf("Unsite n:");
    scanf("%d",&n);
    while(abs(lnx) < pow(10,-6)){
    i = 2;
    if(i % 2 == 0){
        lnx += (x - 1) - pow((x-2),i) / i;
    }
    if(i % 2 == 1){
        lnx -= (x - 1) - pow((x-2),i) / i;
    }
    i++;
    if(i == n - 1){
        lnx += pow((-1),n-1) * pow((x-1),n) / n;
    }

}
    
        
        
    
    

    return 0;
}
