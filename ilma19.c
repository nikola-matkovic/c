/*Horizontala i vertikala šahovske table su numerisane
od 1 do 8. Ako se učitavaju parovi tačaka (a,b) i (c,d) 
koji označavaju dva polja gde je prvi broj u paru 
horizontala,a drugi vertikala, ispisati da li su polja
iste boje.
*/
#include <stdio.h>

int main(){
    int a, b, c, d;
    printf("unesite a i b");
    scanf("%i %i", &a, &b);
    printf("unesite c i d");
    scanf("%i %i", &c, &d);
    if( (a+b)%2  == (c+d)%2){
        printf("Iste su ");
    }
    else{
        printf("nisu iste");
    }
    return 0;
}