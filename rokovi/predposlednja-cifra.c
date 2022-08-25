#include<stdio.h>
#include<stdlib.h>

int main(){
    int pretposlednjaCifra = 0;
    int brojCifara = 0;
    int broj;
    printf("Unsite broj:");
    scanf("%d",&broj);
    int temp = broj;
    int temp2 = broj;
   
   
    // while(temp != 0){
    //     temp /= 10;
    //     brojCifara++;
    // }
    // int br = brojCifara;
    // while(temp2 != 0){
    //     if(br == brojCifara - 1){
    //         pretposlednjaCifra = temp2 % 10;
    //     }
    //     temp2 /= 10;
    //     br--;
    // }
    printf("%d",pretposlednjaCifra);
    return 0;
}