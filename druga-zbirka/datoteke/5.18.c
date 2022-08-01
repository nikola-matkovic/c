// 5.18. Саставити програм којим се формирају три датотеке са низовима целих бројева. Број и
// елеменати низа се уносе са тастатуре, а затим се сви унети смештају у датотеку svi.txt, позитивни
// елементи у pozitivni.txt и негативни у negativni.txt. Имена датотека се уносе на главном улазу.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    FILE *svi;
    FILE *pozitivni;
    FILE *negativni;
    svi = fopen("svi.txt", "r");
    pozitivni = fopen("pozitivni.txt", "w");
    negativni = fopen("negativni.txt", "w");
    if(svi == NULL || pozitivni == NULL || negativni == NULL){
        printf("Greska");
    }
    return 0;
}