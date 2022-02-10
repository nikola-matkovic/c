/*10.22. Саставити функцију којом се одређује број различитих елемената у задатом целобројном
низу. Затим саставити програм који чита низ целих бројева, и одређује број различитих елемената
користећи претходну функцију и исписује резултат. */
#include <stdio.h>

int razliciti(int niz[], int velicina1){
    int razliciti[velicina1];
    int velicina2 = 0;
    int i=0, j=0;
    razliciti[j]  = niz[0];
    velicina2++;
    int zastava;
    for(i=1; i<velicina1; i++){
        zastava = 1;
        for(j=0; j<velicina2; j++){
            if(razliciti[j]==niz[i]){
                zastava = 0;
            }
        }
        if(zastava){
            razliciti[velicina2] = niz[i];
            velicina2++; 
        }
    }
    return velicina2;
}

void main(){
    int i=0, velicina;
    printf("Koliko elemenata želite da unesete ?");
    scanf("%d", &velicina );
    int a[velicina];
    for(i=0; i<velicina; i++){
        scanf("%d", &a[i]);
    }
    printf("u datom nizu postoji %d različitih elemenata", razliciti(a, velicina));
}