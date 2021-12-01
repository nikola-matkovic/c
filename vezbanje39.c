/*Zadatak 3. Napraviti program koji omogućuje korisniku da unese priro-
dan broj n, a zatim na ekranu iscrtava kvadrat ispunjen znakovima zvi-ponavljanje dijelova koda - petlje
jezda (*) čije su sve stranice dugačke po n zvijezda.*/

#include<stdio.h>
int main(){
    int n,i,j;
    printf("Unesite broj n=");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("* ");
        }
        printf("\n");
    } 


    return 0;
}