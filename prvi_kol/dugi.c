#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n;
    printf("Unesite broj N:");
    do{
        scanf("%d",&n);
    }
    while(n <= 10);
    int broj_cifara = 0;

    int temp = n;
    do {
        temp /= 10;
        ++broj_cifara;
    } while (temp != 0);

    int zadnja_cifra = n % 10;
    int prva_cifra = n / (pow(10, broj_cifara-1));

    int sredina = 0;

    temp = n;

    for(int i = 0; i < broj_cifara; i++) {
        int temp2 = temp % 10;
        temp /= 10;
        if(i == 0 || i ==broj_cifara-1){
            continue;
        }
        sredina += temp2 * pow(10, i-1);
    }
    int m = zadnja_cifra * pow(10, broj_cifara-1)  + sredina * 10 + prva_cifra;

    printf("%d ",m);
    return 0;
}