/*
u svakoj liniji tekstualne datoteke CD.txt nalaze se podaci o prodaji Compact diskova
linije se sastoje od više kolona međusobno razdvojenih dvotačkom.
prvoj koloni se nalazi naziv žanra cd-a koji može biti Jedan od vrednosti: 
inostrana novokomponovana dečija klasična.
u drugoj koloni je zadat broj prodatih primeraka za tekuću prodaju.
u trećoj koloni dat je datum prodaje u obliku rednog broja između 1 početni dan intervala prodaje i 30 dan obrade podataka.
potom slede podaci o nabavnoj ceni.  ti podaci sa zastoje od cene po primerku,
ali za inostranu muziku dodatno se zadaje i iznos carine po ukupnoj količini,
dok se za novokomponovanu muziku dodatno se po primerku zadaje i iznos poreza na šund, potom slede podaci o prodajnoj ceni.
broj linije u datoteci nije u napred poznat.
Napisati program koji će odšampati na standradnom izlazu ukupne prihode od prodaje u intervalima od broja dana koje unosi korisnik sa tastature, i formatirati
datotetu podaci.dat koja će biti u istom formatu kao datoteka cd.dat, ali će sadžati i podatke o prodaji diskova koji nisu žanra novokomponovane muzike.
*/

#include <stdio.h>
#include<stdlib.h>
#include <string.h>

#define MAX 100

typedef struct disk {
    char zanr[30];
    int brojProdatihPrimeraka;
    int datum;
    int cenaPoPrimerku;
    int carinaNaUkupnuKolicinu; 
    int porezNaSund;
    int prodajnaCena;
}DISK;

int main(){
    FILE * datoteka1 = fopen("cd.txt", "r");
    if(datoteka1==NULL){
        printf("greška1");
        exit(1);
    }
    DISK diskovi[MAX];
    int i = 0;
    while(!feof(datoteka1)){
        fscanf(datoteka1, "%s:", diskovi[i].zanr);
        fscanf(datoteka1, "%d:", &diskovi[i].brojProdatihPrimeraka);
        fscanf(datoteka1, "%d:", &diskovi[i].datum);
        fscanf(datoteka1, "%d:", &diskovi[i].cenaPoPrimerku);
        if(strcmp(diskovi[i].zanr, "strana") == 0){
            fscanf(datoteka1, "%d:", &diskovi[i].carinaNaUkupnuKolicinu);
        }
        else if(strcmp(diskovi[i].zanr, "novokomponovana") == 0){
            fscanf(datoteka1, "%d:", &diskovi[i].porezNaSund);
        }
        fscanf(datoteka1, "%d:", &diskovi[i].prodajnaCena);
        i++;
    }
    printf("Unesite inerval datuma: ");
    int datum1, datum2, ukupnaZarada = 0;
    scanf("%d", &datum1);
    scanf("%d", &datum2);

    for(int j=0; j<i; j++){
        int cenaTrenutnog = diskovi[j].brojProdatihPrimeraka  * (diskovi[j].prodajnaCena - diskovi[j].cenaPoPrimerku);
          if(strcmp(diskovi[j].zanr, "strana") == 0){
             int porez = diskovi[j].carinaNaUkupnuKolicinu;
             cenaTrenutnog += cenaTrenutnog * porez / 100;
             ukupnaZarada += cenaTrenutnog;
     }
         else if(strcmp(diskovi[j].zanr, "novokomponovana") == 0){
             int cenaTrenutnog = diskovi[j].prodajnaCena  * (diskovi[j].prodajnaCena - diskovi[j].cenaPoPrimerku);
         }
         else{
             ukupnaZarada += diskovi[j].prodajnaCena  * (diskovi[j].prodajnaCena - diskovi[j].cenaPoPrimerku);
         }
        ukupnaZarada += cenaTrenutnog;
    }
    printf("ukupna zarada: %d", ukupnaZarada);
     for(int j = 0; j<i; j++){
         printf("%s ", diskovi[j].zanr);
         printf("%d ", diskovi[j].brojProdatihPrimeraka);
         printf("%d ", diskovi[j].datum);
         printf("%d ", diskovi[j].cenaPoPrimerku);
         if( strcmp(diskovi[j].zanr, "strana") == 0 ){
             printf("%d ", diskovi[j].carinaNaUkupnuKolicinu);
         }
         else if(strcmp(diskovi[j].zanr, "novokomponovana") == 0){
             printf("%d ", diskovi[j].porezNaSund);
         }
         printf("%d ", diskovi[j].prodajnaCena);
         printf("\n");
         printf("BOK\n");
     }

    return 0;
}