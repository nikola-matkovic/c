// 4.13. Саставити структуру која садржи податке о датуму (дан, месец и година), а затим користећи
// формирану структуру саставити главни програм који за унете податке о дану, месецу и години
// исписује датум. Приступ члановима структуре остварити преко показивача.

#include <stdio.h>
typedef struct datum{
    int *dan;
    int *mesec;
    int *godina;

}DATUM;

int main(){
    struct datum d,g,m,*datum;
    int x,y,z;
    printf("Unesite dan:");
    scanf("%d",&x);
    printf("Unesite mesec:");
    scanf("%d",&y);
    printf("Unesite godinu:");
    scanf("%d",&z);
    datum = &d;
    datum = &g;
    datum = &m;
    datum->dan = &x;
    datum->mesec = &y;
    datum->godina = &z;

 
    if(*datum->dan < 10 && *datum->mesec > 9){
        printf("0%ls.%ls.%ls",*datum->dan,*datum->mesec,*datum->godina);
    }
    if (*datum->dan > 9 && *datum->mesec < 10){
        printf("%ls.0%ls.%ls",*datum->dan,*datum->mesec,*datum->godina);
    }
       if (*datum->dan < 10 && *datum->mesec < 10){
        printf("0%ls.0%ls.%ls",*datum->dan,*datum->mesec,*datum->godina);
    }
}