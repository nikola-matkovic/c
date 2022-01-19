/*10.9. Саставити програм који ће за унети низ (дужине n) целих бројева одредити и исписати:
а) суму парних и суму непарних бројева;
б) суму елемената са парним индексима и суму елемената са непарним индексима.*/
#include  <stdio.h>

int main(){
    int n, i, sn=0, sp=0, snb=0, spb=0;
    printf("unesite n");
    scanf("%d", &n);
    int niz[n];
    printf("Unesite niz");
    for (i = 0; i<n; i++){
        scanf("%d", &niz[i]);
        //a
        if(niz[i] & 1 ){
            sn+= niz[i];
        }
        else{
            sp+= niz[i];
        }
        if(i & 1){
            snb+=niz[i];
        }
        else{
            spb+=niz[i];
        }
    }
    printf("Suma neparnih brojeva je : %d, sa suma parnih brojeva je %d \n", sn, sp);
    printf("Suma Brojeva na neparnim indeksima je : %d, a suma brojeva na parnim indeksima je : %d \n", snb, spb);

    return 0;
}