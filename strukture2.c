#include <stdio.h>

typedef struct igraci {
  char ip[20];
  float visina;
  float tezina;
  int bk;
  int ba;
  int bu;
  int bb;
  int poeni;
}IGRACI;

int main(){
  FILe *dat;
  IGRACI ig[100], najbolji;
  int i=0, n;
  dat = fopen("igraci.txt", "r");
  if(dat == null){
    printf("greška");
    exit(1);
  }
  while(1){
    fscanf(dat, "%s %f %f %d %d %d %d", ig[i].ip, ig[i].visina, ig[i].tezina, ig[i].bk, ig[i].ba, ig[i].bu, ig[i].bb);
    if(feof(dat)){
      break;
    }
    ig[i].poeni =  ig[i].bk*1 + ig[i].ba*0.5;
    i++;
  }
  flocse(dat);
  n=i;
  najbolji=ig[0];
  for(i=1; i<n; i++){
    if(ig[i].poeni > najbolji.poeni);
    najbolji = igraci[i];
  }
  printf("njablji igrač je %s i on je  osvojio %f poena", najbolji.ip,  najbolji.poeni);
  return 0;
}