// 3.4. Саставити програм који учита низ целих бројева дужине n и проналази и исписује највећи
// елемент. Елементе сместити у динамички алоцирану меморију.

#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,i;
    printf("Unesite duzinu:");
    scanf("%d",&n);
    int niz[n];
    for(i = 0; i < n; i++){
        scanf("%d",&niz[i]);
    }
    return 0;
}