/*
//konstultacije
Napisati program kojim se za dati prirodan broj X
formira broj Y sastavljen od istih cifara ali
u obrnutom poretku,
 a zatim ispituje da li je broj
X+Y potpun kvadrat.
*/
#include <stdio.h>
#include <math.h>
int main(){
    int x, y=0, i, j, s, t, k=0, z;
    float koren;
    // do{
    //     printf("unesite broj x");
    //     scanf("%d", &x);
    // }
    for(x=1; x<1000000; i++){
        while(x<1);
        t=x;
        while(t!=0){
            t/=10;
            k++;
        }
        printf("Broj ima %d cifara \n", k);
        t=x;
        while(t!=0){
            j=t%10;
            t/=10;
            y+=j*pow(10, k-1);
            k--;
        }
        z=x+y;
        koren = sqrt(z);
        printf("Broj od unazad je %d", y);
        if(koren - (int) koren==0){
            printf("broj je potpun koren");
        }
    }
    return 0;
}