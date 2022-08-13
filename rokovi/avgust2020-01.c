/*Državni univerzitet u Novom Pazaru

OSNOVI PROGRAMIRANJA/PROGRAMIRANJE! AVGUST 2020.

1. Na programskom jeziku C napisati strukturni program za unos celih brojeva. Za svaki od unetih
brojeva proveriti da li je prost. Brojeve unositi sve dok ukupna suma samo onih brojeva koji
su prosti ne postane veća od unapred zadate sume S. Prikazivati na ekranu sve proste brojeve
redom kao trenutno izračunatusumu unetih prostih brojeva. Prikazati i ukupan broj unetih prostih
brojeva. Napomena: Nije dozvoljena upotreba indeksiranih promenljivih.

2. Na programskom jeziku C napisati funkciju rotirajudesno koja vrši rotiranje prosledenog
iza dužine N za jedno mesto udesno. U glavnom programu umeti kvadratnu matricu i dimenzija
M&M i izvršiti rotiranje njenog oboda za jedno mesto u smeru kazaljke na satu (kao što je prikazano na primeru).
Primer

2

6

10 13 14 15

9

23

96 74

13 10 11 8

L14 15 16 12

11

12

161

3.Na programskom jeziku C napisati strukturni program koji računa i prikazuje 
korisniku na standardni ilar povinu svake parcele. Podaci se nalaze o fajlu "parcele txt" 
i to naziv parcele a zatim XV levo, Ukoliko je površina parcele manja od hektara prikazati je
u arima (na primer 2.55a). levo, e parcela koje su zadate u sledećem redosledu dole-levo, dole-desno,
gore-desno, gore ukoliko je površina parcele bar jedan hektar prikazati je u hektarima (na primer 1.20h).
Parcele nisu pravougaonog oblika, pa njihovu površinu računati kao povrtinu dva trougla primenom Heronove formule.

Prof. dr Bratislav Min

B

Novi Pazar, 20.08.2020. god.

*/

// 1. Na programskom jeziku C napisati strukturni program za unos celih brojeva. Za svaki od unetih
// brojeva proveriti da li je prost. Brojeve unositi sve dok ukupna suma samo onih brojeva koji
// su prosti ne postane veća od unapred zadate sume S. Prikazivati na ekranu sve proste brojeve
// redom kao trenutno izračunatusumu unetih prostih brojeva. Prikazati i ukupan broj unetih prostih
// brojeva. Napomena: Nije dozvoljena upotreba indeksiranih promenljivih.


#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define SIZE 100

int main(){
    int broj;
    int suma = 0;
    int S = 0;
    int niz[SIZE],i;
    bool zastava = true;
    
    // printf("Unesite sumu S:");
    // scanf("%d",&S);
    printf("Unesite broj:");
    scanf("%d",&broj);
  
    // while(S >= suma){
    //     scanf("%d",&broj);
    //     if(broj > 0 && broj % 1 == 0 && broj % broj == 0){
    //         suma += broj;
    //     }
        
    // }
    if(broj == 0 || broj == 1){
        zastava = true;
    }
    for(i = 2;i < broj;i++){
       if(broj % i == 0){
        zastava = false;
        break;
       }
    }
    if(zastava == true){
        printf("%d je prost",broj);
    }
    else{
        printf("%d nije prost",broj);
    }
    


    return 0;
}
