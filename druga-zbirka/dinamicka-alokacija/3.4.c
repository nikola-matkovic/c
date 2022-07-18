// 3.4. Саставити програм који учита низ целих бројева дужине n и проналази и исписује највећи
// елемент. Елементе сместити у динамички алоцирану меморију.

#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,i,*niz,maks = 0;
    printf("Unesite duzinu:");
    scanf("%d",&n);
    niz = (int*)malloc(n*sizeof(int));

    for(i = 0; i < n; i++){
        scanf("%d",&niz[i]);
    }
     for(i = 0; i < n; i++){
        if(niz[i] > maks){
            maks = niz[i];
        }
        printf("%d ",niz[i]);
    }
    printf("\nNajveci elemnt je:%d",maks);
    free(niz);
    return 0;
}