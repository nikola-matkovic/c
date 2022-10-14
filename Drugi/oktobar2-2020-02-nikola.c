// 2. Napisati funkciju koja će kao argumente imati niz koji predstavlja cene automobila
// (i-ti element niza predstavlja cenu i-tog automobila), dužinu niza i budžet. 
//Funkcija treba da vrati najveći broj automobila koliko korisnik može da kupi sa prosleđenim budžetom.
// U main funkciji uneti broj automobila, cene automobila i budžet i ispisati koliko automobila
// može korisnik da kupi sa unetim budžetom.
// Primer: ako je korisnik uneo N=5 i niz=[100.000,50.000,30.000,45.000,23.000], 
// za budžet je uneo 100.000 – rezultat bi bio da korisnik može da kupi najviše 3 automobila sa 
//ovim budžetom.

#include <stdio.h>
#include<stdlib.h>

#define SIZE 100

int main(){
    int niz[SIZE], n, i, budzet;
    printf("unesite n:");
    scanf("%d", &n);
    printf("unesite budžet");
    scanf("%d", &budzet);
    for(int i = 0; i < n; i++){
        scanf("%d", &niz[i]);
    }
    int suma = 0;
    int brojAutomobila = 0;
    while(1){
        int najjeftiniji = niz[0];
        int indexNajjeftinijeg = 0;
        for(int i = 0; i < n; i++){
            if(niz[i] < najjeftiniji){
                najjeftiniji = niz[i];
                indexNajjeftinijeg = i;
            }
        }
        niz[indexNajjeftinijeg] =  niz[indexNajjeftinijeg] ^ niz[n-1];
        niz[n-1] =  niz[indexNajjeftinijeg] ^ niz[n-1];
        niz[indexNajjeftinijeg] =  niz[indexNajjeftinijeg] ^ niz[n-1];
        n--;
        suma +=  najjeftiniji;
        if(suma >= budzet){
            break;
        }
        else{
            brojAutomobila++;
        }
    }
    printf("\n  %d ", brojAutomobila);
    return 0;
}