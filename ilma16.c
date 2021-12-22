/*Napisati program kojim se učitava sa tastature cifra. 
U zavisnosti od vrednosti cifre ispisati 0 – nula,
1 – jedan, 2 – dva...9 – devet.*/
#include <stdio.h>

int main(){
    int a;
    printf("Molimo vas unesite broj");
    scanf("%i",&a);
    if(a==0){
        printf("Nula");
    }
    if(a==1){
        printf("Jedan");
    }
    if(a==2){
        printf("Dva");
    }
    if(a==3){
        printf("Tri");
    }
    if(a==4){
        printf("Četiri");
    }
    if(a==5){
        printf("pet");
    }
    if(a==6){
        printf("Šest");
    }
    if(a==7){
        printf("Sedam");
    }
    if(a==8){
        printf("Osam");
    }
    if(a==9){
        printf("Devet");
    }
    return 0;
}