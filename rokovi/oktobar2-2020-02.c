// 2. Napisati funkciju koja će kao argumente imati niz koji predstavlja cene automobila
// (5-ti element za predstavlja cenu i-tog automobila), dužinu nira i bullet. Funkcija treba da vrati najveći
// broj automobila koliko korisnik može da kupi sa prosledenim budhetom

#include<stdio.h>
#include<stdlib.h>

#define SIZE 100

typedef struct automobil{
    char marka[30];
    int cena;
}AUTOMOBIL;

void ceneAutomobila(int budzet,int duzina){
    int i;
    int kojiAuto = 0;
    int suma = 0;
    int kolikoAutaSamKupio;
    int kolikoParaJeOstalo;
    struct automobil Automobili[SIZE];
    printf("Unesite marku i cenu auta:");
    for(i = 1;i <= duzina;i++){
        scanf("%s %d",Automobili[i].marka,&Automobili[i].cena);
        
    }
   
      for(i = 1;i <= duzina;i++){
        
        printf("%d.%s : %d eura\n",i,Automobili[i].marka,Automobili[i].cena);
    }
     printf("Izaverite automobil:");
     while(kojiAuto == 'N'){
        scanf("%d",&kojiAuto);
     }
     for(i = 1;i <= duzina;i++){
        for(int j = 1;j <= kojiAuto;j++){
            if(suma <= budzet){
                suma+= Automobili[j].cena;
                kolikoAutaSamKupio++;
            }
        }
    }
    kolikoParaJeOstalo = budzet - suma;
    printf("Kupio sam %d auta i ostalo mi je %d eura",kolikoAutaSamKupio,kolikoParaJeOstalo);

   
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