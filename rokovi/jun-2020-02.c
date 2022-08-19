/*Državni univerzitet u Novom Pazaru

www

NOVI PAZAR

OSNOVI PROGRAMIRANJA/PROGRAMIRANJE 1

JUN 2020

1. Sa ulaza se učitavaju prirodni brojevi a I b. Napisati program kojim se 
ispisuju svi prirodni brojevi iz intervala [a,b] koji su deljivi svim svojim ciframa.


2. Napisati program kojim se u niz X umeće broj b neposredno iza minimalnog elementa niza. Unos niza,
modifikovanje niza I ispis niza odraditi pomoću funkcija. Nije dozvoljeno korišćenje pomoćnog niza



3. Neka se u datoteci teniseri.txt nalaze podaci o teniserima po sledecem formatu: Sifra igračaž
(ceo broj), ime (najviše 30 znakova), prezime (najviše 30 znakova) i broj poena na ATP rang listi 
(ceo broj) U datoteci wimbledon.txt se nalaze podaci o plasmanu tenisera na ovom teniskom turniru.
U svakom redu datoteke se nalazi šifra tenisera (ceo broj), broj poena koji brani na turniru (ceo broj)
broj poena koji je osvojio na turniru (ceo broj). Raspored tenisera u datotekama ne mora biti identičan,
niti svi teniseri iz prve datoteke moraju postojati u drugoj datoteci. Napisati program na programskom jeziku
C koji pročita sadržaj ulaznih tekst i smešta ih u niz struktura, a zatim u izlaznu datoteku atplista.txt za
svakog tenisera upiše novi broj poena po formatu kao u prvoj ulaznoj datoteci. Novi broj poena se dobija tako
što se od starog broja poena na ATP listi oduzme broj poena koje teniser brani, a zatim doda broj poena koje je
teniser osvojio na turniru
*/



// 2. Napisati program kojim se u niz X umeće broj b neposredno iza minimalnog elementa niza. Unos niza,
// modifikovanje niza I ispis niza odraditi pomoću funkcija. Nije dozvoljeno korišćenje pomoćnog niza

#include<stdio.h>
#include<stdlib.h>

#define SIZE 100


void unos(int niz[SIZE],int n){
    for(int i = 0;i < n;i++){
        scanf("%d",&niz[i]);
    }
}

void ispis(int niz[SIZE],int n){
    for(int i = 0;i < n;i++){
        printf("%d ",niz[i]);
    }
    printf("\n");
}

void umetanje(int niz[SIZE],int n,int b){
    int min = niz[0];
  
     for(int i = 0;i < n;i++){
        if(niz[i] < min){
            min = niz[i];
        }
    }
    for(int i = 0;i < n;i++){
    if(niz[i] == min){
        if(i == 0){
            niz[n-1] = b;
        }
        niz[i - 1] = b;
    }
}
int temp;
  for(int i = 0;i < n-1;i++){
    for(int j = 0;j < n-1-i;j++){
        if(niz[j] > niz[j + 1]){
            temp = niz[j];
            niz[j] = niz[j + 1];
            niz[j + 1] = temp;
        }
    }
    }

}

int main(){
    int niz[SIZE];
    int n,b;
    printf("Unsite n:");
    scanf("%d",&n);
    printf("Unsite elemente niza X:\n");
    unos(niz,n);
    printf("\nUnsite b:");
    scanf("%d",&b);
    umetanje(niz,n,b);
    printf("\nUneti niz X je:\n");
    ispis(niz,n);

    return 0;
}