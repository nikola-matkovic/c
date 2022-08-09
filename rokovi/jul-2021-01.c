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

/*

Njihov nacin 
int obrnutiBroj(int broj){
    int obrnuti = 0;
    while(broj != 0){
        obrnuti = (obrnuti * 10) + (broj % 10);
        broj /= 10;
    }
    return obrnuti;
}

void suma(int broj){
    broj = obrnutiBroj(broj);
    int sumaNeparnih = 0,sumaParnih = 0,c = 1;

    while(broj != 0){
        if(c % 2 == 0){
            sumaParnih += broj % 10;
        }
        else{
            sumaNeparnih += broj % 10;
        }
        broj /= 10;
        c++;
    }
    printf("Suma parnih:%d\n",sumaParnih);
    printf("Suma neparnih:%d\n",sumaNeparnih);
    if(sumaParnih == sumaNeparnih){
        printf("Broj je savrsen\n");
    }
    else{
        printf("Broj nije savrsen\n");
    }
}



int main(){
    int broj;
    printf("Unesite broj:");
    scanf("%d",&broj);
    suma(broj);
     


    return 0;
}

*/

//Moja nacin

#include<stdio.h>
#include<stdlib.h>

#define SIZE 100

int main(){
    int broj,temp,brojCifara = 0,temp2,temp3;
    int niz[SIZE],i;
    printf("Unesite broj:");
    scanf("%d",&broj);
    temp = broj;
    temp2 = broj;
   
    while(temp != 0){
        temp = temp / 10;
        brojCifara++;
    }
    int obrnutiBroj = 0;
    while(temp2 != 0){
        obrnutiBroj = (obrnutiBroj * 10) + (temp2 % 10);
        temp2 = temp2 / 10;
    }
    printf("Obrnuti broj je:%d\n", obrnutiBroj);
    temp3 = obrnutiBroj;
   

     
        for(i = 0;i < brojCifara;i++){
        obrnutiBroj = obrnutiBroj % 10;
        niz[i] = obrnutiBroj;
        temp3 = temp3 / 10;
        obrnutiBroj = temp3;
        }
        
        

    printf("Niz brojeva je:\n");
 
    for(i = 0;i < brojCifara;i++){
        printf("%d",niz[i]);
    }
    for(i = 0;i < brojCifara;i++){
        
    }

    printf("\nBroj cifara je: %d\n",brojCifara);


    return 0;
}