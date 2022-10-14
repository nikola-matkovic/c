// Nacrtati strukturni dijagram toka algoritma i na programskom jeziku C napisati program koji čita
// brojeve sa standardnog ulaza, sve dok se ne pronade prvi simetričan broj. Prikazati taj broj.
// Primeri simetričnih brojeva: 1221, 1331, 8448, itd.

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define SIZE 100
int main(){
    int broj;
    int brojCifara = 0;
    int niz[SIZE];
    printf("Unsiite broj:");
    scanf("%d",&broj);
    int temp = broj;
    int temp2 = broj;
    int temp3 = broj;
    bool prviPut = false;
    while(temp2 != 0){
        temp2 /= 10;
        brojCifara++;
    }z
    for(int i = 0;i < brojCifara;i++){
            temp = temp % 10;
            niz[i] = temp;
            temp3 = temp3 / 10;
            temp = temp3;
        }
        for(int i = brojCifara;i >= 0;i--){
                if(niz[i] == 0){
                continue;
            }
                if(niz[i] == niz[i - 1]){
                    if(prviPut == false){
                        printf("%d",broj);
                    }
                    prviPut = true;
                }
                if(prviPut){
                    break;
                }
                else if(niz[i] != niz[i - 1]){
                    printf("\nUnsite ponovo broj:");
                    scanf("%d",&broj);
                }
             
            }
 
    return 0;
}