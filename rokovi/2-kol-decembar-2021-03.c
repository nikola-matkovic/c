// 3. Formirana je datoteka VRATA DAT sa podacima o sastavu ulaznih vrata. 
// Svaki zapis sadrži informacije: šifra modela vrata, površinu vrata napravljenu od plastike,
// površinu vrata napravljenu od drveta površinu vrata napravljenu od stakla. Unesite podatke 
// o ceni kvadratnog metra plastike, drveta stakla sa standardnog ulaza. Pročitati datoteku i 
// odštampati ukupan broj vrata koja su 100% od drveta. Izračunati cene za svaki model vrata i u
// pisati u novu datoteku CENE.DAT -Sifra modela vrata i njegovu cenu. Ispisati na standardnom 
// izlazu cenu 1 najjeftinijih vrata.

#include <bits/pthreadtypes.h>
#include <stdarg.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct vrata{
    char sifraModelaVrata[30];
    int povrsinaPlastike;
    int povrsinaDrveta;
    int povrsinaStakla;

}VRATA; 

int main(){
    struct vrata Vrata1;
    struct vrata Vrata2;
    struct vrata  Vrata3;
    int cenaPlastike;
    int cenaDrveta;
    int cenaStakla;
    printf("Unesite cenu po kvadratnom metru plastike:");
    scanf("%d",&cenaPlastike);
    printf("Unesite cenu po kvadratnom metru srveta:");
    scanf("%d",&cenaDrveta);
    printf("Unesite cenu po kvadratnom metru stakla:");
    scanf("%d",&cenaStakla);
    FILE *VRATA,*CENE;
    VRATA = fopen("Vrata.txt" ,"r");
    CENE = fopen("Cene.txt" ,"w");

    if(VRATA == NULL){
        printf("Greska prilikom otvaranja fajla Vrata.txt");
    }

    if(CENE == NULL){
        printf("Greska prilikom otvaranja fajla Cene.txt");
    }
    return 0;
}
