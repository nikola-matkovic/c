/* Napraviti program koji izracunava stepen bez pow funkcije*/

#include<stdio.h>
int main(){
    int a,b,i,s=1;
    printf("Unesite a i b=");
    scanf("%d %d",&a,&b);
    for(i=1;i<=b;i++){
        s*=a;

    }
    printf("Proizvod dva broja=",s);
}