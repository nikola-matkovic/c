#include <stdio.h>

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
}