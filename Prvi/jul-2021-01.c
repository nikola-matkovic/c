#include<stdio.h>
#include<stdlib.h>
#include<math.h>


// 1. Napisati program koji ispisuje poruku da li je uneti broj N savršen. 
// Broj je savršen ako je zbir cifara na parnim pozicijama jednak zbiru cifara
// na neparnim pozicijama. Primer: Broj 15345 je savršen jer je zbir 1+3+5-5+4
// dok broj 12345 nije savršen jer 1+3+5/2+4.




int obrnutiBroj(int broj){
    int obrnuti = 0;
    while(broj != 0){
        obrnuti = (obrnuti * 10) + (broj % 10);
        broj /= 10;
    }
    return obrnuti;
}

void suma(int broj){
    broj = obrnutiBroj(broj);
    int sumaNeparnih = 0,sumaParnih = 0,c = 1;

    while(broj != 0){
        if(c % 2 == 0){
            sumaParnih += broj % 10;
        }
        else{
            sumaNeparnih += broj % 10;
        }
        broj /= 10;
        c++;
    }
    printf("Suma parnih:%d\n",sumaParnih);
    printf("Suma neparnih:%d\n",sumaNeparnih);
    if(sumaParnih == sumaNeparnih){
        printf("Broj je savrsen\n");
    }
    else{
        printf("Broj nije savrsen\n");
    }
}



int main(){
    int broj;
    printf("Unesite broj:");
    scanf("%d",&broj);
    suma(broj);
     


    return 0;
}





