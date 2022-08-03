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

#define SIZE 100

typedef struct vrata{
    int sifraModelaVrata;
    int povrsinaPlastike;
    int povrsinaDrveta;
    int povrsinaStakla;
    float cena;

}VRATA; 

int main(){
    struct vrata Vrata[SIZE];
    int cenaPlastike;
    int cenaDrveta;
    int cenaStakla;
    int brojVrata = 0;
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
        exit(1);
    }

    if(CENE == NULL){
        printf("Greska prilikom otvaranja fajla Cene.txt");
        exit(1);
    }


    while(!feof(VRATA)){
       
    for(int i = 0; i < brojVrata;i++){
        if(fscanf(VRATA, "%d","%d","%d","%d",&Vrata[i].sifraModelaVrata,&Vrata[i].povrsinaPlastike,&Vrata[i].povrsinaDrveta,&Vrata[i].povrsinaStakla)){
            brojVrata++;
        }
            if(Vrata[i].povrsinaPlastike > 0 && Vrata[i].povrsinaStakla == 0 && Vrata[i].povrsinaDrveta == 0){
                printf("Vrata su 100 posto od drveta\n");
            }
            Vrata[i].cena = Vrata[i].povrsinaPlastike * cenaPlastike + Vrata[i].povrsinaDrveta * cenaDrveta + Vrata[i].povrsinaStakla * cenaStakla;
    }

    }
    while(!feof(CENE)){
        for(int i = 0; i < brojVrata; i++){
            fprintf(CENE, "%d","%f",Vrata[i].sifraModelaVrata,Vrata[i].cena);
        }
    }

    return 0;
}
