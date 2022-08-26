// 2. Napisati funkciju koja će kao argumente imati niz koji predstavlja cene automobila (i-ti element niza predstavlja cenu i-tog automobila), dužinu niza i budžet. Funkcija treba da vrati najveći broj automobila koliko korisnik može da kupi sa prosleđenim budžetom.
// U main funkciji uneti broj automobila, cene automobila i budžet i ispisati koliko automobila može korisnik da kupi sa unetim budžetom.
// Primer: ako je korisnik uneo N=5 i niz=[100.000,50.000,30.000,45.000,23.000], za budžet je uneo 100.000 – rezultat bi bio da korisnik može da kupi najviše 3 automobila sa ovim budžetom.
//mart 2022

#include<stdio.h>
#include<stdlib.h>

#define SIZE 100

typedef struct automobil{
    char marka[30];
    int cena;
}AUTOMOBIL;

void ceneAutomobila(int budzet,int duzina){
    int i;
    int kojiAuto[SIZE];
    int suma = 0;
    int kolikoAutaSamKupio;
    int kolikoParaJeOstalo;
    int kolikoAuta;
    struct automobil Automobili[SIZE];
    printf("Unesite marku i cenu auta:");
    for(i = 1;i <= duzina;i++){
        scanf("%s %d",Automobili[i].marka,&Automobili[i].cena);
        
    }
   
      for(i = 1;i <= duzina;i++){
        
        printf("%d.%s : %d eura\n",i,Automobili[i].marka,Automobili[i].cena);
    }
    printf("Koliko cete auta uzeti:");
    scanf("%d",&kolikoAuta);
    printf("Izaverite automobil:");
    for(int j = 0;j < kolikoAuta;j++){
        scanf("%d",kojiAuto);
     }
      for(int j = 0;j < kolikoAuta;j++){
        printf("%d\n",kojiAuto[i]);
     }
   
     for(i = 1;i <= duzina;i++){
            if(kojiAuto[i] == i){
                suma += Automobili[i].cena;
                printf("Suma:%d",suma);
                
            }
        }
    
    kolikoParaJeOstalo = budzet - suma;
    printf("Kupio sam %d auta i ostalo mi je %d eura",kolikoAuta,kolikoParaJeOstalo);
}

int main(){
    int budzet;
    int kolicinaUtomobila;
    printf("Unesite budzet");
    scanf("%d",&budzet);
    printf("Unesite kolicinu automobila");
    scanf("%d",&kolicinaUtomobila);
    // printf("Izaberite automobil:");
    ceneAutomobila(budzet,kolicinaUtomobila);
    return 0;
}