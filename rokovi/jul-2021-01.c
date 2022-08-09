/*DRŽAVNI UNIVERZITET U NOVOM PAZARU

OSNOVI PROGRAMIRANJA

ISPIT JUL 2021.

1. Napisati program koji ispisuje poruku da li je uneti broj N savršen. 
Broj je savršen ako je zbir cifara na parnim pozicijama jednak zbiru cifara
na neparnim pozicijama. Primer: Broj 15345 je savršen jer je zbir 1+3+5-5+4
dok broj 12345 nije savršen jer 1+3+5/2+4.




2. Napisati program koji sa standardnog ulaza učitava matricu celih brojeva.
Matrica predstavlja simulaciju lifta i ima dve vrste. Prva vrsta matrice 
predstavlja željene spratove osoba u liftu, a druga vrsta predstavlja težine tih
osoba. Najviše osoba u liftu može biti 10 s tim što se na svakom spratu vrši iskrcavanje
osoba kojima je željeni sprat taj sprat (postave se podaci osobe koja je stigla
na 0) i pri tom se sa standardnog ulaza unose podaci za nove osobe (prekid unosa
se vrši kada za željeni sprat korisnik unese-1 ili ako dođe do preopterećenja).
Do preopterećenja dolazi kada težine osoba u liftu budu veće od maksimalne težine
koju unosi korisnik sa standardnog ulaza. Pozicija lifta kreće od 1 do maksimalnog
broja sprata kojeg unosi korisnik. Na kraju se ispisuju podaci o osobama koje se nalaze
na poslednjem spratu i koliko je osoba prošlo kroz lift.




3. Napisati program koji na učitava datoteku DUNP DAT, koja sadrži podatke o studentima
Državnog univerziteta u Novom Pazaru i to broj indeksa, e, prime, departman, studijski
program, godina studija, prosek. Zatim se na standardnom izlazu ispisuju podaci o studentima
studijskog programa i godine koje korisnik unosi sa tastature i to u sledećem formatu:

Primer ako korisnik unese studijski program Softversko inženjerstvo i godinu studija prvu: Departman: Tehničke nauke

Studijski program: Softversko inženjerstvo Godina studija: prva

Spisak studenata: BROJ INDEKSA

IME

PREZIME

PROSEK

02-005/2017 Anes

02-002/2017 Petar

Mavric Samčević

9,84 69,14

02-010/2017 Kamber

Kamberović 7,38

Broj studenata na studijskom programu: 39 Prosečna ocena studenata: 7.87

Prof. de Bratislav Miri

Novi Pazar, 26.6.2021. godine

*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>


// 1. Napisati program koji ispisuje poruku da li je uneti broj N savršen. 
// Broj je savršen ako je zbir cifara na parnim pozicijama jednak zbiru cifara
// na neparnim pozicijama. Primer: Broj 15345 je savršen jer je zbir 1+3+5-5+4
// dok broj 12345 nije savršen jer 1+3+5/2+4.


int obrnutiBroj(int broj){
    int obrnuti = 0;
    while(broj != 0){
        obrnuti = (obrnuti * 10) + (broj % 10);
        broj /= 10;
    }
    return obrnuti;
}



int main(){
    int broj;
    int parnePozicije = 0;
    int neparnePozicije = 0;
    int brojCifara = 0;
    int temp = broj;
    int temp1 = broj;
    printf("Unsite broj:");
    scanf("%d",&broj);
    while(temp != 0){
        temp /= 10;
        brojCifara++;
    }
     printf("broj:%d / %d\n",broj,(int)pow(10,brojCifara-5));
    neparnePozicije = (int)broj / (int)pow(10,brojCifara-5);

   

    printf("Neparne pozicije uzima prvi broj %d\n",neparnePozicije);
     printf("Broj cifara pre while = %d\n",brojCifara);
     printf("Broj pre while:%d\n",broj);
    while(broj != 0){
       if(brojCifara > 0){
            brojCifara-=2;
       }
       else{
        break;
       }
       temp1 = temp1 / pow(10,brojCifara);

    // broj = broj / pow(10,brojCifara);
       
      
        // broj = (int)broj % (int)pow(10,brojCifara);
        // neparnePozicije += broj % 10; 
    }
    printf("temp1 je:%d",temp1);
    printf("Zbir nepanih pozicija je %d\n",neparnePozicije);
    printf("Broj cifara je: %d",brojCifara);
   
     


    return 0;
}