/*Zadatak 1. Potrebno je napisati funkciju “maks” koja će vratiti vrijed-
nost većeg od dva proslijed̄ena broja. Matematički, to možemo zapisati kao
y “ maxta, bu. Npr. ako imamo a “ 5, b “ 3, funkcija treba da vrati 5.
U slučaju da su brojevi a i b jednaki, treba biti vraćena vrijednost a ili b,
svejedno je.*/

#include <stdio.h>
int maksimum(int a, int b){
    int max;
    if(a>b){
        max=a;
    }
    else if(a<b){
         max=b;
    }
    return max;
}
int main(){
    int a,b,max;
    printf("Unesite a i b");
    scanf("%d %d",&a,&b);
    max=int maksimum (a,b);
    printf("Broj a=%d i broj b=%d i broj koji je veci je",a,b);
    return 0;

}
