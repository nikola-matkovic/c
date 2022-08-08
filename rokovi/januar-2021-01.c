/*DRŽAVNI UNIVERZITET U NOVOM PAZARL

OSNOVI PROGRAMIRANJA

ISPIT JANUAR 2021

1. Nacrtati strukturni dijagram toka algoritma i na programskom jeziku napisati strukturni program za sumiranje celih pozitivnih N to cifrenih brojeva Brojevi se unose sa tastature redom, a sumiranje se vrši sve dok se ne unese broj čija je prva cifra veća od njegove poslednje cifre. Prikazati dobijenu sumu brojeva: Napomena: Nije dozvoljena upotreba indeksiranih promenljivih. Korisnik pre unosa brojeva mora uneti broj N. Sumirati samo brojeve koji imaju N cifara

2 Na programskom jeziku C napisati strukturni program za prikaz gajbice sa narandžamai praćenje procesa njihovog kvarenja. Na početku programa korisnik unosi dimenzije gajbice (predstaviti je preko matrice dimenzije MxN) i podatke o narandžama u njoj. Svako polje matrice može imati jednu od sledeće tri vrednosti: 0-prazno mesto, 1-narandža, 2 pokvarena narandža. Smatrati da korisnik neće uneti nevalidne vrednosti. Unete vrednosti predstavljaju inicijalno stanje gajbice, nakon čega pokvarene narandže počinju da kvare svoje susede, Pokvarena narandža može pokvariti 4 susedne (gore, dole, levo i desno u odnosu na sebe). Napisati funkciju koja za prosleđenu matricu vraća njeno stanje nakon prvog koraka kvarenja suseda. U glavnom programu prikazati početno stanje gajbice sa narandžama. Pomoću kreirane funkcije simulirati 3 koraka kvarenja narandži i prikazati krajnje stanje Za maksimalan broj poena alociranje memorije odraditi dinamički.

12220

10022

11121

0100 0

1 12 1 00 0 1 0 0 D 2 1 10 Početno stanje gajbice

221 10

Stanje nakon prvog koraka "kvarenja"

3. Datoteka ispiti.txt sadrži podatke o 5 studenata i ispitima u obliku niza struktura. Struktura sadrži polja, ime, prezime, predavanja, kolokvijumi ispit, koja redom označavaju ime studenta, prezime studenta, broj poena sa predavanja, broj poena sa kolokvijuma i broj poena sa ispita Sastaviti program koji čita podatke o studentima i ispituje da li je student položio ispit (ispit je položen ako je zbir poena sa predavanja, kolokvijuma i ispita veći od 50). Ukoliko je student položio ispit, njegove podatke (ime, prezime, ukupan broj poena) smestiti u datoteku polozili.txt ili ukoliko nije položio ispit iste podatke smestiti u datoteku nisu polozili.txt. Struktura koja se smešta u ove dve datoteke sadrži polja ime, prezime i ukupnoPoena. Na ekranu ispisati broj studenata koji su položili i broj studenata koji nisu polazili ispit

Prof. dr Bratislav Miric

Novi Pazar, 08.02.2021 god

*/

#include<stdio.h>

