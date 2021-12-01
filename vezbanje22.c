/*Zadatak 1. Napisati program koji omogućuje korisniku da unese cijeli
broj n, a zatim na ekranu ispisuje sve parne brojeve na intervalu rn, n 2 s.*/

#include<stdio.h>
#include<math.h>
int main(){
    int n,i;
    printf("Uneti broj n:");
    scanf("%d",&n);
    for(i=0;i<pow(n,2);i+=2)
    {
        printf("\nIspisati paran broj:\n %d",i);
    }
}  
