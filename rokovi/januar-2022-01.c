/*Državni univerzitet u Novom Pazaru
	Softversko inženjerstvo, Računarska tehnika, Matematika

OSNOVI PROGRAMIRANJA/PROGRAMIRANJE 1
JANUAR 2022.


1. Nacrtati strukturni dijagram toka algoritma i na programskom jeziku C napisati program koji učitava
cele brojeve i štampa magične cifre sve dok korisnik ne unese broj koji nema nijednu magičnu cifru.
Cifra broja je magična ukoliko je njena vrednost jednaka poziciji na kojoj se nalazi.
Cifra jedinica se nalazi na poziciji 1, cifra desetica se nalazi na poziciji 2, cifra najveće
težine N-tocifrenog broja se nalazi na poziciji N.
Na primer:
U broju 71 cifra 1 je magična jer se nalazi na prvoj poziciji.
Broj 325 ima dve magične cifre, cifru 2 koja se nalazi na drugoj poziciji
i cifru 3 koja se nalazi na trećoj poziciji.


2.Na programskom jeziku C napisati funkciju koja za dva niza karaktera preneta preko parametara utvrdjuje
da li su anagrami ili ne. Dva niza su anagrami ako se sastoje od istog broja istih karaktera.
Na primer, nizovi "anagram” i "ramgana” jesu anagrami, dok "anagram” i "angrm” nisu. U glavnom programu
sa tastature učitati dve reči i korišćenjem formirane funkcije proveriti da li su unete reči anagrami.
Prikazati rezultat provere.

3. U fajlu “parcele.txt” nalaze se X i Y koordinate parcela koje su zadate u sledećem redosledu: šifra parcele,
dole-levo, dole-desno, gore-desno, gore-levo. Na programskom jeziku C napisati strukturni program koji računa
površinu svake parcele i prikazuje je korisniku zaokruženu na dve decimale. Ukoliko je površina parcele manja
od hektara prikazati je u arima (na primer 2.55a), ukoliko je površina parcele bar jedan hektar prikazati je
u hektarima (na primer 1.20ha). Parcele nisu pravougaonog oblika, pa njihovu površinu računati kao površinu dva
trougla primenom Heronove formule.




Prof. dr Bratislav Mirić
Novi Pazar, 10.02.2022. godine
*/


// 1. Nacrtati strukturni dijagram toka algoritma i na programskom jeziku C napisati program koji učitava
// cele brojeve i štampa magične cifre sve dok korisnik ne unese broj koji nema nijednu magičnu cifru.
// Cifra broja je magična ukoliko je njena vrednost jednaka poziciji na kojoj se nalazi.
// Cifra jedinica se nalazi na poziciji 1, cifra desetica se nalazi na poziciji 2, cifra najveće
// težine N-tocifrenog broja se nalazi na poziciji N.
// Na primer:
// U broju 71 cifra 1 je magična jer se nalazi na prvoj poziciji.
// Broj 325 ima dve magične cifre, cifru 2 koja se nalazi na drugoj poziciji
// i cifru 3 koja se nalazi na trećoj poziciji.

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main(){
    int i;
    int magicniBroj;
    int brojCifara = 0;
    int temp = magicniBroj;
    int temp2 = magicniBroj;
    bool flag = false;
    printf("Unsite magicni broj:");
    scanf("%d",&magicniBroj);
    while(temp2 != 0){
        i = 1;
        temp = temp % 10;
        if(temp == i){
            flag = true;
        }
        temp2 = temp2 / 10;
        temp = temp2;
        i++;
    }
    
    if(flag == true){
        printf("%d jeste magican jer mu se cifra %d nalazi na istoj poziciji",magicniBroj,i);
    }
   
    
    return 0;
}