// 3. Formirana je datoteka VRATA DAT sa podacima o sastavu ulaznih vrata. 

// Svaki zapis sadrži informacije: šifra modela vrata, površinu vrata napravljenu od plastike,
// površinu vrata napravljenu od drveta površinu vrata napravljenu od stakla. 

// Unesite podatke o ceni kvadratnog metra plastike, drveta stakla sa standardnog ulaza.

// Pročitati datoteku i odštampati ukupan broj vrata koja su 100% od drveta. 

// Izračunati cene za svaki model vrata i u pisati u novu datoteku CENE.DAT 

// Sifra modela vrata i njegovu cenu. Ispisati na standardnom izlazu cenu 1 najjeftinijih vrata.

#include<stdio.h>
#include<stdlib.h>

#define MAX 100

typedef struct vrata
{
    int SifraModelaVrata;
    int PovrsinaVrataOdPlastike;
    int PovrsinaVrataOdDrveta;
    int PovrsinaVrataOdStakla;
    int Cena;
}VRATA;

int main(int argc, char const *argv[])
{
    VRATA vrata[MAX];

    FILE *vrata = fopen("vrata.txt", "r");
     if(vrata == NULL){
        printf("Greska prilikom otvaranja fajla Vrata.txt");
        exit(1);
    }

    FILE *cena = fopen("cena.txt", "w");
     if(cena == NULL){
        printf("Greska prilikom otvaranja fajla Vrata.txt");
        exit(1);
    }

    int CenaKvadratnogMetraPlastike;
    int CenaKvadratnogMetraDrveta;
    int CenaKvadratnogMetraStakla;
    printf("Unesite cenu kvadratnog metra plastike i drveta");
    scanf("%d %d", &CenaKvadratnogMetraPlastike, &CenaKvadratnogMetraDrveta, &CenaKvadratnogMetraStakla);
    
    int i = 0;
    int OdDrveta = 0;
    int UkupnaCena;
    while (!feof(vrata))
    {
        fscanf(vrata,"%d %d %d %d", &vrata[i].SifraModelaVrata, &vrata[i].PovrsinaVrataOdPlastike, &vrata[i].PovrsinaVrataOdDrveta, &vrata[i].PovrsinaVrataOdStakla);
        if(vrata[i].PovrsinaVrataOdPlastike == 0 && vrata[i].PovrsinaVrataOdPlastike == 0 && vrata[i].PovrsinaVrataOdDrveta > 0)
        {
            OdDrveta++;
        }
        vrata[i].Cena = vrata[i].PovrsinaVrataOdPlastike * CenaKvadratnogMetraPlastike + vrata[i].PovrsinaVrataOdDrveta * CenaKvadratnogMetraDrveta + vrata[i].PovrsinaVrataOdStakla * CenaKvadratnogMetraStakla;
        printf("Model vrata: %d \t Cena: %d", vrata[i].SifraModelaVrata , vrata[i].Cena );
        i++;
    }

    VRATA najjeftinija = vrata[0];
    for(int j = 0; j < i; j++)
    {
        if (vrata[j].Cena < najjeftinija.Cena)
        {
            najjeftinija = vrata[j];
        }
    }

    printf("Najjeftinija vrata kostaju: %d ", najjeftinija.Cena);
    printf("Vrata koja su 100 procenata od drveta: %d ", &OdDrveta);
              
    fclose(cena);
    fclose(vrata);
    return 0;
}
