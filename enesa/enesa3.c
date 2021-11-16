//Sve računske operacije

#include <stdio.h>

int main(){
    int prvi_broj, drugi_broj, zbir, razlika, proizvod, kolicnik, mod; //mod je ostatak

    printf("Molimo vas unesite prvi broj : ");
    scanf("%i", &prvi_broj);
    printf("Molimo vas unesite drugi broj : ");
    scanf("%i", &drugi_broj);
    zbir=prvi_broj+drugi_broj;
    razlika= prvi_broj-drugi_broj;
    proizvod=prvi_broj*drugi_broj;
    kolicnik=prvi_broj/drugi_broj;
    mod=prvi_broj%drugi_broj;
    printf("zbir: %d \n", zbir);
    printf("razlika: %d \n", razlika);
    printf("proizvod: %d \n", proizvod);
    printf("kolicnik: %d \n", kolicnik);
    printf("ostatak: %d \n", mod);
    return 0;
}