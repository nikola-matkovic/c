/*
sastaviti program na programskom jeziu c kojim se na početku zadaju brojevi m i n, a zatim se redom unose
brojevi i za svaki broj se vrši provera da li odgovara kriterijumu da je n-to cifreni i da je suma cifara
tog broja deljiva sa predposlednjom cifrom tog broja .
ako broj odgovara kriterijumu onda ga ispisati na standardnom izlazu.
unošenje vršiti dok se ne unese m brojeva koji odgovaraju kriterijumima.
na kraju ispisati i koliko je brojeva unseo korisnik koji ne odgovaraju kriterijumu
*/

#include <stdio.h>
#include<stdlib.h>

int main(){
    //promenljve i unos:
    int n, m, broj, sumaCifara, predposlednjaCifra, brojeviKojiNeOdgovaraju = 0, brojeviKojiOdgovaraju = 0;
    printf("Unesite n i m ");
    scanf("%d %d", &n, &m);
    while(1){
        int brojCifara = 1;
        printf("Unesite broj");
        scanf("%d", &broj);
        //provera da li je broj n-tocifren
        int temp = broj;
        int sumaCifara = 0;
        while(temp / 10 != 0){
            brojCifara++;
            sumaCifara += temp % 10;
            temp /= 10;
            if(brojCifara == 2){
                predposlednjaCifra = temp % 10;
            }
        }
        sumaCifara += temp % 10;

        if(brojCifara == n & sumaCifara % predposlednjaCifra == 0){
            brojeviKojiOdgovaraju++;
            printf("%d", broj);
        }
        else{
            brojeviKojiNeOdgovaraju++;
        }
        if(brojeviKojiOdgovaraju == m){
            break;
        }
    }
    printf("%d ", brojeviKojiNeOdgovaraju);
    return 0;
}
