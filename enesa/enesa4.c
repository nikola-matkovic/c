//Provera da li je broj paran.
#include <stdio.h>
int main(){
    int broj;
    scanf("%d", &broj);
    if(broj%2 == 0)
    {           // ako je : broj ostatak 2 = 0;
        printf("Broj je paran");
    }
    else
    {
        printf("broj je neparan");
    }
    return 0;
}