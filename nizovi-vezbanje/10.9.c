/*10.9. Саставити програм који ће за унети низ (дужине n) целих бројева одредити и исписати:
а) суму парних и суму непарних бројева;
б) суму елемената са парним индексима и суму елемената са непарним индексима.

a)

#include<stdio.h>
#define MAX 100
int main(){
    int n,i,sp=0,sn=0,niz[MAX];
    printf("Unesite n:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
    scanf("%d",&niz[i]);
    if(niz[i] % 2 == 0){
        sp+=niz[i];
    }
    else if(niz[i] % 2 == 1){
        sn+=niz[i];
    }

    }
    printf("Suma parnih brojeva je=%d \n",sp);
    printf("Suma neparnih brojeva je=%d",sn);
    return 0;
}
b)
*/
#include<stdio.h>
#define MAX 100
int main(){
    int i,n,sp=0,sn=0,niz[MAX];
    printf("Unesite n:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&niz[i]);
        if(i % 2 ==0){
            sp+=niz[i];
        }
        else if(i % 2 ==1){
            sn+=niz[i];

        }
    }
      printf("Suma parnih indeksa je=%d \n",sp);
        printf("Suma neparnih indeksa je=%d",sn);
        return 0;


}


