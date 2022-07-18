// 3.15. Саставити програм за унети низ целих бројева дужине n врши уметање новог елемента
// између ј-тог и ј+1-ог елемента датог низа. Исписати новоформирани низ. Низ сместити у динамичку
// зону меморије. 

#include<stdio.h>
#include<stdlib.h>

int main(){
    int *niz,i,j,n;
    printf("Unesite duzinu niza:");
    scanf("%d",&n);
    niz = (int*)malloc(sizeof(int));
    printf("Unesite niz:\n");
    for(i = 0;i < n;i++){
        scanf("%d",&niz[i]);
    }
    printf("Trenutni niz je:\n");
    for(i = 0;i < n;i++){
        printf("%d",niz[i]);
    }
    return 0;
}