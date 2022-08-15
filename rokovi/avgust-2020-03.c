
// 3.Na programskom jeziku C napisati strukturni program koji računa i prikazuje 
// korisniku na standardni ilar povinu svake parcele. Podaci se nalaze o fajlu "parcele txt" 
// i to naziv parcele a zatim XV levo, Ukoliko je površina parcele manja od hektara prikazati je
// u arima (na primer 2.55a). levo, e parcela koje su zadate u sledećem redosledu dole-levo, dole-desno,
// gore-desno, gore ukoliko je površina parcele bar jedan hektar prikazati je u hektarima (na primer 1.20h).
// Parcele nisu pravougaonog oblika, pa njihovu površinu računati kao povrtinu dva trougla primenom Heronove formule.

#include<stdio.h>
#include<stdlib.h>

#define SIZE 100

typedef struct parcela{
    char naziv[30];
    int x;
    int y;
    int povrsina;
}PARCELA;

int main(){
    
    FILE *datoteka;
    datoteka = fopen("parcele.txt", "w");
    struct parcela  doleLevo;
    struct parcela  doleDesno;
    struct parcela  goreLevo;
    struct parcela  goreDesno;
    if(datoteka == NULL){
        printf("Greska");
        exit(1);
    }
    printf("Unesite naziv:");
    scanf("%s",doleLevo.naziv);
    printf("Unesite naziv:");
    scanf("%s",doleDesno.naziv);
    printf("Unesite naziv:");
    scanf("%s",goreLevo.naziv);
    printf("Unesite naziv:");
    scanf("%s",goreDesno.naziv);

    //dole levo
    doleLevo.x = 500;
    doleLevo.y = 700;
    //dole desno
    doleDesno.x = 4;
    doleDesno.y = 15;
    //gore levo
    goreLevo.x = 3;
    goreLevo.y = 5;
    //gore desno
    goreDesno.x = 600;
    goreDesno.y = 40;

    doleLevo.povrsina = (doleLevo.x + doleLevo.x)*(doleLevo.y + doleLevo.y)*1/2;
    doleDesno.povrsina = (doleDesno.x + doleDesno.x)*(doleDesno.y + doleDesno.y)*1/2;
    goreLevo.povrsina = (goreLevo.x + goreLevo.x)*(goreLevo.y + goreLevo.y)*1/2;
    goreDesno.povrsina = (goreDesno.x + goreDesno.x)*(goreDesno.y + goreDesno.y)*1/2;

    if(doleLevo.povrsina > 100){
        doleLevo.povrsina /= 100;
        fprintf(datoteka,"%s ima povrsinu:%dha\n",doleLevo.naziv,doleLevo.povrsina);
    }
    else{
        fprintf(datoteka,"%s ima povrsinu:%da\n",doleLevo.naziv,doleLevo.povrsina);
    }


    if(doleDesno.povrsina > 100){
        doleDesno.povrsina /= 100;
        fprintf(datoteka,"%s ima povrsinu:%dha\n",doleDesno.naziv,doleDesno.povrsina);
    }
    else{
        fprintf(datoteka,"%s ima povrsinu:%da\n",doleDesno.naziv,doleDesno.povrsina);
    }

    if(goreLevo.povrsina > 100){
        goreLevo.povrsina /= 100;
        fprintf(datoteka,"%s ima povrsinu:%dha\n",goreLevo.naziv,goreLevo.povrsina);
    }
    else{
        fprintf(datoteka,"%s ima povrsinu:%da\n",goreLevo.naziv,goreLevo.povrsina);
    }

    if(goreDesno.povrsina > 100){
        goreDesno.povrsina /= 100;
        fprintf(datoteka,"%s ima povrsinu:%dha\n",goreDesno.naziv,goreDesno.povrsina);
    }
    else{
        fprintf(datoteka,"%s ima povrsinu:%da\n",goreDesno.naziv,goreDesno.povrsina);
    }
    fclose(datoteka);



  

    return 0;
}