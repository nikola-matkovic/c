#include <stdio.h>
<<<<<<< HEAD

typedef struct artikli {
    int barkod;
    int ime[15];
    float cena;
}ARTIKLI;
int main(){
  FILe *dat;
  ARTIKLI a[100];
  int i=0;
  dat = fopen("proizvodi1.txt", "r");
  if(dat == null){
    printf("Greška ");
    exit(1);
  }
  while(1){
    fscanf(dat, "%d %s %", &a[i].barkod, &a[i].ime, &a[i].cena);
    if(feof(dat)){
      break;
    }
    if(a[i].cena < 500)
      printf("%d %s %f", a[i].barkod, a[i].ime, a[i].cena));
    i++;
  }
  flocse(dat);
  return 0;
=======
#include <string.h>

typedef struct osoba{
    char ime[15];
    char prezime[15];
    int godine;
    float tezina, visina;
}osoba;

int main(){
    osoba o1, o2;
    printf("unesite podatke o prvoj osobi:");
    scanf("%s %s %d %f %f", o1.ime, o1.prezime, &o1.godine, &o1.tezina, &o1.visina );
    printf("unesite podatke o drugoj  osobi:");
    scanf("%s %s %d %f %f", o2.ime, o2.prezime, &o2.godine, &o2.tezina, &o2.visina );
    if(o1.godine>o2.godine)
        printf("Prva osoba je starija");
    else if(o2.godine>o1.godine)
        printf("druga osoba je starija");
    else
        printf("isto su godište");
>>>>>>> bb05a85b1778750bdbf5289bd8771168072922ec
}