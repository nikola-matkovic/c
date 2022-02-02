/*10.40. Саставити програм за сортирање унетог низа целих бројева дужине n у неопадајући поредак
методом уметања (Insert Sort). Исписати сортирани низ.
Insert Sort: Нека је првих k елемената већ уређено у неопадајућем поретку, тада се узима
(k+1)-ви елемент и умеће на одговарајуће место међу првих k елемената тако да првих k+1
елемената буде уређено. Овај се метод примењује за k од 0 до n-2.
*/
#include <stdio.h>

void main(){
    int n, i, j, t, broj_elemenata = 5, indeks = 0;
    //unos niza
    printf("unesite koliko niz ima elemenata");
    //  scanf("%d", &n);
    n = 6;
    int niz[n];
    printf("Unesite niz");
    niz = {1, 2, 4, 5, 6};
    t=3;
    for(i = 0; i < n; i++){
       if(t>niz[i]){
           indeks++;
       }
    }
    printf("%d", indeks);
    //ispis
    for(i = 0; i < n; i++){
        printf("%d", niz[i]);
    }
}