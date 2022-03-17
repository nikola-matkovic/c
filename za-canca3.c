//napisati program koji sa  tastature koji učitava broj n (najviše 100), i vrendost v, a potom n celih brojeva
//zatim proverava da li je v u nizu, na kom je mestu, i koliko u nizu ima brojeva manjih od v.
//dozvoljeno je korišćenje samo prostih tipova podataka i nije dozvoljeno korišćenje niza kao tip podataka.

#include <stdio.h>

int main(){
    int n, v, i, broj, manjiOdV=0;
    //unos za n
    do{
        printf("Unesite n (najviše 100) :");
        scanf("%d", &n);
    }
    while(n>100 || n < 1);
    //unos na v
    printf("Unesite v:");
    scanf("%d", &v);
    //provere:
    for(i=0; i<n; i++){
        scanf("%d", &broj);
        if(broj == v){
            printf("V se nalazi u nizu, na %d mestu", i);
        }
        if(broj < v){
            manjiOdV++;
        }
    }
    printf("Ima %d brojeva manjih od %d", manjiOdV, v);
}