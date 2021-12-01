/*Zadatak 2. Napisati program koji omogućuje korisniku da unese cijeli
broj x, a zatim provjerava da li je x stepen dvojke (takav broj da je x=2^n
gdje je n neki prirodan broj) te ispisuje poruku JESTE ako je uslov
ispunjen.
*/
#include <stdio.h>
#include <math.h>
void main(){
    int x, i, semafor=0;
    printf("unesite x");
    scanf("%d", &x);
    for(i=0; pow(2, i)<=x ; i++)
        if(pow(2,i)==x)
            semafor=1;
    (semafor==1)?printf("jeste, 2 na %d  daje razultat %d", i, x) : printf("nije");
}