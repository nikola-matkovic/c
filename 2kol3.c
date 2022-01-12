/* formirana je datoteka vrata.txt sa podacima o sastavu ulaznih vrata.  svaki zapis sadrži 
informacijee: šifra modela vrata, površina vrata napravljenu od plastike, površina vrata napravljena od drveta,
i površina vrata napravljena od stakla. unesite cene za kvadratni metra plastike, drveta i stakla sa standardnog
ulaza.
Pročitati datoteku  i odštampati ukupan broj vrata koja su 100% od drveta.
Izračunati cenu za svaki model vrata, i upisati u novu datoteku cene.txt  šifra modela vrata, i njegova cena.
Ispisati na standardnom ulazu cenu najjeftinijih vrata.

*/
#include <stdio.h>
#include <stdlib.h>

#define MAX 100

typedef struct vrata {
    int sifra;
    float p_plastike;
    float p_drveta;
    float p_stakla;
    float cena;
}VRATA;

int main(){
    int od_drveta = 0;
    int i=0, j=0;
    float c_plastike;
    float c_drveta;
    float c_stakla;
    printf("Unesite cene za kvadratni metar plastike, drveta i stakla \n");
    scanf("%f %f %f", &c_plastike, &c_drveta, &c_stakla);
    FILE *vrata_fajl, *cene_fajl;
    vrata_fajl = fopen("vrata.txt", "r");
    if (vrata_fajl == NULL){
        printf("Greška prilikom otvaranja datoteke vrata.txt");
        exit(1);
    }
    cene_fajl = fopen("cena.txt", "w");
    if (cene_fajl == NULL){
        printf("Greška prilikom otvaranja datoteke cena.txt");
        exit(1);
    }

    VRATA v[MAX];

    while(1){
        if(feof(vrata_fajl)){
            break;
        }
        else{
            fscanf(vrata_fajl, "%d %f %f %f", &v[i].sifra, &v[i].p_plastike, &v[i].p_drveta, &v[i].p_stakla);
            if(v[i].p_drveta>0 && v[i].p_plastike==0 && v[i].p_stakla==0){
                od_drveta++;
            }
            v[i].cena = v[i].p_plastike * c_plastike + v[i].p_drveta * c_drveta + v[i].p_stakla * c_stakla; 
            i++;
        }
    }
    VRATA najjeftinija =  v[0];
    for(j=0; j<i; j++){
        fprintf(cene_fajl, "%d %f\n", v[j].sifra, v[j].cena);
        if(v[j].cena<najjeftinija.cena){
            najjeftinija = v[j];
        }
    }
    printf("Cena najjeftinijih vrata je %f", najjeftinija.cena);
    printf("Ukupno vrata 100 procenata od drveta je %d", od_drveta);    
    return 0;
}