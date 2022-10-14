#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main(){
    int suma = 0;
    int n  = 0;
    printf("Unesite koliko cifara će imati brojevi:");       
    scanf("%d", &n);
    while(1){
        int broj;
        do{
            printf("\nunesite broj: ");
            scanf("%d", &broj);
        }
        while(broj <= 0); //broj mora da bude pozitivan
        int brojcifara = 1;
        int temp = broj;
        while(temp / 10 != 0){ // broj mora imati n cifara
            temp /= 10; 
            brojcifara ++;
        }
        if(brojcifara == n){
            int prvaCifra = broj / pow(10, n-1);
            int zadnjaCifra = broj % 10;
            if(prvaCifra > zadnjaCifra){
                break;
            }
            suma += broj;
        }
    }
    printf("Suma je %d", suma);
    return 0;
}