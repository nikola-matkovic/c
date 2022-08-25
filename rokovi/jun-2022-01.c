// Nacrtati strukturni dijagram toka algoritma i na programskom jeziku C napisati program koji čita
// brojeve sa standardnog ulaza, sve dok se ne pronade prvi simetričan broj. Prikazati taj broj.
// Primeri simetričnih brojeva: 1221, 1331, 8448, itd.

#include<stdio.h>
#include<stdlib.h>

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
    while(temp2 != 0){
        temp2 /= 10;
        brojCifara++;
    }
    while(1){
        scanf("%d",&broj);
        for(int i = 0;i < brojCifara;i++){
            temp = temp % 10;
            niz[i] = temp;
            temp3 = temp3 / 10;
            temp = temp3;
        }
            for(int i = brojCifara-2;i >= 1;i--){
                if(niz[i] == niz[i - 1]){
                    printf("%d",broj);
                }
                else{
                    break;
                }
            }
        

    }
    return 0;
}