//korisnik unosi redni broj polja, ti odredjuješ da li je crno ili belo.

#include <stdio.h>

int main() 
{
    int x, y;
    do{
    printf("Unesite redni broj vrste i kolone  : \n ");
    scanf("%d %d", &x, &y);}
    while(x>8 || x<1 || y>8 || y<1);
    if((x+y)%2==0){
        printf("Crno");
    }
    else{
        printf("belo");
    }
return 0;
}