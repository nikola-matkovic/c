/* 5.18. Саставити програм којим се формирају три датотеке са низовима целих бројева. Број и
елеменати низа се уносе са тастатуре, а затим се сви унети смештају у датотеку svi.txt, позитивни
елементи у pozitivni.txt и негативни у negativni.txt. Имена датотека се уносе на главном улазу.*/
#include <stdio.h>
#include <stdlib.h>
#define MAX 20
int main(){
    int n, i;
    char imeSvi[MAX], imePozitivni[max], imeNegativni[max];
    printf("Unesite ime datoteke za sve brojeve");
    scanf("%s",  imeSvi);
    printf("Unesite ime datoteke za pozitivne brojeve");
    scanf("%s",  imePozitivni);
    printf("Unesite ime datoteke za negativne brojeve");
    scanf("%s",  imeNegativni);
    printf("koliko elemenata će imati niz: ");
    scanf("%d", n);
    if((svi = fopen(imeSvi, "w") )==NULL){
        printf("Greška pri otvaranju datoteke");
        exit(1);
    }
    if((pozitivni = fopen(imePozitivni, "w") )==NULL){
        printf("Greška pri otvaranju datoteke");
        exit(1);
    }
    if((negativni = fopen(imeNegativni, "w") )==NULL){
        printf("Greška pri otvaranju datoteke");
        exit(1);
    }
    for(i=0; i<n; i++){
        printf("unesite broj za unos:");
        scanf("%d", )
        fprintf(dat, )
    }
}