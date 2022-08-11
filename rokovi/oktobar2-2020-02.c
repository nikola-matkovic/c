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

void ceneAutomobila(int niz[SIZE],int budzet,int duzina){
    int i;
    struct automobil Automobili[SIZE];
    for(i = 0;i < duzina;i++){
        scanf("%s %d",Automobili[i].marka,&Automobili[i].cena);
         printf("%s : %d eura\n",Automobili[i].marka,Automobili[i].cena);
    }
   
}

int main(){

    return 0;
}