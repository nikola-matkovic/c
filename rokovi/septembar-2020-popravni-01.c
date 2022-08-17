/*DRŽAVNI UNIVERZITET U NOVOM PAZARU

OSNOVI PROGRAMIRANIA

1. Sa ulaza se učitavajo prirodni brojevi ai b. Napisati program kojim se ispituju svi prirodne broje ir nervate

Ja,b) koji su deljivi svim svojim ciframa, ne uzimajući u obzir poslednju citru

Na primer, ako je interval 128 do 1521, prvi broj zadovljava uslov jer je deljiv sa 12 ne mora da bude

2. Napisati program na programskom jeziku C koji generile kvadratnu matricu A reda N oblik

N-1

12

N-2

023

Red matrice N zadaje korisnik. Prikazati generisanu matricu u tabelamom obliku.

3 Data je datoteka seledeceg sadrzaja:

a)prvi red predstavlja naziv departmana

b)drugi red datatoteke predstavlja broj studenata na departmanu c)Naredni redovi predstavljaju podatke o polozenim ispitima za svakog studenta upisani na sledeci

nacin

Prezime Studenta Ime studenta. Broj Indeksa

n(broj polozenih ispita) (Redni broj ispita ocena)"n

ular.txt

matematika

2

mujovic edita,8/2016

3

18 29

37

Korac jasmina,6/2017

1

Ucitane podatke treba amesti u niz tipa struct Student pri cemu struktura Student sadrzi

710

ime.prezime,broj indeksa niz ocene tipa int od maksimalnih 30 elemenata koji predstavlja niz ista koje student ima na studijama. Ako je student polezio ispit u nizu ce biti upisana ocena ako nije bice 0 Redni broj ocene u ulaznoj datoteci je indeks ocene u nizu ocene u strukturi

Upisati u dataoteku Prosek.txt Departman

Ime Prezime Broj indeksa prosek **prosek.txt

MATEMATIKA

PREZIME

IME

BROJ INDEKSA

PROSEK

Mujovic Korac

Edita

8/2007 Jasmina 6/2010

8.000000

10.000000 Voditi racuna da ime i prezime pocinje velikim slovom da je departman napisan velikim slovima

Novi Pazar 01.09.2020. godine

Prof. dr Bratislav Miné

20
*/  

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<stdbool.h>

#define SIZE 100

int main(){
    int a;
    int b;
    int i,j;
    int brojcifara = 0,temp = 0;
    int temp2 = 0;
    int desetke = 1;
    bool flag = false;
    int niz[SIZE];
    printf("Unsite a:");
    scanf("%d",&a);
    printf("Unsite b:");
    scanf("%d",&b);
    temp = a;
    temp2 = a;
    while(temp != 0){
        temp = temp / 10;
        brojcifara++;
    }
    int brCifaratmp = brojcifara;
    for(i = a;i < b;i++){
        for(j = 0;j < b;j++){

        a = a / pow(10,brojcifara-1);
       if(brojcifara < brCifaratmp){
            a = a % (10 * desetke);
            desetke = 0;
            desetke += 10;
        }
       
        if(j == a && temp2 % a == 0){
            flag = true;
        }
       
        if(brojcifara == 1){
            break;
        }
        a = temp2;
        brojcifara--;
        }
       
    }
    if(flag == true){
        for(i = 0;i < b;i++){
            printf("%d ",niz[i]);
        }
    }

    
    return 0;

}