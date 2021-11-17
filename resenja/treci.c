/* napisati program koji sa tastature čita broj n (najviše 100),
i vrenost v, a potom n celih brojeva.
zatim proveriti da li je v u nizu, na kom mestu i koliko u nizu
ima brojeva manjih od v.
Napomena:  dozvoljeno je koriscenje samo prostih tipova podataka,
i nije dozvoljeno  koriscenje nizova kao tip podataka. */
#include <stdio.h>
int main (){
    int n, v, i, polozaj_v, j=0, broj;
    do{
        printf("unesite broj n = ");
        scanf("%d", &n);
    }
    while(n<1 || n>100);
    printf("Unesite vrednost v =");
    scanf("%d", &v);
    for(i=1; i<=n; i++){
        scanf("%d", &broj);
        if(broj==v){
            polozaj_v = i;
        }
        if(broj<v){
            j++;
        }
    }
    printf("%d se nalazi naa %d mestu", v, polozaj_v);
    printf("Postoji %d brojeva manjih od %d", j, v);
    return 0;
}